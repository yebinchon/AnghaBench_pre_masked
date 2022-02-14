
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ const VAR_0 ;

__attribute__((used)) static bool FUNC_1(const u8 *VAR_1, int VAR_2, u8 VAR_3, bool VAR_4)
{
 int VAR_5;


 if (FUNC_0(VAR_1[VAR_2 - 1] == VAR_0))
  return 0;

 VAR_5 = 0;
 while (VAR_5 < VAR_2) {
  if (VAR_1[VAR_5] == VAR_0) {
   if (VAR_4 && (VAR_1[VAR_5 + 1] == VAR_3))
    return 1;

   VAR_5 += 2;
   continue;
  }

  if (VAR_1[VAR_5] == VAR_3 && !VAR_4)
   return 1;

  VAR_5++;
 }
 return 0;
}
