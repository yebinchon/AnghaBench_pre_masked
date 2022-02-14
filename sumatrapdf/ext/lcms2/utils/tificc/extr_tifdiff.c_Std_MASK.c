
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int n; int x2; int x; } ;
typedef TYPE_1__* LPSTAT ;


 double FUNC_0 (int) ;

__attribute__((used)) static
double FUNC_1(LPSTAT VAR_0)
{
    return FUNC_0((VAR_0->n * VAR_0->x2 - VAR_0->x * VAR_0->x) / (VAR_0->n*(VAR_0->n-1)));
}
