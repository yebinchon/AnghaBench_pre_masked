
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int16 ;
typedef int Datum ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static bool
FUNC_1(Datum *VAR_0, int VAR_1, int16 VAR_2, int *VAR_3)
{
 int VAR_4 = 0,
    VAR_5 = VAR_1;

 while (VAR_4 < VAR_5)
 {
  int VAR_6 = (VAR_4 + VAR_5) >> 1;
  int16 VAR_7 = FUNC_0(VAR_0[VAR_6]);

  if (VAR_2 < VAR_7)
   VAR_5 = VAR_6;
  else if (VAR_2 > VAR_7)
   VAR_4 = VAR_6 + 1;
  else
  {
   *VAR_3 = VAR_6;
   return 1;
  }
 }

 *VAR_3 = VAR_5;
 return 0;
}
