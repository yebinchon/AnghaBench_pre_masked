
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ b_called; scalar_t__ method; } ;
typedef TYPE_1__ doc_method ;
typedef TYPE_2__* XMLRPC_SERVER ;
typedef scalar_t__ XMLRPC_IntrospectionCallback ;
struct TYPE_8__ {int docslist; } ;


 scalar_t__ FUNC_0 (int *,TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_1__*) ;

int FUNC_3(XMLRPC_SERVER VAR_0, XMLRPC_IntrospectionCallback VAR_1) {
   int VAR_2 = 0;
   if(VAR_0 && VAR_1) {

      doc_method* VAR_3 = FUNC_1(1, sizeof(doc_method));

      if(VAR_3) {
         VAR_3->method = VAR_1;
         VAR_3->b_called = 0;

         if(FUNC_0(&VAR_0->docslist, VAR_3)) {
            VAR_2 = 1;
         }
         else {
            FUNC_2(VAR_3);
         }
      }
   }
   return VAR_2;
}
