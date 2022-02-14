
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int float8 ;
typedef int TypeCacheEntry ;
typedef int RangeBound ;
typedef int Datum ;


 double FUNC_0 (int *,int,int ,int ,int) ;
 int FUNC_1 (int *,int const*,int const*) ;
 double FUNC_2 (int *,int const*,int const*,int const*) ;
 int FUNC_3 (int *,int const*,int const*,int,int) ;

__attribute__((used)) static double
FUNC_4(TypeCacheEntry *VAR_0,
          const RangeBound *VAR_1, const RangeBound *VAR_2,
          const RangeBound *VAR_3, int VAR_4,
          Datum *VAR_5, int VAR_6)
{
 int VAR_7,
    VAR_8;
 double VAR_9,
    VAR_10;
 double VAR_11;
 float8 VAR_12;


 VAR_8 = FUNC_3(VAR_0, VAR_1, VAR_3, VAR_4,
         1);






 if (VAR_8 >= 0 && VAR_8 < VAR_4 - 1)
  VAR_10 = FUNC_2(VAR_0, VAR_1, &VAR_3[VAR_8],
            &VAR_3[VAR_8 + 1]);
 else
  VAR_10 = 0.0;
 VAR_12 = FUNC_1(VAR_0, VAR_1, VAR_2);
 VAR_11 = 0.0;
 VAR_9 = VAR_10;
 for (VAR_7 = VAR_8; VAR_7 >= 0; VAR_7--)
 {
  float8 VAR_13;
  double VAR_14;






  VAR_13 = FUNC_1(VAR_0, &VAR_3[VAR_7], VAR_2);





  VAR_14 =
   1.0 - FUNC_0(VAR_5,
          VAR_6,
          VAR_12, VAR_13, 0);

  VAR_11 += VAR_14 * VAR_9 / (double) (VAR_4 - 1);

  VAR_9 = 1.0;
  VAR_12 = VAR_13;
 }

 return VAR_11;
}
