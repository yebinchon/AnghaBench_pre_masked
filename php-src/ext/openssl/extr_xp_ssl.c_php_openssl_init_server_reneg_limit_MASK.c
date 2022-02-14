
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zval ;
typedef scalar_t__ zend_long ;
typedef int php_stream ;
struct TYPE_5__ {int ssl_handle; TYPE_1__* reneg; } ;
typedef TYPE_2__ php_openssl_netstream_data_t ;
typedef int php_openssl_handshake_bucket_t ;
struct TYPE_4__ {scalar_t__ should_close; scalar_t__ tokens; scalar_t__ prev_handshake; scalar_t__ window; scalar_t__ limit; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int,int ) ;
 int VAR_2 ;
 int * FUNC_3 (scalar_t__,char*,char*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(php_stream *VAR_3, php_openssl_netstream_data_t *VAR_4)
{
 zval *VAR_5;
 zend_long VAR_6 = VAR_0;
 zend_long VAR_7 = VAR_1;

 if (FUNC_0(VAR_3) &&
  ((void*)0) != (VAR_5 = FUNC_3(FUNC_0(VAR_3), "ssl", "reneg_limit"))
 ) {
  VAR_6 = FUNC_5(VAR_5);
 }


 if (VAR_6 < 0) {
  return;
 }

 if (FUNC_0(VAR_3) &&
  ((void*)0) != (VAR_5 = FUNC_3(FUNC_0(VAR_3), "ssl", "reneg_window"))
 ) {
  VAR_7 = FUNC_5(VAR_5);
 }

 VAR_4->reneg = (void*)FUNC_2(sizeof(php_openssl_handshake_bucket_t),
  FUNC_4(VAR_3)
 );

 VAR_4->reneg->limit = VAR_6;
 VAR_4->reneg->window = VAR_7;
 VAR_4->reneg->prev_handshake = 0;
 VAR_4->reneg->tokens = 0;
 VAR_4->reneg->should_close = 0;

 FUNC_1(VAR_4->ssl_handle, VAR_2);
}
