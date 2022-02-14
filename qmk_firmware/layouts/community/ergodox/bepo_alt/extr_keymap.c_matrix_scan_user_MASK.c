
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mods; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int,int) ;
 TYPE_1__* VAR_3 ;

void FUNC_5(void) {


  if (VAR_3->mods & FUNC_1(VAR_2) ||
    ((FUNC_2() & FUNC_1(VAR_2)) && !FUNC_3())) {
    FUNC_4(1, 1);
  } else {
    FUNC_4(1, 0);
  }


  if (VAR_3->mods & FUNC_1(VAR_1) ||
    ((FUNC_2() & FUNC_1(VAR_1)) && !FUNC_3())) {
    FUNC_4(2, 1);
  } else {
    FUNC_4(2, 0);
  }


  if (FUNC_0(VAR_0)) {
    FUNC_4(3, 1);
  } else {
    FUNC_4(3, 0);
  }
}
