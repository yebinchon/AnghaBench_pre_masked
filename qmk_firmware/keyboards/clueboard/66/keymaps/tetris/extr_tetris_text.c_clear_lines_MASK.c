
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(char VAR_2[20][10]) {
  int VAR_3 = 0;
  for (int VAR_4 = 19; VAR_4 >= 0; VAR_4--) {
    char VAR_5 = 1;
    for (int VAR_6 = 0; VAR_6 < 10; VAR_6++) {
      if (!VAR_2[VAR_4][VAR_6]) {
        VAR_5 = 0;
      }
    }
    if (VAR_5) {

      FUNC_2(12, VAR_4);
      FUNC_1(12);

      FUNC_3();
      VAR_1--;
      VAR_0 = 12;
      VAR_3++;
    } else {
      if (VAR_3 > 0) {

        for (int VAR_7 = 0; VAR_7 < 10; VAR_7++) {
          VAR_2[VAR_4 + VAR_3][VAR_7] = VAR_2[VAR_4][VAR_7];
        }
      }
    }
  }

  for (int VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
    for (int VAR_9 = 0; VAR_9 < 10; VAR_9++) {
      VAR_2[VAR_8][VAR_9] = 0;
    }
  }
  if (VAR_3 > 0) {
    FUNC_2(0, 0);
    for (int VAR_10 = 0; VAR_10 < VAR_3; VAR_10++) {
      FUNC_0();
      VAR_0 = 0;
      VAR_1++;
    }
  }
  return VAR_3;
}
