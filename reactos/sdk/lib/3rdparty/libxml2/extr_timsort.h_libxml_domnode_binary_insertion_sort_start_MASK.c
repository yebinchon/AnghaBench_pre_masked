
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SORT_TYPE ;


 size_t FUNC_0 (int *,int ,size_t) ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(SORT_TYPE *VAR_0, const size_t VAR_1, const size_t VAR_2) {
  size_t VAR_3;

  for (VAR_3 = VAR_1; VAR_3 < VAR_2; VAR_3++) {
    size_t VAR_4;
    SORT_TYPE VAR_5;
    size_t VAR_6;


    if (FUNC_1(VAR_0[VAR_3 - 1], VAR_0[VAR_3]) <= 0) {
      continue;
    }


    VAR_5 = VAR_0[VAR_3];
    VAR_6 = FUNC_0(VAR_0, VAR_5, VAR_3);

    for (VAR_4 = VAR_3 - 1; VAR_4 >= VAR_6; VAR_4--) {
      VAR_0[VAR_4 + 1] = VAR_0[VAR_4];

      if (VAR_4 == 0) {
        break;
      }
    }

    VAR_0[VAR_6] = VAR_5;
  }
}
