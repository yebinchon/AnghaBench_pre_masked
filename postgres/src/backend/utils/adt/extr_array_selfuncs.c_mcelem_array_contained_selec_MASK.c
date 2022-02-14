
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float float4 ;
typedef int TypeCacheEntry ;
typedef float Selectivity ;
typedef int Oid ;
typedef int Datum ;


 int FUNC_0 (float) ;
 float VAR_0 ;
 int VAR_1 ;
 float FUNC_1 (float,float) ;
 float* FUNC_2 (float*,int,int,float) ;
 float* FUNC_3 (float*,int,int) ;
 int FUNC_4 (int *,int *,int *) ;
 float FUNC_5 (float) ;
 int VAR_2 ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (float*) ;
 int FUNC_8 (float*,int,int,int ) ;
 double FUNC_9 (double) ;

__attribute__((used)) static Selectivity
FUNC_10(Datum *VAR_3, int VAR_4,
        float4 *VAR_5, int VAR_6,
        Datum *VAR_7, int VAR_8,
        float4 *VAR_9, int VAR_10,
        Oid VAR_11, TypeCacheEntry *VAR_12)
{
 int VAR_13,
    VAR_14,
    VAR_15 = 0;
 float VAR_16,
    VAR_17,
    VAR_18;
 float *VAR_19,
      *VAR_20,
      *VAR_21;
 float VAR_22,
    VAR_23,
    VAR_24;
 float *VAR_25;







 if (VAR_5 == ((void*)0) || VAR_6 != VAR_4 + 3)
  return VAR_0;


 if (VAR_9 == ((void*)0) || VAR_10 < 3)
  return VAR_0;






 VAR_17 = VAR_5[VAR_4];
 VAR_18 = VAR_5[VAR_4 + 2];
 VAR_22 = VAR_9[VAR_10 - 1];







 VAR_24 = VAR_22;





 VAR_23 = 1.0f;





 VAR_25 = (float *) FUNC_6(sizeof(float) * VAR_8);


 VAR_13 = 0;
 for (VAR_14 = 0; VAR_14 < VAR_8; VAR_14++)
 {
  bool VAR_26 = 0;


  if (VAR_14 > 0 &&
   FUNC_4(&VAR_7[VAR_14 - 1], &VAR_7[VAR_14], VAR_12) == 0)
   continue;






  while (VAR_13 < VAR_4)
  {
   int VAR_27 = FUNC_4(&VAR_3[VAR_13],
             &VAR_7[VAR_14],
             VAR_12);

   if (VAR_27 < 0)
   {
    VAR_23 *= (1.0f - VAR_5[VAR_13]);
    VAR_24 -= VAR_5[VAR_13];
    VAR_13++;
   }
   else
   {
    if (VAR_27 == 0)
     VAR_26 = 1;
    break;
   }
  }

  if (VAR_26)
  {

   VAR_25[VAR_15] = VAR_5[VAR_13];

   VAR_24 -= VAR_5[VAR_13];
   VAR_13++;
  }
  else
  {




   VAR_25[VAR_15] = FUNC_1(VAR_0,
           VAR_17 / 2);
  }

  VAR_15++;
 }





 while (VAR_13 < VAR_4)
 {
  VAR_23 *= (1.0f - VAR_5[VAR_13]);
  VAR_24 -= VAR_5[VAR_13];
  VAR_13++;
 }







 VAR_23 *= FUNC_5(-VAR_24);
 if ((VAR_4 + VAR_15) > 0 &&
  VAR_15 > 100 * VAR_4 / (VAR_4 + VAR_15))
 {




  double VAR_28 = (double) VAR_4;
  int VAR_29;

  VAR_29 = (int) ((FUNC_9(VAR_28 * VAR_28 + 4 * 100 * VAR_28) - VAR_28) / 2);


  FUNC_8(VAR_25, VAR_15, sizeof(float),
     VAR_2);
  VAR_15 = VAR_29;
 }






 VAR_19 = FUNC_2(VAR_25, VAR_15, VAR_15, 0.0f);
 VAR_20 = FUNC_2(VAR_5, VAR_4, VAR_15, VAR_24);


 VAR_21 = FUNC_3(VAR_9, VAR_10 - 1, VAR_15);

 VAR_16 = 0.0f;
 for (VAR_14 = 0; VAR_14 <= VAR_15; VAR_14++)
 {





  if (VAR_20[VAR_14] > 0)
   VAR_16 += VAR_21[VAR_14] * VAR_23 * VAR_19[VAR_14] / VAR_20[VAR_14];
 }

 FUNC_7(VAR_19);
 FUNC_7(VAR_20);
 FUNC_7(VAR_21);
 FUNC_7(VAR_25);


 VAR_16 *= (1.0f - VAR_18);

 FUNC_0(VAR_16);

 return VAR_16;
}
