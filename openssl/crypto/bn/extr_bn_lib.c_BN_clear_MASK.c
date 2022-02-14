
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dmax; int flags; scalar_t__ top; scalar_t__ neg; int * d; } ;
typedef TYPE_1__ BIGNUM ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(BIGNUM *VAR_1)
{
    if (VAR_1 == ((void*)0))
        return;
    FUNC_1(VAR_1);
    if (VAR_1->d != ((void*)0))
        FUNC_0(VAR_1->d, sizeof(*VAR_1->d) * VAR_1->dmax);
    VAR_1->neg = 0;
    VAR_1->top = 0;
    VAR_1->flags &= ~VAR_0;
}
