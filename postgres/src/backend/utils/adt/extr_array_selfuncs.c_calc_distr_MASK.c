
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float VAR_0 ;
 float FUNC_0 (float) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (float*) ;

__attribute__((used)) static float *
FUNC_3(const float *VAR_1, int VAR_2, int VAR_3, float VAR_4)
{
 float *VAR_5,
      *VAR_6,
      *VAR_7;
 int VAR_8,
    VAR_9;





 VAR_5 = (float *) FUNC_1((VAR_3 + 1) * sizeof(float));
 VAR_6 = (float *) FUNC_1((VAR_3 + 1) * sizeof(float));


 VAR_5[0] = 1.0f;
 for (VAR_8 = 1; VAR_8 <= VAR_2; VAR_8++)
 {
  float VAR_10 = VAR_1[VAR_8 - 1];


  VAR_7 = VAR_5;
  VAR_5 = VAR_6;
  VAR_6 = VAR_7;


  for (VAR_9 = 0; VAR_9 <= VAR_8 && VAR_9 <= VAR_3; VAR_9++)
  {
   float VAR_11 = 0.0f;

   if (VAR_9 < VAR_8)
    VAR_11 += VAR_6[VAR_9] * (1.0f - VAR_10);
   if (VAR_9 > 0)
    VAR_11 += VAR_6[VAR_9 - 1] * VAR_10;
   VAR_5[VAR_9] = VAR_11;
  }
 }






 if (VAR_4 > VAR_0)
 {
  float VAR_12;


  VAR_7 = VAR_5;
  VAR_5 = VAR_6;
  VAR_6 = VAR_7;

  for (VAR_8 = 0; VAR_8 <= VAR_3; VAR_8++)
   VAR_5[VAR_8] = 0.0f;


  VAR_12 = FUNC_0(-VAR_4);





  for (VAR_8 = 0; VAR_8 <= VAR_3; VAR_8++)
  {
   for (VAR_9 = 0; VAR_9 <= VAR_3 - VAR_8; VAR_9++)
    VAR_5[VAR_9 + VAR_8] += VAR_6[VAR_9] * VAR_12;


   VAR_12 *= VAR_4 / (float) (VAR_8 + 1);
  }
 }

 FUNC_2(VAR_6);
 return VAR_5;
}
