
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zend_string ;
struct TYPE_4__ {int headers_original_case; int headers; } ;
struct TYPE_5__ {scalar_t__ current_header_value_len; int * current_header_value; int current_header_name_len; int * current_header_name; scalar_t__ current_header_name_allocated; TYPE_1__ request; } ;
typedef TYPE_2__ php_cli_server_client ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int *,int *) ;
 int FUNC_4 (int ,int *,int ) ;
 int * FUNC_5 (int ,int) ;
 int * FUNC_6 (int *,int ,int) ;
 int FUNC_7 (int *,int) ;

__attribute__((used)) static void FUNC_8(php_cli_server_client *VAR_0)
{

 zend_string *VAR_1 = FUNC_6(VAR_0->current_header_name, VAR_0->current_header_name_len, 1);
 zend_string *VAR_2 = FUNC_5(VAR_0->current_header_name_len, 1);
 FUNC_4(FUNC_1(VAR_2), VAR_0->current_header_name, VAR_0->current_header_name_len);
 FUNC_0(VAR_1);
 FUNC_0(VAR_2);
 FUNC_3(&VAR_0->request.headers, VAR_2, VAR_0->current_header_value);
 FUNC_3(&VAR_0->request.headers_original_case, VAR_1, VAR_0->current_header_value);
 FUNC_7(VAR_2, 1);
 FUNC_7(VAR_1, 1);

 if (VAR_0->current_header_name_allocated) {
  FUNC_2(VAR_0->current_header_name, 1);
  VAR_0->current_header_name_allocated = 0;
 }
 VAR_0->current_header_name = ((void*)0);
 VAR_0->current_header_name_len = 0;
 VAR_0->current_header_value = ((void*)0);
 VAR_0->current_header_value_len = 0;
}
