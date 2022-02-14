
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TypeCacheEntry ;
typedef int RangeType ;
typedef int RangeBound ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int * FUNC_6 (int *,int *,int *,int) ;
 int FUNC_7 (int *,int *,int *) ;
 scalar_t__ FUNC_8 (int *,int *,int *) ;
 int FUNC_9 (int *,int *,int *,int *,int*) ;
 int FUNC_10 (int *,int *,int *) ;

__attribute__((used)) static RangeType *
FUNC_11(TypeCacheEntry *VAR_2, RangeType *VAR_3, RangeType *VAR_4,
      bool VAR_5)
{
 RangeBound VAR_6,
    VAR_7;
 RangeBound VAR_8,
    VAR_9;
 bool VAR_10,
    VAR_11;
 RangeBound *VAR_12;
 RangeBound *VAR_13;


 if (FUNC_1(VAR_3) != FUNC_1(VAR_4))
  FUNC_2(VAR_1, "range types do not match");

 FUNC_9(VAR_2, VAR_3, &VAR_6, &VAR_8, &VAR_10);
 FUNC_9(VAR_2, VAR_4, &VAR_7, &VAR_9, &VAR_11);


 if (VAR_10)
  return VAR_4;
 if (VAR_11)
  return VAR_3;

 if (VAR_5 &&
  !FUNC_0(FUNC_10(VAR_2, VAR_3, VAR_4)) &&
  !FUNC_0(FUNC_7(VAR_2, VAR_3, VAR_4)))
  FUNC_3(VAR_1,
    (FUNC_4(VAR_0),
     FUNC_5("result of range union would not be contiguous")));

 if (FUNC_8(VAR_2, &VAR_6, &VAR_7) < 0)
  VAR_12 = &VAR_6;
 else
  VAR_12 = &VAR_7;

 if (FUNC_8(VAR_2, &VAR_8, &VAR_9) > 0)
  VAR_13 = &VAR_8;
 else
  VAR_13 = &VAR_9;

 return FUNC_6(VAR_2, VAR_12, VAR_13, 0);
}
