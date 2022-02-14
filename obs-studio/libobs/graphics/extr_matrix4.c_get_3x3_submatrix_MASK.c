
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct matrix4 {int dummy; } ;



__attribute__((used)) static inline void FUNC_0(float *VAR_0, const struct matrix4 *VAR_1, int VAR_2,
         int VAR_3)
{
 const float *VAR_4 = (const float *)VAR_1;
 int VAR_5, VAR_6, VAR_7, VAR_8;

 for (VAR_5 = 0; VAR_5 < 4; VAR_5++) {
  if (VAR_5 < VAR_2)
   VAR_7 = VAR_5;
  else if (VAR_5 > VAR_2)
   VAR_7 = VAR_5 - 1;
  else
   continue;

  for (VAR_6 = 0; VAR_6 < 4; VAR_6++) {
   if (VAR_6 < VAR_3)
    VAR_8 = VAR_6;
   else if (VAR_6 > VAR_3)
    VAR_8 = VAR_6 - 1;
   else
    continue;

   VAR_0[(VAR_7 * 3) + VAR_8] = VAR_4[(VAR_5 * 4) + VAR_6];
  }
 }
}
