
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_3__* data; } ;
typedef TYPE_2__ php_http_parser ;
struct TYPE_5__ {size_t query_string_len; int query_string; } ;
struct TYPE_7__ {TYPE_1__ request; } ;
typedef TYPE_3__ php_cli_server_client ;


 int FUNC_0 (char const*,size_t,int) ;

__attribute__((used)) static int FUNC_1(php_http_parser *VAR_0, const char *VAR_1, size_t VAR_2)
{
 php_cli_server_client *VAR_3 = VAR_0->data;
 VAR_3->request.query_string = FUNC_0(VAR_1, VAR_2, 1);
 VAR_3->request.query_string_len = VAR_2;
 return 0;
}
