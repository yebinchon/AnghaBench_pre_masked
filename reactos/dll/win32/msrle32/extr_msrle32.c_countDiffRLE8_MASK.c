
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WORD ;
typedef scalar_t__ LONG ;
typedef scalar_t__ INT ;


 scalar_t__ FUNC_0 (int const,int const) ;

__attribute__((used)) static INT FUNC_1(const WORD *VAR_0, const WORD *VAR_1, const WORD *VAR_2, INT VAR_3, LONG VAR_4, LONG VAR_5)
{
  INT VAR_6;

  for (VAR_6 = 0; VAR_3 < VAR_5; VAR_3++, VAR_6++) {
    if (FUNC_0(VAR_1[VAR_3], VAR_2[VAR_3]) <= VAR_4) {

      if (VAR_3 + 1 < VAR_5 && FUNC_0(VAR_2[VAR_3], VAR_2[VAR_3+1]) <= VAR_4)
 return VAR_6 - 1;
      if (VAR_3 + 2 < VAR_5 && FUNC_0(VAR_2[VAR_3+1], VAR_2[VAR_3+2]) <= VAR_4)
 return VAR_6 - 1;
    } else if (VAR_0 != ((void*)0) && FUNC_0(VAR_0[VAR_3], VAR_2[VAR_3]) <= VAR_4) {

      INT VAR_7 = 0;

      for (VAR_7 = 0, VAR_3++; VAR_3 < VAR_5 && VAR_7 <= 5; VAR_3++, VAR_7++) {
 if (FUNC_0(VAR_0[VAR_3], VAR_2[VAR_3]) > VAR_4)
   break;
      }
      if (VAR_7 > 4)
 return VAR_6;

      VAR_3 -= VAR_7;
    }
  }

  return VAR_6;
}
