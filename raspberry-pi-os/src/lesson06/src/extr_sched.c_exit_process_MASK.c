
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 TYPE_1__** VAR_3 ;

void FUNC_3(){
 FUNC_0();
 for (int VAR_4 = 0; VAR_4 < VAR_0; VAR_4++){
  if (VAR_3[VAR_4] == VAR_2) {
   VAR_3[VAR_4]->state = VAR_1;
   break;
  }
 }
 FUNC_1();
 FUNC_2();
}
