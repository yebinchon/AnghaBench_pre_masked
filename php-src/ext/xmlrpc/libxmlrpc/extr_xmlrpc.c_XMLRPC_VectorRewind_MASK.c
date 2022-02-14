
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_2__* XMLRPC_VALUE ;
struct TYPE_6__ {scalar_t__ type; TYPE_1__* v; } ;
struct TYPE_5__ {int q; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;

XMLRPC_VALUE FUNC_1(XMLRPC_VALUE VAR_1) {
   XMLRPC_VALUE VAR_2 = ((void*)0);
   if(VAR_1 && VAR_1->type == VAR_0 && VAR_1->v) {
      VAR_2 = (XMLRPC_VALUE)FUNC_0(VAR_1->v->q);
   }
   return VAR_2;
}
