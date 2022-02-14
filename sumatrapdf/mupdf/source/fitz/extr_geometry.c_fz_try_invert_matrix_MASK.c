
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {float a; float b; float c; float d; double e; double f; } ;
typedef TYPE_1__ fz_matrix ;


 double VAR_0 ;

int
FUNC_0(fz_matrix *VAR_1, fz_matrix VAR_2)
{
 double VAR_3 = (double)VAR_2.a;
 double VAR_4 = (double)VAR_2.b;
 double VAR_5 = (double)VAR_2.c;
 double VAR_6 = (double)VAR_2.d;
 double VAR_7, VAR_8, VAR_9, VAR_10;
 double VAR_11 = VAR_3 * VAR_6 - VAR_4 * VAR_5;
 if (VAR_11 >= -VAR_0 && VAR_11 <= VAR_0)
  return 1;
 VAR_11 = 1 / VAR_11;
 VAR_7 = VAR_6 * VAR_11;
 VAR_1->a = (float)VAR_7;
 VAR_8 = -VAR_4 * VAR_11;
 VAR_1->b = (float)VAR_8;
 VAR_9 = -VAR_5 * VAR_11;
 VAR_1->c = (float)VAR_9;
 VAR_10 = VAR_3 * VAR_11;
 VAR_1->d = (float)VAR_10;
 VAR_7 = -VAR_2.e * VAR_7 - VAR_2.f * VAR_9;
 VAR_1->f = (float)(-VAR_2.e * VAR_8 - VAR_2.f * VAR_10);
 VAR_1->e = (float)VAR_7;
 return 0;
}
