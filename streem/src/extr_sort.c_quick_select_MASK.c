
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int strm_value ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static strm_value
FUNC_2(strm_value VAR_0[], int VAR_1)
{
  int VAR_2, VAR_3;
  int VAR_4;
  int VAR_5, VAR_6, VAR_7;

  VAR_2 = 0; VAR_3 = VAR_1-1; VAR_4 = (VAR_2 + VAR_3) / 2;
  for (;;) {
    if (VAR_3 <= VAR_2)
      return VAR_0[VAR_4];

    if (VAR_3 == VAR_2 + 1) {
      if (FUNC_0(VAR_0[VAR_2],VAR_0[VAR_3]))
        FUNC_1(VAR_0[VAR_2], VAR_0[VAR_3]);
      return VAR_0[VAR_4];
    }


    VAR_5 = (VAR_2 + VAR_3) / 2;
    if (FUNC_0(VAR_0[VAR_5], VAR_0[VAR_3])) FUNC_1(VAR_0[VAR_5], VAR_0[VAR_3]);
    if (FUNC_0(VAR_0[VAR_2], VAR_0[VAR_3])) FUNC_1(VAR_0[VAR_2], VAR_0[VAR_3]);
    if (FUNC_0(VAR_0[VAR_5], VAR_0[VAR_2])) FUNC_1(VAR_0[VAR_5], VAR_0[VAR_2]);


    FUNC_1(VAR_0[VAR_5], VAR_0[VAR_2+1]);


    VAR_6 = VAR_2 + 1;
    VAR_7 = VAR_3;
    for (;;) {
      do VAR_6++; while (FUNC_0(VAR_0[VAR_2], VAR_0[VAR_6]));
      do VAR_7--; while (FUNC_0(VAR_0[VAR_7], VAR_0[VAR_2]));

      if (VAR_7 < VAR_6)
        break;

      FUNC_1(VAR_0[VAR_6], VAR_0[VAR_7]);
    }


    FUNC_1(VAR_0[VAR_2], VAR_0[VAR_7]);


    if (VAR_7 <= VAR_4)
      VAR_2 = VAR_6;
    if (VAR_7 >= VAR_4)
      VAR_3 = VAR_7 - 1;
  }
}
