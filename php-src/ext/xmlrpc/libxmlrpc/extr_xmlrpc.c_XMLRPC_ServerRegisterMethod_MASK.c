
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * desc; scalar_t__ method; int name; } ;
typedef TYPE_1__ server_method ;
typedef TYPE_2__* XMLRPC_SERVER ;
typedef scalar_t__ XMLRPC_Callback ;
struct TYPE_7__ {int methodlist; } ;


 int FUNC_0 (int *,TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (char const*) ;

int FUNC_3(XMLRPC_SERVER VAR_0, const char *VAR_1, XMLRPC_Callback VAR_2) {
   if(VAR_0 && VAR_1 && VAR_2) {

      server_method* VAR_3 = FUNC_1(sizeof(server_method));

      if(VAR_3) {
         VAR_3->name = FUNC_2(VAR_1);
         VAR_3->method = VAR_2;
         VAR_3->desc = ((void*)0);

         return FUNC_0(&VAR_0->methodlist, VAR_3);
      }
   }
   return 0;
}
