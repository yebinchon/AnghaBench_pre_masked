
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fz_context ;



__attribute__((used)) static void
FUNC_0(fz_context *VAR_0, float VAR_1[], int VAR_2, int VAR_3, float VAR_4[], int VAR_5, int VAR_6, float VAR_7[])
{
 float *VAR_8;
 int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
 float VAR_14;

 VAR_13 = VAR_2;
 VAR_12 = VAR_6;
 if (VAR_3 == VAR_5)
 {
  for (VAR_9 = 0; VAR_9 < VAR_13; VAR_9++)
  {
   VAR_8 = &(VAR_1[VAR_9*VAR_3]);
   for (VAR_10 = 0; VAR_10 < VAR_12; VAR_10++)
   {
    VAR_14 = 0.0;
    for (VAR_11 = 0; VAR_11 < VAR_3; VAR_11++)
     VAR_14 = VAR_14 + VAR_8[VAR_11] * VAR_4[VAR_11*VAR_6 + VAR_10];
    VAR_7[VAR_9*VAR_12 + VAR_10] = VAR_14;
   }
  }
 }
}
