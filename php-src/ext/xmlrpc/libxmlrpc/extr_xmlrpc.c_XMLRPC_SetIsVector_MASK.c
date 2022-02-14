
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int queue ;
typedef void* XMLRPC_VECTOR_TYPE ;
typedef TYPE_1__* XMLRPC_VALUE ;
struct TYPE_5__ {void* type; int * q; } ;
struct TYPE_4__ {scalar_t__ type; TYPE_2__* v; } ;
typedef int STRUCT_XMLRPC_VECTOR ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_2__* FUNC_2 (int,int) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ VAR_0 ;

int FUNC_4(XMLRPC_VALUE VAR_1, XMLRPC_VECTOR_TYPE VAR_2) {
   int VAR_3 = 0;

 if (VAR_1) {

  if(VAR_1->type == VAR_0) {
   if(VAR_1->v) {
    if(!FUNC_1(VAR_1->v->q)) {
     VAR_1->v->type = VAR_2;
    }
   }
  }
  else {
      VAR_1->v = FUNC_2(1, sizeof(STRUCT_XMLRPC_VECTOR));
      if(VAR_1->v) {
         VAR_1->v->q = (queue*)FUNC_3(sizeof(queue));
         if(VAR_1->v->q) {
            FUNC_0(VAR_1->v->q);
            VAR_1->v->type = VAR_2;
            VAR_1->type = VAR_0;
            VAR_3 = 1;
         }
      }
   }
 }

   return VAR_3;
}
