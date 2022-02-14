
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int d; int c; int b; int a; } ;
typedef TYPE_1__ fz_matrix ;


 float FUNC_0 (int ) ;

float
FUNC_1(fz_matrix VAR_0)
{
 float VAR_1 = FUNC_0(VAR_0.a);
 float VAR_2 = FUNC_0(VAR_0.b);
 if (VAR_1 < VAR_2)
  VAR_1 = VAR_2;
 VAR_2 = FUNC_0(VAR_0.c);
 if (VAR_1 < VAR_2)
  VAR_1 = VAR_2;
 VAR_2 = FUNC_0(VAR_0.d);
 if (VAR_1 < VAR_2)
  VAR_1 = VAR_2;
 return VAR_1;
}
