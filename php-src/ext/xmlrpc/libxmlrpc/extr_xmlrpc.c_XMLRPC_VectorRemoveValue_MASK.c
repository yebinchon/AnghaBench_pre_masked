
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ q_iter ;
typedef TYPE_2__* XMLRPC_VALUE ;
struct TYPE_8__ {TYPE_1__* v; } ;
struct TYPE_7__ {scalar_t__ q; } ;


 int FUNC_0 (scalar_t__,scalar_t__) ;
 TYPE_2__* FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_2__*) ;

int FUNC_5(XMLRPC_VALUE VAR_0, XMLRPC_VALUE VAR_1) {
   if(VAR_0 && VAR_0->v && VAR_0->v->q && VAR_1) {
       q_iter VAR_2 = FUNC_2(VAR_0->v->q);

       while(VAR_2) {
          XMLRPC_VALUE VAR_3 = FUNC_1(VAR_2);
          if(VAR_3 == VAR_1) {
             FUNC_4(VAR_3);
             FUNC_0(VAR_0->v->q, VAR_2);
             return 1;
          }
          VAR_2 = FUNC_3(VAR_2);
       }
   }
   return 0;
}
