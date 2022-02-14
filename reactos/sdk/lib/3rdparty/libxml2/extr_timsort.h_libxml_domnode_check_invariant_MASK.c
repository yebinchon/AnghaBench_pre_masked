
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t length; } ;
typedef TYPE_1__ TIM_SORT_RUN_T ;



__attribute__((used)) static int FUNC_0(TIM_SORT_RUN_T *VAR_0, const int VAR_1) {
  size_t VAR_2, VAR_3, VAR_4;

  if (VAR_1 < 2) {
    return 1;
  }

  if (VAR_1 == 2) {
    const size_t VAR_5 = VAR_0[VAR_1 - 2].length;
    const size_t VAR_6 = VAR_0[VAR_1 - 1].length;

    if (VAR_5 <= VAR_6) {
      return 0;
    }

    return 1;
  }

  VAR_2 = VAR_0[VAR_1 - 3].length;
  VAR_3 = VAR_0[VAR_1 - 2].length;
  VAR_4 = VAR_0[VAR_1 - 1].length;

  if ((VAR_2 <= VAR_3 + VAR_4) || (VAR_3 <= VAR_4)) {
    return 0;
  }

  return 1;
}
