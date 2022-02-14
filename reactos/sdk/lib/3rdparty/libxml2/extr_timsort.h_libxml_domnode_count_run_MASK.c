
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SORT_TYPE ;


 int FUNC_0 (int *,size_t const,size_t) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static size_t FUNC_3(SORT_TYPE *VAR_0, const size_t VAR_1, const size_t VAR_2) {
  size_t VAR_3;

  if (VAR_2 - VAR_1 == 1) {
    return 1;
  }

  if (VAR_1 >= VAR_2 - 2) {
    if (FUNC_1(VAR_0[VAR_2 - 2], VAR_0[VAR_2 - 1]) > 0) {
      FUNC_2(VAR_0[VAR_2 - 2], VAR_0[VAR_2 - 1]);
    }

    return 2;
  }

  VAR_3 = VAR_1 + 2;

  if (FUNC_1(VAR_0[VAR_1], VAR_0[VAR_1 + 1]) <= 0) {

    while (1) {
      if (VAR_3 == VAR_2 - 1) {
        break;
      }

      if (FUNC_1(VAR_0[VAR_3 - 1], VAR_0[VAR_3]) > 0) {
        break;
      }

      VAR_3++;
    }

    return VAR_3 - VAR_1;
  } else {

    while (1) {
      if (VAR_3 == VAR_2 - 1) {
        break;
      }

      if (FUNC_1(VAR_0[VAR_3 - 1], VAR_0[VAR_3]) <= 0) {
        break;
      }

      VAR_3++;
    }


    FUNC_0(VAR_0, VAR_1, VAR_3 - 1);
    return VAR_3 - VAR_1;
  }
}
