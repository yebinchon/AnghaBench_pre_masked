
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int docslist; int methodlist; scalar_t__ xIntrospection; scalar_t__ desc; struct TYPE_8__* name; } ;
typedef TYPE_1__ server_method ;
typedef TYPE_1__ doc_method ;
typedef TYPE_1__* XMLRPC_SERVER ;


 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_1__*) ;

void FUNC_5(XMLRPC_SERVER VAR_0) {
   if(VAR_0) {
      doc_method* VAR_1 = FUNC_1(&VAR_0->docslist);
      server_method* VAR_2 = FUNC_1(&VAR_0->methodlist);
      while( VAR_1 ) {
         FUNC_4(VAR_1);
         VAR_1 = FUNC_2(&VAR_0->docslist);
      }
      while( VAR_2 ) {
         FUNC_4(VAR_2->name);
         if(VAR_2->desc) {
            FUNC_3(VAR_2->desc);
         }
         FUNC_4(VAR_2);
         VAR_2 = FUNC_2(&VAR_0->methodlist);
      }
      if (VAR_0->xIntrospection) {
         FUNC_3(VAR_0->xIntrospection);
      }

      FUNC_0(&VAR_0->methodlist);
      FUNC_0(&VAR_0->docslist);
      FUNC_4(VAR_0);
   }
}
