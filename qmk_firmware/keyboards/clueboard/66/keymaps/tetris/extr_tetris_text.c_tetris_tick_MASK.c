
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,int ,int,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_1 ;
 int FUNC_3 (int ,int,int,int ,int ) ;
 int FUNC_4 (int ,int,int,int ,int,int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int ,int ,int,int) ;
 int FUNC_8 (int) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_9 (int,int) ;
 int FUNC_10 (int ,int,int) ;
 int VAR_10 ;
 int FUNC_11 (char*,char*,int) ;
 int VAR_11 ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 (char*) ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;

int FUNC_15(int VAR_15) {
  if (VAR_4) {
    return 0;
  }

  VAR_12 += VAR_15;

  if (VAR_3 || VAR_12 > VAR_5) {
    if (VAR_3 || FUNC_7(VAR_0, VAR_6, VAR_13, VAR_14 + 1)) {
      VAR_3 = 0;
      FUNC_0(VAR_6, VAR_0, VAR_13, VAR_14);

      VAR_9 += FUNC_1(VAR_0);

      VAR_1 = 500 - VAR_9 * 10;
      if (VAR_1 < 100) {
        VAR_1 = 100;
      }

      VAR_8 = 0;
      VAR_10 = VAR_7 % 7;
      VAR_7 = FUNC_8(VAR_7);
      FUNC_10(VAR_6, VAR_10, VAR_8);

      VAR_13 = 1;
      VAR_14 = - FUNC_5(VAR_6);
      FUNC_4(FUNC_6(VAR_10), 1 + VAR_13, VAR_14, VAR_6, 0, 0);

      if (FUNC_7(VAR_0, VAR_6, VAR_13, VAR_14)) {
        VAR_4 = 1;
        FUNC_9(12, 10);
        FUNC_14(" game over");
        FUNC_13();
        FUNC_14(" score ");
        char VAR_16[10];
        FUNC_11(VAR_16, "%d", VAR_9);
        FUNC_14(VAR_16);
        return 0;
      }
    } else {
      VAR_14++;
      FUNC_4(FUNC_6(VAR_10), 1 + VAR_13, VAR_14, VAR_6, 0, +1);
    }
    VAR_5 = VAR_12 + VAR_1;
  } else {

    switch (FUNC_12()) {
    case 1: {
      int VAR_17 = VAR_8;
      VAR_8 = (VAR_8 + 1) % 4;
      FUNC_2(VAR_6, VAR_11);
      FUNC_10(VAR_6, VAR_10, VAR_8);
      if (FUNC_7(VAR_0, VAR_6, VAR_13, VAR_14)) {
        VAR_8 = VAR_17;
        FUNC_10(VAR_6, VAR_10, VAR_8);
      } else {
        FUNC_3(FUNC_6(VAR_10), 1 + VAR_13, VAR_14, VAR_11, VAR_6);
      }
      break;
    }
    case 2:
      if (!FUNC_7(VAR_0, VAR_6, VAR_13 - 1, VAR_14)) {
        VAR_13--;
        FUNC_4(FUNC_6(VAR_10), 1 + VAR_13, VAR_14, VAR_6, -1, 0);
      }
      break;
    case 3: {
      int VAR_18 = VAR_14;
      while (!FUNC_7(VAR_0, VAR_6, VAR_13, VAR_14 + 1)) {
        VAR_14++;
      }

      FUNC_3(FUNC_6(VAR_10), VAR_13 + 1, VAR_18, VAR_6, VAR_2);
      FUNC_3(FUNC_6(VAR_10), VAR_13 + 1, VAR_14, VAR_2, VAR_6);

      VAR_5 = VAR_12 + VAR_1;
      break;
    }
    case 4:
      if (!FUNC_7(VAR_0, VAR_6, VAR_13 + 1, VAR_14)) {
        VAR_13++;
        FUNC_4(FUNC_6(VAR_10), 1 + VAR_13, VAR_14, VAR_6, 1, 0);
      }
      break;
    }
  }
  return 1;
}
