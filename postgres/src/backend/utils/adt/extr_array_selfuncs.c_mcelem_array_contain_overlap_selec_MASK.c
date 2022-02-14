
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32 ;
typedef int float4 ;
typedef int TypeCacheEntry ;
typedef double Selectivity ;
typedef scalar_t__ Oid ;
typedef int Datum ;


 int FUNC_0 (double) ;
 scalar_t__ VAR_0 ;
 double FUNC_1 (scalar_t__,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (int *,int,int ,int*,int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static Selectivity
FUNC_5(Datum *VAR_2, int VAR_3,
           float4 *VAR_4, int VAR_5,
           Datum *VAR_6, int VAR_7,
           Oid VAR_8, TypeCacheEntry *VAR_9)
{
 Selectivity VAR_10,
    VAR_11;
 int VAR_12,
    VAR_13;
 bool VAR_14;
 float4 VAR_15;







 if (VAR_5 != VAR_3 + 3)
 {
  VAR_4 = ((void*)0);
  VAR_5 = 0;
 }

 if (VAR_4)
 {

  VAR_15 = VAR_4[VAR_3];
 }
 else
 {

  VAR_15 = 2 * (float4) VAR_0;
 }


 if (VAR_7 * FUNC_4((uint32) VAR_3) < VAR_3 + VAR_7)
  VAR_14 = 1;
 else
  VAR_14 = 0;

 if (VAR_8 == VAR_1)
 {




  VAR_10 = 1.0;
 }
 else
 {




  VAR_10 = 0.0;
 }


 VAR_12 = 0;
 for (VAR_13 = 0; VAR_13 < VAR_7; VAR_13++)
 {
  bool VAR_16 = 0;


  if (VAR_13 > 0 &&
   FUNC_2(&VAR_6[VAR_13 - 1], &VAR_6[VAR_13], VAR_9) == 0)
   continue;


  if (VAR_14)
  {
   VAR_16 = FUNC_3(VAR_2, VAR_3, VAR_6[VAR_13],
          &VAR_12, VAR_9);
  }
  else
  {
   while (VAR_12 < VAR_3)
   {
    int VAR_17 = FUNC_2(&VAR_2[VAR_12],
              &VAR_6[VAR_13],
              VAR_9);

    if (VAR_17 < 0)
     VAR_12++;
    else
    {
     if (VAR_17 == 0)
      VAR_16 = 1;
     break;
    }
   }
  }

  if (VAR_16 && VAR_4)
  {

   VAR_11 = VAR_4[VAR_12];
   VAR_12++;
  }
  else
  {




   VAR_11 = FUNC_1(VAR_0, VAR_15 / 2);
  }





  if (VAR_8 == VAR_1)
   VAR_10 *= VAR_11;
  else
   VAR_10 = VAR_10 + VAR_11 - VAR_10 * VAR_11;


  FUNC_0(VAR_10);
 }

 return VAR_10;
}
