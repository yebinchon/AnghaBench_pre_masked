
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
typedef int php_stream ;
typedef int SSL_CTX ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char const*) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int *,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (char const*,char*) ;
 int FUNC_5 (int *,int ,char*,...) ;

__attribute__((used)) static int FUNC_6(SSL_CTX *VAR_5, php_stream *VAR_6)
{
 zval *VAR_7 = ((void*)0);
 char *VAR_8 = ((void*)0);

 FUNC_0("local_cert", VAR_8);

 if (VAR_8) {
  char VAR_9[VAR_2];
  const char *VAR_10 = ((void*)0);

  if (FUNC_4(VAR_8, VAR_9)) {

   if (FUNC_3(VAR_5, VAR_9) != 1) {
    FUNC_5(((void*)0), VAR_0,
     "Unable to set local cert chain file `%s'; Check that your cafile/capath "
     "settings include details of your certificate and its issuer",
     VAR_8);
    return VAR_1;
   }
   FUNC_0("local_pk", VAR_10);

   if (VAR_10) {
    char VAR_11[VAR_2];
    if (FUNC_4(VAR_10, VAR_11)) {
     if (FUNC_2(VAR_5, VAR_11, VAR_3) != 1) {
      FUNC_5(((void*)0), VAR_0, "Unable to set private key file `%s'", VAR_11);
      return VAR_1;
     }
    }
   } else {
    if (FUNC_2(VAR_5, VAR_9, VAR_3) != 1) {
     FUNC_5(((void*)0), VAR_0, "Unable to set private key file `%s'", VAR_9);
     return VAR_1;
    }
   }

   if (!FUNC_1(VAR_5)) {
    FUNC_5(((void*)0), VAR_0, "Private key does not match certificate!");
   }
  }
 }

 return VAR_4;
}
