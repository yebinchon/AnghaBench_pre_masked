
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int XMLRPC_VALUE_TYPE_EASY ;
typedef TYPE_2__* XMLRPC_VALUE ;
struct TYPE_5__ {int type; TYPE_1__* v; } ;
struct TYPE_4__ {int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;






XMLRPC_VALUE_TYPE_EASY FUNC_0 (XMLRPC_VALUE VAR_4) {
 if (VAR_4) {
  switch (VAR_4->type) {
  case 132:
   switch (VAR_4->v->type) {
   case 129:
    return VAR_2;
   case 128:
    return VAR_3;
   case 130:
    return VAR_1;
   case 131:
    return VAR_0;
   }
  default:

   return(XMLRPC_VALUE_TYPE_EASY) VAR_4->type;
  }
 }
 return VAR_2;
}
