
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SORT_TYPE ;


 int FUNC_0 (int const,int ) ;

__attribute__((used)) static __inline size_t FUNC_1(SORT_TYPE *VAR_0, const SORT_TYPE VAR_1,
    const size_t VAR_2) {
  size_t VAR_3, VAR_4, VAR_5;
  SORT_TYPE VAR_6;
  VAR_3 = 0;
  VAR_5 = VAR_2 - 1;
  VAR_4 = VAR_5 >> 1;


  if (FUNC_0(VAR_1, VAR_0[0]) < 0) {
    return 0;
  } else if (FUNC_0(VAR_1, VAR_0[VAR_5]) > 0) {
    return VAR_5;
  }

  VAR_6 = VAR_0[VAR_4];

  while (1) {
    const int VAR_7 = FUNC_0(VAR_1, VAR_6);

    if (VAR_7 < 0) {
      if (VAR_4 - VAR_3 <= 1) {
        return VAR_4;
      }

      VAR_5 = VAR_4;
    } else {
      if (VAR_5 - VAR_4 <= 1) {
        return VAR_4 + 1;
      }

      VAR_3 = VAR_4;
    }

    VAR_4 = VAR_3 + ((VAR_5 - VAR_3) >> 1);
    VAR_6 = VAR_0[VAR_4];
  }
}
