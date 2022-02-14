
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int float4 ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static float *
FUNC_1(const float4 *VAR_0, int VAR_1, int VAR_2)
{
 float *VAR_3;
 int VAR_4,
    VAR_5 = 0;
 float VAR_6 = 0,
    VAR_7;
 float VAR_8;

 VAR_3 = (float *) FUNC_0((VAR_2 + 1) * sizeof(float));






 VAR_8 = 1.0f / ((float) (VAR_1 - 1));

 for (VAR_4 = 0; VAR_4 <= VAR_2; VAR_4++)
 {
  int VAR_9 = 0;







  while (VAR_5 < VAR_1 && VAR_0[VAR_5] <= VAR_4)
  {
   VAR_9++;
   VAR_5++;
  }

  if (VAR_9 > 0)
  {

   float VAR_10;


   if (VAR_5 < VAR_1)
    VAR_7 = VAR_0[VAR_5] - VAR_0[VAR_5 - 1];
   else
    VAR_7 = 0;






   VAR_10 = (float) (VAR_9 - 1);
   if (VAR_7 > 0)
    VAR_10 += 0.5f / VAR_7;
   if (VAR_6 > 0)
    VAR_10 += 0.5f / VAR_6;
   VAR_3[VAR_4] = VAR_8 * VAR_10;

   VAR_6 = VAR_7;
  }
  else
  {

   if (VAR_6 > 0)
    VAR_3[VAR_4] = VAR_8 / VAR_6;
   else
    VAR_3[VAR_4] = 0.0f;
  }
 }

 return VAR_3;
}
