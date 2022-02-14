
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;

void FUNC_2(const char *VAR_5) {
  for (int VAR_6 = 0; VAR_5[VAR_6] != 0; VAR_6++) {
    if (VAR_5[VAR_6] >= 'a' && VAR_5[VAR_6] <= 'z') {
      FUNC_0(VAR_2 + (VAR_5[VAR_6] - 'a'));
    } else if (VAR_5[VAR_6] >= 'A' && VAR_5[VAR_6] <= 'Z') {
      FUNC_1(VAR_2 + (VAR_5[VAR_6] - 'A'));
    } else if (VAR_5[VAR_6] >= '1' && VAR_5[VAR_6] <= '9') {
      FUNC_0(VAR_1 + (VAR_5[VAR_6] - '1'));
    } else {
      switch (VAR_5[VAR_6]) {
      case ' ': FUNC_0(VAR_4); break;
      case '.': FUNC_0(VAR_3); break;
      case '0': FUNC_0(VAR_0); break;
      }
    }
  }
}
