
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {float a; float b; float c; float d; scalar_t__ f; scalar_t__ e; } ;
typedef TYPE_1__ fz_matrix ;


 scalar_t__ VAR_0 ;
 float VAR_1 ;
 float FUNC_0 (float) ;
 scalar_t__ FUNC_1 (float) ;
 float FUNC_2 (float) ;

fz_matrix
FUNC_3(float VAR_2)
{
 fz_matrix VAR_3;
 float VAR_4;
 float VAR_5;

 while (VAR_2 < 0)
  VAR_2 += 360;
 while (VAR_2 >= 360)
  VAR_2 -= 360;

 if (FUNC_1(0 - VAR_2) < VAR_0)
 {
  VAR_4 = 0;
  VAR_5 = 1;
 }
 else if (FUNC_1(90.0f - VAR_2) < VAR_0)
 {
  VAR_4 = 1;
  VAR_5 = 0;
 }
 else if (FUNC_1(180.0f - VAR_2) < VAR_0)
 {
  VAR_4 = 0;
  VAR_5 = -1;
 }
 else if (FUNC_1(270.0f - VAR_2) < VAR_0)
 {
  VAR_4 = -1;
  VAR_5 = 0;
 }
 else
 {
  VAR_4 = FUNC_2(VAR_2 * VAR_1 / 180);
  VAR_5 = FUNC_0(VAR_2 * VAR_1 / 180);
 }

 VAR_3.a = VAR_5; VAR_3.b = VAR_4;
 VAR_3.c = -VAR_4; VAR_3.d = VAR_5;
 VAR_3.e = 0; VAR_3.f = 0;
 return VAR_3;
}
