
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {float a; float b; float c; float d; } ;
typedef TYPE_1__ fz_matrix ;


 scalar_t__ VAR_0 ;
 float VAR_1 ;
 float FUNC_0 (float) ;
 scalar_t__ FUNC_1 (float) ;
 float FUNC_2 (float) ;

fz_matrix
FUNC_3(fz_matrix VAR_2, float VAR_3)
{
 while (VAR_3 < 0)
  VAR_3 += 360;
 while (VAR_3 >= 360)
  VAR_3 -= 360;

 if (FUNC_1(0 - VAR_3) < VAR_0)
 {

 }
 else if (FUNC_1(90.0f - VAR_3) < VAR_0)
 {
  float VAR_4 = VAR_2.a;
  float VAR_5 = VAR_2.b;
  VAR_2.a = VAR_2.c;
  VAR_2.b = VAR_2.d;
  VAR_2.c = -VAR_4;
  VAR_2.d = -VAR_5;
 }
 else if (FUNC_1(180.0f - VAR_3) < VAR_0)
 {
  VAR_2.a = -VAR_2.a;
  VAR_2.b = -VAR_2.b;
  VAR_2.c = -VAR_2.c;
  VAR_2.d = -VAR_2.d;
 }
 else if (FUNC_1(270.0f - VAR_3) < VAR_0)
 {
  float VAR_6 = VAR_2.a;
  float VAR_7 = VAR_2.b;
  VAR_2.a = -VAR_2.c;
  VAR_2.b = -VAR_2.d;
  VAR_2.c = VAR_6;
  VAR_2.d = VAR_7;
 }
 else
 {
  float VAR_8 = FUNC_2(VAR_3 * VAR_1 / 180);
  float VAR_9 = FUNC_0(VAR_3 * VAR_1 / 180);
  float VAR_10 = VAR_2.a;
  float VAR_11 = VAR_2.b;
  VAR_2.a = VAR_9 * VAR_10 + VAR_8 * VAR_2.c;
  VAR_2.b = VAR_9 * VAR_11 + VAR_8 * VAR_2.d;
  VAR_2.c =-VAR_8 * VAR_10 + VAR_9 * VAR_2.c;
  VAR_2.d =-VAR_8 * VAR_11 + VAR_9 * VAR_2.d;
 }

 return VAR_2;
}
