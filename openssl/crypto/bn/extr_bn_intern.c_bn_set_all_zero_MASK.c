
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int top; int dmax; scalar_t__* d; } ;
typedef TYPE_1__ BIGNUM ;



void FUNC_0(BIGNUM *VAR_0)
{
    int VAR_1;

    for (VAR_1 = VAR_0->top; VAR_1 < VAR_0->dmax; VAR_1++)
        VAR_0->d[VAR_1] = 0;
}
