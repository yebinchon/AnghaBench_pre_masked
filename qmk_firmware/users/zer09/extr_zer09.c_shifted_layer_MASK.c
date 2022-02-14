
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

bool FUNC_2(void) {
  static bool VAR_3 = 0;

  if (VAR_2 == VAR_1) {
    if (!VAR_3) {
      FUNC_0(VAR_0);
      VAR_3 = 1;
      return 1;
    }
  } else {
    if (VAR_3) {
      FUNC_1(VAR_0);
      VAR_3 = 0;
      return 1;
    }
  }

  return 0;
}
