
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TypeCacheEntry ;
typedef int RangeType ;
typedef int RangeBound ;


 char VAR_0 ;
 char VAR_1 ;
 int * FUNC_0 (int *,int *,int *,int) ;
 int * FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (int *,int *,int *,int *,int*) ;
 char FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static RangeType *
FUNC_6(TypeCacheEntry *VAR_2, RangeType *VAR_3, RangeType *VAR_4)
{
 RangeType *VAR_5;
 RangeBound VAR_6,
    VAR_7;
 RangeBound VAR_8,
    VAR_9;
 bool VAR_10,
    VAR_11;
 char VAR_12,
    VAR_13;
 RangeBound *VAR_14;
 RangeBound *VAR_15;

 FUNC_3(VAR_2, VAR_3, &VAR_6, &VAR_8, &VAR_10);
 FUNC_3(VAR_2, VAR_4, &VAR_7, &VAR_9, &VAR_11);
 VAR_12 = FUNC_4(VAR_3);
 VAR_13 = FUNC_4(VAR_4);

 if (VAR_10)
 {

  if (VAR_13 & (VAR_1 | VAR_0))
   return VAR_4;

  VAR_4 = FUNC_1(VAR_4);
  FUNC_5(VAR_4);
  return VAR_4;
 }
 if (VAR_11)
 {

  if (VAR_12 & (VAR_1 | VAR_0))
   return VAR_3;

  VAR_3 = FUNC_1(VAR_3);
  FUNC_5(VAR_3);
  return VAR_3;
 }

 if (FUNC_2(VAR_2, &VAR_6, &VAR_7) <= 0)
  VAR_14 = &VAR_6;
 else
  VAR_14 = &VAR_7;

 if (FUNC_2(VAR_2, &VAR_8, &VAR_9) >= 0)
  VAR_15 = &VAR_8;
 else
  VAR_15 = &VAR_9;


 if (VAR_14 == &VAR_6 && VAR_15 == &VAR_8 &&
  ((VAR_12 & VAR_0) || !(VAR_13 & VAR_0)))
  return VAR_3;
 if (VAR_14 == &VAR_7 && VAR_15 == &VAR_9 &&
  ((VAR_13 & VAR_0) || !(VAR_12 & VAR_0)))
  return VAR_4;

 VAR_5 = FUNC_0(VAR_2, VAR_14, VAR_15, 0);

 if ((VAR_12 & VAR_0) || (VAR_13 & VAR_0))
  FUNC_5(VAR_5);

 return VAR_5;
}
