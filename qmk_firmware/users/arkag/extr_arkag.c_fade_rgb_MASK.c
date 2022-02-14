
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_3__ {int h; } ;



 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_1__,int) ;
 scalar_t__ VAR_5 ;

 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 () ;
 TYPE_1__ VAR_6 ;

void FUNC_3 (void) {
  static uint16_t VAR_7;
  if (VAR_5 == VAR_0) {return;}
  if (!VAR_7) {VAR_7 = FUNC_2();}
  if (FUNC_1(VAR_7) < VAR_1) {return;}
  switch (VAR_2) {
  case 129:
    if (VAR_6.h == 359) {
      VAR_2 = 128;
      return;
    }
    VAR_6.h = VAR_6.h + 1;
    break;

  case 128:
    if (VAR_6.h == 0) {
      VAR_2 = 129;
      return;
    }
    VAR_6.h = VAR_6.h - 1;
    break;
  }
  VAR_7 = FUNC_2();
  if (VAR_3 == VAR_4) {
    FUNC_0(VAR_6, 0);
  }
}
