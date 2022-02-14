
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float VAR_0 ;
 float VAR_1 ;
 float FUNC_0 (float) ;

__attribute__((used)) static int FUNC_1(float VAR_2, float VAR_3, float VAR_4, float *VAR_5, float *VAR_6)
{
 if (VAR_2 == 0)
 {
  if (VAR_3 < VAR_1 && VAR_3 > - VAR_1)
   goto tiny;
  else if (VAR_3 > 0)
   *VAR_5 = VAR_4;
  else
   *VAR_5 = -VAR_4;
  *VAR_6 = 0;
 }
 else if (VAR_3 == 0)
 {
  if (VAR_2 < VAR_1 && VAR_2 > - VAR_1)
   goto tiny;
  else if (VAR_2 > 0)
   *VAR_6 = -VAR_4;
  else
   *VAR_6 = VAR_4;
  *VAR_5 = 0;
 }
 else
 {
  float VAR_7 = VAR_2 * VAR_2 + VAR_3 * VAR_3;
  float VAR_8;

  if (VAR_7 < VAR_0)
   goto tiny;
  VAR_8 = VAR_4 / FUNC_0(VAR_7);
  *VAR_5 = VAR_3 * VAR_8;
  *VAR_6 = -VAR_2 * VAR_8;
 }
 return 0;
tiny:
 *VAR_5 = 0;
 *VAR_6 = 0;
 return 1;
}
