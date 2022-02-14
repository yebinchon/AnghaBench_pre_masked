
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TypeCacheEntry ;
typedef int RangeBound ;


 int FUNC_0 (int *,int const*,int const*) ;

__attribute__((used)) static int
FUNC_1(TypeCacheEntry *VAR_0, const RangeBound *VAR_1, const RangeBound *VAR_2,
      int VAR_3, bool VAR_4)
{
 int VAR_5 = -1,
    VAR_6 = VAR_3 - 1,
    VAR_7,
    VAR_8;

 while (VAR_5 < VAR_6)
 {
  VAR_8 = (VAR_5 + VAR_6 + 1) / 2;
  VAR_7 = FUNC_0(VAR_0, &VAR_2[VAR_8], VAR_1);

  if (VAR_7 < 0 || (VAR_4 && VAR_7 == 0))
   VAR_5 = VAR_8;
  else
   VAR_6 = VAR_8 - 1;
 }
 return VAR_5;
}
