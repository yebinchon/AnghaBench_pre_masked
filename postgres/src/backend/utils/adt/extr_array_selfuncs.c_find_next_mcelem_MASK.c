
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TypeCacheEntry ;
typedef int Datum ;


 int FUNC_0 (int *,int *,int *) ;

__attribute__((used)) static bool
FUNC_1(Datum *VAR_0, int VAR_1, Datum VAR_2, int *VAR_3,
     TypeCacheEntry *VAR_4)
{
 int VAR_5 = *VAR_3,
    VAR_6 = VAR_1 - 1,
    VAR_7,
    VAR_8;

 while (VAR_5 <= VAR_6)
 {
  VAR_7 = (VAR_5 + VAR_6) / 2;
  VAR_8 = FUNC_0(&VAR_0[VAR_7], &VAR_2, VAR_4);
  if (VAR_8 == 0)
  {
   *VAR_3 = VAR_7;
   return 1;
  }
  else if (VAR_8 < 0)
   VAR_5 = VAR_7 + 1;
  else
   VAR_6 = VAR_7 - 1;
 }
 *VAR_3 = VAR_5;
 return 0;
}
