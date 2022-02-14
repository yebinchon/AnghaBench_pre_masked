
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TypeCacheEntry ;
typedef double Selectivity ;
typedef int RangeBound ;


 scalar_t__ FUNC_0 (int,int ) ;
 double FUNC_1 (int *,int const*,int const*,int const*) ;
 int FUNC_2 (int *,int const*,int const*,int,int) ;

__attribute__((used)) static double
FUNC_3(TypeCacheEntry *VAR_0, const RangeBound *VAR_1,
        const RangeBound *VAR_2, int VAR_3, bool VAR_4)
{
 Selectivity VAR_5;
 int VAR_6;





 VAR_6 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 VAR_5 = (Selectivity) (FUNC_0(VAR_6, 0)) / (Selectivity) (VAR_3 - 1);


 if (VAR_6 >= 0 && VAR_6 < VAR_3 - 1)
  VAR_5 += FUNC_1(VAR_0, VAR_1, &VAR_2[VAR_6],
         &VAR_2[VAR_6 + 1]) / (Selectivity) (VAR_3 - 1);

 return VAR_5;
}
