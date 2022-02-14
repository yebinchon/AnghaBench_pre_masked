
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int zval ;
typedef int zend_long ;
struct TYPE_14__ {int method; TYPE_4__* session; } ;
struct TYPE_16__ {TYPE_3__ inputs; } ;
typedef TYPE_5__ php_stream_xport_crypto_param ;
typedef int php_stream ;
struct TYPE_13__ {int socket; scalar_t__ is_blocked; } ;
struct TYPE_12__ {unsigned char* data; unsigned short len; } ;
struct TYPE_17__ {int is_client; int * ssl_handle; TYPE_2__ s; TYPE_1__ alpn_ctx; int * ctx; } ;
typedef TYPE_6__ php_openssl_netstream_data_t ;
struct TYPE_15__ {scalar_t__ abstract; int * ops; } ;
typedef int SSL_METHOD ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*,char*) ;
 char* VAR_2 ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int const*) ;
 int FUNC_7 (int *,unsigned char*,unsigned short) ;
 int FUNC_8 (int *,int ,TYPE_6__*) ;
 int FUNC_9 (int *,char*) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int *,int) ;
 int FUNC_15 (int *,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_16 (int *,int *) ;
 int FUNC_17 (int *) ;
 int * FUNC_18 (int *) ;
 int FUNC_19 (int *,int ,int *) ;
 int FUNC_20 (int *,int ) ;
 int FUNC_21 (int *,int) ;
 int * FUNC_22 () ;
 int * FUNC_23 () ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_24 (unsigned char*) ;
 int FUNC_25 (unsigned char*,int ) ;
 scalar_t__ FUNC_26 (char const*,unsigned short,int ) ;
 int FUNC_27 (int *,int ,char*) ;
 unsigned char* FUNC_28 (unsigned short*,char*) ;
 int FUNC_29 (int *,int *) ;
 int FUNC_30 (int *,int *) ;
 int FUNC_31 (int *,TYPE_6__*) ;
 int FUNC_32 (int) ;
 int FUNC_33 (int) ;
 int FUNC_34 (int) ;
 int FUNC_35 (int,int,int) ;
 int FUNC_36 () ;
 int FUNC_37 (int *,int ,int) ;
 int FUNC_38 (int *,TYPE_6__*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_39 (int *,int *) ;
 int FUNC_40 (int *,int *) ;
 int VAR_12 ;
 int FUNC_41 (int *) ;
 scalar_t__ FUNC_42 (int *) ;
 int FUNC_43 (int *) ;

int FUNC_44(php_stream *VAR_13,
  php_openssl_netstream_data_t *VAR_14,
  php_stream_xport_crypto_param *VAR_15)
{
 const SSL_METHOD *VAR_16;
 int VAR_17;
 int VAR_18;
 zend_long VAR_19 = 0;
 zend_long VAR_20 = 0;
 char *VAR_21 = ((void*)0);
 char *VAR_22 = ((void*)0);
 zval *VAR_23;

 if (VAR_14->ssl_handle) {
  if (VAR_14->s.is_blocked) {
   FUNC_27(((void*)0), VAR_0, "SSL/TLS already set-up for this stream");
   return VAR_1;
  } else {
   return VAR_9;
  }
 }

 FUNC_0();



 VAR_14->is_client = VAR_15->inputs.method & VAR_8;
 VAR_18 = ((VAR_15->inputs.method >> 1) << 1);

 VAR_16 = VAR_14->is_client ? FUNC_22() : FUNC_23();
 VAR_14->ctx = FUNC_6(VAR_16);

 FUNC_2("min_proto_version", VAR_19);
 FUNC_2("max_proto_version", VAR_20);
 VAR_18 = FUNC_35(VAR_18, VAR_19, VAR_20);

 VAR_17 = FUNC_32(VAR_18);




 if (VAR_14->ctx == ((void*)0)) {
  FUNC_27(((void*)0), VAR_0, "SSL context creation failure");
  return VAR_1;
 }

 if (FUNC_1("no_ticket") && FUNC_42(VAR_23)) {
  VAR_17 |= VAR_7;
 }

 VAR_17 &= ~VAR_5;

 if (!FUNC_1("disable_compression") || FUNC_42(VAR_23)) {
  VAR_17 |= VAR_6;
 }

 if (FUNC_1("verify_peer") && !FUNC_42(VAR_23)) {
  FUNC_29(VAR_14->ctx, VAR_13);
 } else if (VAR_1 == FUNC_30(VAR_14->ctx, VAR_13)) {
  return VAR_1;
 }


 if (FUNC_1("passphrase")) {
  FUNC_11(VAR_14->ctx, VAR_13);
  FUNC_10(VAR_14->ctx, VAR_10);
 }

 FUNC_3("ciphers", VAR_21);

 if (!VAR_21) {
  VAR_21 = VAR_2;
 }

 if (VAR_21) {
  if (FUNC_9(VAR_14->ctx, VAR_21) != 1) {
   return VAR_1;
  }
 }

 if (FUNC_1("security_level")) {







  FUNC_27(((void*)0), VAR_0,
    "security_level is not supported by the linked OpenSSL library "
    "- it is supported from version 1.1.0");

 }

 FUNC_3("alpn_protocols", VAR_22);
 if (VAR_22) {
  FUNC_27(((void*)0), VAR_0,
   "alpn_protocols support is not compiled into the OpenSSL library against which PHP is linked");

 }

 if (VAR_1 == FUNC_39(VAR_14->ctx, VAR_13)) {
  return VAR_1;
 }

 FUNC_14(VAR_14->ctx, VAR_17);






 if (VAR_14->is_client == 0 &&
  FUNC_4(VAR_13) &&
  VAR_1 == FUNC_40(VAR_13, VAR_14->ctx)
 ) {
  return VAR_1;
 }

 VAR_14->ssl_handle = FUNC_18(VAR_14->ctx);

 if (VAR_14->ssl_handle == ((void*)0)) {
  FUNC_27(((void*)0), VAR_0, "SSL handle creation failure");
  FUNC_5(VAR_14->ctx);
  VAR_14->ctx = ((void*)0);






  return VAR_1;
 } else {
  FUNC_19(VAR_14->ssl_handle, FUNC_36(), VAR_13);
 }

 if (!FUNC_20(VAR_14->ssl_handle, VAR_14->s.socket)) {
  FUNC_37(VAR_13, 0, 1);
 }
 if (!VAR_14->is_client) {
  FUNC_38(VAR_13, VAR_14);
 }





 if (VAR_15->inputs.session) {
  if (VAR_15->inputs.session->ops != &VAR_12) {
   FUNC_27(((void*)0), VAR_0, "supplied session stream must be an SSL enabled stream");
  } else if (((php_openssl_netstream_data_t*)VAR_15->inputs.session->abstract)->ssl_handle == ((void*)0)) {
   FUNC_27(((void*)0), VAR_0, "supplied SSL session stream is not initialized");
  } else {
   FUNC_16(VAR_14->ssl_handle, ((php_openssl_netstream_data_t*)VAR_15->inputs.session->abstract)->ssl_handle);
  }
 }

 return VAR_9;
}
