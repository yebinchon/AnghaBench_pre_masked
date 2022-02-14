
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int XMLRPC_VECTOR_TYPE ;
typedef TYPE_2__* XMLRPC_VALUE ;
struct TYPE_5__ {TYPE_1__* v; } ;
struct TYPE_4__ {int type; } ;


 int VAR_0 ;

XMLRPC_VECTOR_TYPE FUNC_0(XMLRPC_VALUE VAR_1) {
   return(VAR_1 && VAR_1->v) ? VAR_1->v->type : VAR_0;
}
