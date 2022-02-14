
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int MemoryContext ;
typedef int Bitmapset ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (int *,int) ;
 int * FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int ,int) ;
 int * FUNC_8 (int *,int *) ;
 int * FUNC_9 (int) ;
 void* FUNC_10 (int) ;

Bitmapset *
FUNC_11(int VAR_2, int VAR_3,
     int *VAR_4, double *VAR_5)
{
 MemoryContext VAR_6 = FUNC_0(VAR_1,
             "Knapsack",
             VAR_0);
 MemoryContext VAR_7 = FUNC_3(VAR_6);
 double *VAR_8;
 Bitmapset **VAR_9;
 Bitmapset *VAR_10;
 int VAR_11,
    VAR_12;

 FUNC_1(VAR_2 >= 0);
 FUNC_1(VAR_3 > 0 && VAR_4);

 VAR_8 = FUNC_10((1 + VAR_2) * sizeof(double));
 VAR_9 = FUNC_10((1 + VAR_2) * sizeof(Bitmapset *));

 for (VAR_11 = 0; VAR_11 <= VAR_2; ++VAR_11)
 {
  VAR_8[VAR_11] = 0;
  VAR_9[VAR_11] = FUNC_9(VAR_3);
 }

 for (VAR_11 = 0; VAR_11 < VAR_3; ++VAR_11)
 {
  int VAR_13 = VAR_4[VAR_11];
  double VAR_14 = VAR_5 ? VAR_5[VAR_11] : 1;

  for (VAR_12 = VAR_2; VAR_12 >= VAR_13; --VAR_12)
  {
   int VAR_15 = VAR_12 - VAR_13;

   if (VAR_8[VAR_12] <= VAR_8[VAR_15] + VAR_14)
   {

    if (VAR_12 != VAR_15)
    {
     VAR_9[VAR_12] = FUNC_8(VAR_9[VAR_12], VAR_9[VAR_12]);
     VAR_9[VAR_12] = FUNC_5(VAR_9[VAR_12], VAR_9[VAR_15]);
    }

    VAR_9[VAR_12] = FUNC_4(VAR_9[VAR_12], VAR_11);

    VAR_8[VAR_12] = VAR_8[VAR_15] + VAR_14;
   }
  }
 }

 FUNC_3(VAR_7);

 VAR_10 = FUNC_7(FUNC_6(VAR_9[VAR_2]), VAR_3);

 FUNC_2(VAR_6);

 return VAR_10;
}
