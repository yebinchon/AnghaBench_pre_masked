
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {float a; float d; float b; float c; float e; float f; } ;
typedef TYPE_1__ fz_matrix ;


 float VAR_0 ;

fz_matrix
FUNC_0(fz_matrix VAR_1)
{
 float VAR_2 = VAR_1.a;
 float VAR_3 = VAR_2 * VAR_1.d - VAR_1.b * VAR_1.c;
 if (VAR_3 < -VAR_0 || VAR_3 > VAR_0)
 {
  fz_matrix VAR_4;
  float VAR_5 = 1 / VAR_3;
  VAR_4.a = VAR_1.d * VAR_5;
  VAR_4.b = -VAR_1.b * VAR_5;
  VAR_4.c = -VAR_1.c * VAR_5;
  VAR_4.d = VAR_2 * VAR_5;
  VAR_2 = -VAR_1.e * VAR_4.a - VAR_1.f * VAR_4.c;
  VAR_4.f = -VAR_1.e * VAR_4.b - VAR_1.f * VAR_4.d;
  VAR_4.e = VAR_2;
  return VAR_4;
 }
 return VAR_1;
}
