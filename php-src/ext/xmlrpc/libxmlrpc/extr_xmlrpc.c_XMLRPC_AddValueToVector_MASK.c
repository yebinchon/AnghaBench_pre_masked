
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_3__* XMLRPC_VALUE ;
struct TYPE_9__ {int len; } ;
struct TYPE_11__ {scalar_t__ type; TYPE_2__* v; TYPE_1__ id; } ;
struct TYPE_10__ {scalar_t__ type; scalar_t__ q; } ;


 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,TYPE_3__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

int FUNC_3(XMLRPC_VALUE VAR_2, XMLRPC_VALUE VAR_3) {
   if(VAR_2 && VAR_3) {
      if(VAR_2->type == 128 && VAR_2->v &&
         VAR_2->v->q && VAR_2->v->type != VAR_1) {


         switch(VAR_3->type) {
            case 131:
            case 135:
            case 134:
            case 133:
            case 132:
            case 130:
            case 129:
            case 128:

               if( !(VAR_3->id.len && VAR_2->v->type == VAR_0) ) {
     if (FUNC_2 (VAR_2, VAR_3)
       || FUNC_0 (VAR_2->v->q, FUNC_1 (VAR_3))) {
                     return 1;
                  }
               }
               else {


               }
               break;
            default:


               break;
         }
      }
   }
   return 0;
}
