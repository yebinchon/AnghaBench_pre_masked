
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int d; int a; int c; int b; } ;
typedef TYPE_1__ fz_matrix ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

int
FUNC_1(fz_matrix VAR_1)
{
 return (FUNC_0(VAR_1.b) < VAR_0 && FUNC_0(VAR_1.c) < VAR_0) ||
  (FUNC_0(VAR_1.a) < VAR_0 && FUNC_0(VAR_1.d) < VAR_0);
}
