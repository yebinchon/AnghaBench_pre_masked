
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ stack; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 TYPE_1__** VAR_3 ;

void FUNC_4(){
 FUNC_1();
 for (int VAR_4 = 0; VAR_4 < VAR_0; VAR_4++){
  if (VAR_3[VAR_4] == VAR_2) {
   VAR_3[VAR_4]->state = VAR_1;
   break;
  }
 }
 if (VAR_2->stack) {
  FUNC_0(VAR_2->stack);
 }
 FUNC_2();
 FUNC_3();
}
