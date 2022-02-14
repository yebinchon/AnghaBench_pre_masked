
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zval ;
typedef int php_stream ;
struct TYPE_3__ {char* url_name; int ssl_handle; } ;
typedef TYPE_1__ php_openssl_netstream_data_t ;


 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(php_stream *VAR_0, php_openssl_netstream_data_t *VAR_1)
{
 zval *VAR_2;
 char *VAR_3;


 if (FUNC_0("SNI_enabled") && !FUNC_3(VAR_2)) {
  return;
 }

 VAR_3 = VAR_1->url_name;

 FUNC_1("peer_name", VAR_3);

 if (VAR_3) {
  FUNC_2(VAR_1->ssl_handle, VAR_3);
 }
}
