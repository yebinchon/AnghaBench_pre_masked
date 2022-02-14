
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;

 int FUNC_0 (int) ;

 int VAR_3 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int,int) ;

void FUNC_5 (void) {
  static uint16_t VAR_4;
  if (!VAR_4) {VAR_4 = FUNC_2();}
  static bool VAR_5, VAR_6, VAR_7;
  switch (VAR_3) {
  case 131:
    if (!VAR_5) {
      if (VAR_7) {FUNC_0(1);}
      VAR_5 = 1;
      VAR_6 = 0;
      VAR_7 = 0;
    }
    VAR_2 = FUNC_4(1, 25);
    if (FUNC_1(VAR_4) < VAR_0) {return;}
    VAR_4 = FUNC_2();
    VAR_3 = 129;
    return;

  case 129:
    if (!VAR_6) {
      VAR_6 = 1;
      VAR_5 = 0;
      VAR_7 = 0;
    }
    FUNC_3();
    VAR_2 = FUNC_4(1, 25);
    if (FUNC_1(VAR_4) < VAR_1) {return;}
    VAR_3 = 128;
    return;

  case 128:
    if (!VAR_7) {
      FUNC_0(5);
      VAR_7 = 1;
      VAR_5 = 0;
      VAR_6 = 0;
    }
    return;

  case 130:
    return;
  }
}
