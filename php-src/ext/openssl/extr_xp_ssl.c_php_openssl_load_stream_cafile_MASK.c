
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* wrapper; } ;
typedef TYPE_2__ php_stream ;
typedef int X509_STORE ;
typedef int X509 ;
struct TYPE_6__ {scalar_t__ is_url; } ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 () ;
 int VAR_0 ;
 int * FUNC_4 (int *,int *,int ,int *) ;
 scalar_t__ FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ,char*,...) ;
 int FUNC_9 (TYPE_2__*) ;
 char* FUNC_10 (TYPE_2__*,int *,int ,size_t*) ;
 TYPE_2__* FUNC_11 (char const*,char*,int ,int *) ;
 int FUNC_12 (char*,char*) ;

__attribute__((used)) static long FUNC_13(X509_STORE *VAR_1, const char *VAR_2)
{
 php_stream *VAR_3;
 X509 *VAR_4;
 BIO *VAR_5;
 int VAR_6 = 0;
 char *VAR_7 = ((void*)0);
 size_t VAR_8;
 long VAR_9 = 0;

 VAR_3 = FUNC_11(VAR_2, "rb", 0, ((void*)0));

 if (VAR_3 == ((void*)0)) {
  FUNC_8(VAR_0, "failed loading cafile stream: `%s'", VAR_2);
  return 0;
 } else if (VAR_3->wrapper->is_url) {
  FUNC_9(VAR_3);
  FUNC_8(VAR_0, "remote cafile streams are disabled for security purposes");
  return 0;
 }

 cert_start: {
  VAR_7 = FUNC_10(VAR_3, ((void*)0), 0, &VAR_8);
  if (VAR_7 == ((void*)0)) {
   goto stream_complete;
  } else if (!FUNC_12(VAR_7, "-----BEGIN CERTIFICATE-----\n") ||
   !FUNC_12(VAR_7, "-----BEGIN CERTIFICATE-----\r\n")
  ) {
   VAR_5 = FUNC_1(FUNC_3());
   VAR_6 = 1;
   goto cert_line;
  } else {
   FUNC_7(VAR_7);
   goto cert_start;
  }
 }

 cert_line: {
  FUNC_2(VAR_5, VAR_7);
  FUNC_7(VAR_7);
  VAR_7 = FUNC_10(VAR_3, ((void*)0), 0, &VAR_8);
  if (VAR_7 == ((void*)0)) {
   goto stream_complete;
  } else if (!FUNC_12(VAR_7, "-----END CERTIFICATE-----") ||
   !FUNC_12(VAR_7, "-----END CERTIFICATE-----\n") ||
   !FUNC_12(VAR_7, "-----END CERTIFICATE-----\r\n")
  ) {
   goto add_cert;
  } else {
   goto cert_line;
  }
 }

 add_cert: {
  FUNC_2(VAR_5, VAR_7);
  FUNC_7(VAR_7);
  VAR_4 = FUNC_4(VAR_5, ((void*)0), 0, ((void*)0));
  FUNC_0(VAR_5);
  VAR_6 = 0;
  if (VAR_4 && FUNC_5(VAR_1, VAR_4)) {
   ++VAR_9;
   FUNC_6(VAR_4);
  }
  goto cert_start;
 }

 stream_complete: {
  FUNC_9(VAR_3);
  if (VAR_6 == 1) {
   FUNC_0(VAR_5);
  }
 }

 if (VAR_9 == 0) {
  FUNC_8(VAR_0, "no valid certs found cafile stream: `%s'", VAR_2);
 }

 return VAR_9;
}
