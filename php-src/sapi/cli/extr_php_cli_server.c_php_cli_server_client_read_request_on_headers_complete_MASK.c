
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* data; } ;
typedef TYPE_1__ php_http_parser ;
struct TYPE_6__ {int last_header_element; char* current_header_value; int current_header_value_len; } ;
typedef TYPE_2__ php_cli_server_client ;





 char* FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_2(php_http_parser *VAR_0)
{
 php_cli_server_client *VAR_1 = VAR_0->data;
 switch (VAR_1->last_header_element) {
 case 129:
  break;
 case 130:
  VAR_1->current_header_value = FUNC_0(1, 1);
  *VAR_1->current_header_value = '\0';
  VAR_1->current_header_value_len = 0;

 case 128:
  FUNC_1(VAR_1);
  break;
 }
 VAR_1->last_header_element = 129;
 return 0;
}
