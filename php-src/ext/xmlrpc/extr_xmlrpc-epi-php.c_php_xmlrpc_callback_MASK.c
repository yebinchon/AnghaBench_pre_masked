
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zval ;
struct TYPE_4__ {int php_executed; int return_data; int php_function; int caller_params; int xmlrpc_method; TYPE_1__* server; } ;
typedef TYPE_2__ xmlrpc_callback_data ;
typedef int XMLRPC_VALUE ;
typedef int XMLRPC_SERVER ;
typedef int XMLRPC_REQUEST ;
struct TYPE_3__ {int method_map; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,int *,int *,int *,int,int *) ;
 int * FUNC_9 (int ,int ) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static XMLRPC_VALUE FUNC_11(XMLRPC_SERVER VAR_0, XMLRPC_REQUEST VAR_1, void* VAR_2)
{
 xmlrpc_callback_data* VAR_3 = (xmlrpc_callback_data*)VAR_2;
 zval* VAR_4;
 zval VAR_5;
 zval VAR_6[3];

 FUNC_10(&VAR_3->xmlrpc_method);
 FUNC_10(&VAR_3->return_data);


 FUNC_5(&VAR_3->xmlrpc_method, FUNC_2(VAR_1));
 FUNC_3(FUNC_1(VAR_1), &VAR_5);


 if ((VAR_4 = FUNC_9(FUNC_6(VAR_3->server->method_map), FUNC_7(VAR_3->xmlrpc_method))) != ((void*)0)) {
  FUNC_4(&VAR_3->php_function, VAR_4);
 }


 FUNC_4(&VAR_6[0], &VAR_3->xmlrpc_method);
 FUNC_4(&VAR_6[1], &VAR_5);
 FUNC_4(&VAR_6[2], &VAR_3->caller_params);




 FUNC_8(((void*)0), ((void*)0), &VAR_3->php_function, &VAR_3->return_data, 3, VAR_6);

 VAR_3->php_executed = 1;

 FUNC_10(&VAR_5);

 return FUNC_0(&VAR_3->return_data);
}
