
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {float e; float f; int d; int c; int b; int a; } ;
typedef TYPE_1__ fz_matrix ;
typedef int fz_context ;


 float FUNC_0 (float) ;
 float FUNC_1 (TYPE_1__) ;

float
FUNC_2(fz_context *VAR_0, fz_matrix *VAR_1, fz_matrix *VAR_2, unsigned char *VAR_3, unsigned char *VAR_4)
{
 float VAR_5 = FUNC_1(*VAR_1);
 int VAR_6;
 float VAR_7, VAR_8, VAR_9;




 if (VAR_5 >= 48)
  VAR_6 = 0, VAR_9 = 0.5f;
 else if (VAR_5 >= 24)
  VAR_6 = 128, VAR_9 = 0.25f;
 else
  VAR_6 = 192, VAR_9 = 0.125f;


 VAR_2->a = VAR_1->a;
 VAR_2->b = VAR_1->b;
 VAR_2->c = VAR_1->c;
 VAR_2->d = VAR_1->d;
 VAR_2->e = VAR_1->e + VAR_9;
 VAR_7 = FUNC_0(VAR_2->e);
 VAR_2->e -= VAR_7;
 VAR_2->f = VAR_1->f + VAR_9;
 VAR_8 = FUNC_0(VAR_2->f);
 VAR_2->f -= VAR_8;


 *VAR_3 = (int)(VAR_2->e * 256) & VAR_6;
 VAR_2->e = *VAR_3 / 256.0f;
 *VAR_4 = (int)(VAR_2->f * 256) & VAR_6;
 VAR_2->f = *VAR_4 / 256.0f;


 VAR_1->e = VAR_2->e + VAR_7;
 VAR_1->f = VAR_2->f + VAR_8;

 return VAR_5;
}
