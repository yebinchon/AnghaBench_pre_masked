
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TypeCacheEntry ;
typedef int RangeBound ;


 int FUNC_0 (int *,int const*,int const*) ;
 int FUNC_1 (int *,int const*,int const*) ;

__attribute__((used)) static int
FUNC_2(TypeCacheEntry *VAR_0, const RangeBound *VAR_1,
        const RangeBound *VAR_2, const RangeBound *VAR_3)
{
 if (VAR_3)
 {
  int VAR_4;
  int VAR_5;





  VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_3);


  VAR_5 = FUNC_1(VAR_0, VAR_2, VAR_3);


  if ((VAR_4 < 0 && VAR_5 >= 0) || (VAR_4 > 0 && VAR_5 < 0))
   return 0;
 }

 return FUNC_0(VAR_0, VAR_1, VAR_2);
}
