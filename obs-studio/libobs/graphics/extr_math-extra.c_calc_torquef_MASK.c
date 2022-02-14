
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (float,float,int ) ;

float FUNC_1(float VAR_1, float VAR_2, float VAR_3, float VAR_4,
     float VAR_5)
{
 float VAR_6 = VAR_1;
 float VAR_7;
 bool VAR_8;

 if (FUNC_0(VAR_1, VAR_2, VAR_0))
  return VAR_1;

 VAR_7 = (VAR_2 - VAR_1) * VAR_3;
 VAR_8 = VAR_7 > 0.0f;

 if (VAR_8) {
  if (VAR_7 < VAR_4)
   VAR_7 = VAR_4;
  VAR_6 += VAR_7 * VAR_5;
  if (VAR_6 > VAR_2)
   VAR_6 = VAR_2;
 } else {
  if (VAR_7 > -VAR_4)
   VAR_7 = -VAR_4;
  VAR_6 += VAR_7 * VAR_5;
  if (VAR_6 < VAR_2)
   VAR_6 = VAR_2;
 }

 return VAR_6;
}
