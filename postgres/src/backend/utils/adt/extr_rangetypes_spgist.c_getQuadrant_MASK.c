
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int16 ;
typedef int TypeCacheEntry ;
typedef int RangeType ;
typedef int RangeBound ;


 scalar_t__ FUNC_0 (int *,int *,int *) ;
 int FUNC_1 (int *,int const*,int *,int *,int*) ;

__attribute__((used)) static int16
FUNC_2(TypeCacheEntry *VAR_0, const RangeType *VAR_1, const RangeType *VAR_2)
{
 RangeBound VAR_3,
    VAR_4;
 bool VAR_5;
 RangeBound VAR_6,
    VAR_7;
 bool VAR_8;

 FUNC_1(VAR_0, VAR_1, &VAR_3, &VAR_4,
       &VAR_5);
 FUNC_1(VAR_0, VAR_2, &VAR_6, &VAR_7, &VAR_8);

 if (VAR_8)
  return 5;

 if (FUNC_0(VAR_0, &VAR_6, &VAR_3) >= 0)
 {
  if (FUNC_0(VAR_0, &VAR_7, &VAR_4) >= 0)
   return 1;
  else
   return 2;
 }
 else
 {
  if (FUNC_0(VAR_0, &VAR_7, &VAR_4) >= 0)
   return 4;
  else
   return 3;
 }
}
