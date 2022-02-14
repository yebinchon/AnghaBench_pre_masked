
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int introspection_map; int method_map; int server_ptr; } ;
typedef TYPE_1__ xmlrpc_server_data ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(xmlrpc_server_data *VAR_0)
{
 if (VAR_0) {
  FUNC_0(VAR_0->server_ptr);

  FUNC_2(&VAR_0->method_map);
  FUNC_2(&VAR_0->introspection_map);

  FUNC_1(VAR_0);
 }
}
