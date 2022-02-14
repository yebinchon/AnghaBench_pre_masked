
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char**) ;
 int FUNC_1 (char**) ;

__attribute__((used)) static void FUNC_2(char VAR_0[7][7], int VAR_1, int VAR_2) {
  FUNC_0(VAR_0);
  switch (VAR_1) {
  case 0:
    if (VAR_2 % 2 == 0) {

      VAR_0[3][1] = 1;
      VAR_0[3][2] = 1;
      VAR_0[3][3] = 1;
      VAR_0[3][4] = 1;
    } else {




      VAR_0[1][3] = 1;
      VAR_0[2][3] = 1;
      VAR_0[3][3] = 1;
      VAR_0[4][3] = 1;
    }
    break;
  case 1:


    VAR_0[3][2] = 1;
    VAR_0[3][3] = 1;
    VAR_0[3][4] = 1;
    VAR_0[4][4] = 1;
    for (int VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
      FUNC_1(VAR_0);
    }
    break;
  case 2:


    VAR_0[3][2] = 1;
    VAR_0[3][3] = 1;
    VAR_0[3][4] = 1;
    VAR_0[4][2] = 1;
    for (int VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
      FUNC_1(VAR_0);
    }
    break;
  case 3:


    VAR_0[3][2] = 1;
    VAR_0[3][3] = 1;
    VAR_0[4][2] = 1;
    VAR_0[4][3] = 1;
    break;
  case 4:
    if (VAR_2 % 2 == 0) {


      VAR_0[3][2] = 1;
      VAR_0[3][3] = 1;
      VAR_0[4][3] = 1;
      VAR_0[4][4] = 1;
    } else {



      VAR_0[2][3] = 1;
      VAR_0[3][2] = 1;
      VAR_0[3][3] = 1;
      VAR_0[4][2] = 1;
    }
    break;
  case 5:


    VAR_0[3][2] = 1;
    VAR_0[3][3] = 1;
    VAR_0[3][4] = 1;
    VAR_0[4][3] = 1;
    for (int VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
      FUNC_1(VAR_0);
    }
    break;
  case 6:
    if (VAR_2 % 2 == 0) {


      VAR_0[3][3] = 1;
      VAR_0[3][4] = 1;
      VAR_0[4][2] = 1;
      VAR_0[4][3] = 1;
    } else {



      VAR_0[2][3] = 1;
      VAR_0[3][3] = 1;
      VAR_0[3][4] = 1;
      VAR_0[4][4] = 1;
    }
    break;
  }
}
