
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zval ;
struct TYPE_4__ {scalar_t__ abstract; } ;
typedef TYPE_1__ php_stream ;
struct TYPE_5__ {int is_client; char* url_name; } ;
typedef TYPE_2__ php_openssl_netstream_data_t ;
typedef int X509 ;
typedef int SSL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int *) ;
 int VAR_4 ;


 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,char*,...) ;
 scalar_t__ FUNC_6 (int *,char*) ;
 scalar_t__ FUNC_7 (int *,char*) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(SSL *VAR_5, X509 *VAR_6, php_stream *VAR_7)
{
 zval *VAR_8 = ((void*)0);
 zval *VAR_9;
 char *VAR_10 = ((void*)0);
 int VAR_11,
  VAR_12,
  VAR_13,
  VAR_14;

 php_openssl_netstream_data_t *VAR_15 = (php_openssl_netstream_data_t*)VAR_7->abstract;

 VAR_12 = FUNC_0("verify_peer")
  ? FUNC_9(VAR_8)
  : VAR_15->is_client;

 VAR_13 = FUNC_0("verify_peer_name")
  ? FUNC_9(VAR_8)
  : VAR_15->is_client;

 VAR_14 = FUNC_0("peer_fingerprint");
 VAR_9 = VAR_8;

 if ((VAR_12 || VAR_13 || VAR_14) && VAR_6 == ((void*)0)) {
  FUNC_5(((void*)0), VAR_0, "Could not get peer certificate");
  return VAR_1;
 }


 if (VAR_12) {
  VAR_11 = FUNC_2(VAR_5);
  switch (VAR_11) {
   case 128:

    break;
   case 129:
    if (FUNC_0("allow_self_signed") && FUNC_9(VAR_8)) {

     break;
    }

   default:
    FUNC_5(((void*)0), VAR_0,
      "Could not verify peer: code:%d %s",
      VAR_11,
      FUNC_3(VAR_11)
    );
    return VAR_1;
  }
 }


 if (VAR_14) {
  if (FUNC_4(VAR_9) == VAR_3 || FUNC_4(VAR_9) == VAR_2) {
   if (!FUNC_8(VAR_6, VAR_9)) {
    FUNC_5(((void*)0), VAR_0,
     "peer_fingerprint match failure"
    );
    return VAR_1;
   }
  } else {
   FUNC_5(((void*)0), VAR_0,
    "Expected peer fingerprint must be a string or an array"
   );
   return VAR_1;
  }
 }


 if (VAR_13) {
  FUNC_1("peer_name", VAR_10);


  if (VAR_10 == ((void*)0) && VAR_15->is_client) {
   VAR_10 = VAR_15->url_name;
  }

  if (VAR_10) {
   if (FUNC_7(VAR_6, VAR_10)) {
    return VAR_4;
   } else if (FUNC_6(VAR_6, VAR_10)) {
    return VAR_4;
   } else {
    return VAR_1;
   }
  } else {
   return VAR_1;
  }
 }

 return VAR_4;
}
