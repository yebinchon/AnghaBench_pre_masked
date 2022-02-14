
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* XMLRPC_SERVER ;
struct TYPE_5__ {int docslist; int methodlist; } ;
typedef int STRUCT_XMLRPC_SERVER ;


 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_1__*) ;

XMLRPC_SERVER FUNC_3() {
   XMLRPC_SERVER VAR_0 = FUNC_1(1, sizeof(STRUCT_XMLRPC_SERVER));
   if(VAR_0) {
      FUNC_0(&VAR_0->methodlist);
      FUNC_0(&VAR_0->docslist);


      FUNC_2(VAR_0);
   }
   return VAR_0;
}
