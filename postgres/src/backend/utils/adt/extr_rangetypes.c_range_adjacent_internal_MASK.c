
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TypeCacheEntry ;
typedef int RangeType ;
typedef int RangeBound ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int const*) ;
 scalar_t__ FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *,int const*,int *,int *,int*) ;

bool
FUNC_4(TypeCacheEntry *VAR_1, const RangeType *VAR_2, const RangeType *VAR_3)
{
 RangeBound VAR_4,
    VAR_5;
 RangeBound VAR_6,
    VAR_7;
 bool VAR_8,
    VAR_9;


 if (FUNC_0(VAR_2) != FUNC_0(VAR_3))
  FUNC_2(VAR_0, "range types do not match");

 FUNC_3(VAR_1, VAR_2, &VAR_4, &VAR_6, &VAR_8);
 FUNC_3(VAR_1, VAR_3, &VAR_5, &VAR_7, &VAR_9);


 if (VAR_8 || VAR_9)
  return 0;





 return (FUNC_1(VAR_1, VAR_6, VAR_5) ||
   FUNC_1(VAR_1, VAR_7, VAR_4));
}
