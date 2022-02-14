
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(char VAR_2, const char VAR_3[7], const char VAR_4[7], int VAR_5, int VAR_6) {
  char VAR_7[2] = { VAR_2, 0 };
  char VAR_8[7] = { 0 };
  int VAR_9 = -1;
  int VAR_10 = -1;
  for (int VAR_11 = 0; VAR_11 < 7; VAR_11++) {
    if (VAR_3[VAR_11] && !VAR_4[VAR_11]) {
      VAR_8[VAR_11] = 1;
    }
    if (VAR_4[VAR_11] || VAR_3[VAR_11]) {
      if (VAR_9 == -1) VAR_9 = VAR_11;
      VAR_10 = VAR_11;
    }
  }

  if (VAR_9 >= 0) {
    if (VAR_0 > VAR_5 + VAR_10 + 1) {
      FUNC_2(VAR_5 + VAR_10 + 1, VAR_1);
    }
    if (VAR_0 < VAR_5 + VAR_9) {
      FUNC_2(VAR_5 + VAR_9, VAR_1);
    }
    FUNC_2(VAR_0, VAR_6);
    FUNC_1((VAR_5 + VAR_10 + 1) - VAR_0);
    FUNC_0(VAR_0 - (VAR_5 + VAR_9));
    for (int VAR_12 = VAR_9; VAR_12 <= VAR_10; VAR_12++) {
      if (VAR_8[VAR_12]) {
        FUNC_3(".");
      } else {
        FUNC_3(VAR_7);
      }
      VAR_0++;
    }
  }
}
