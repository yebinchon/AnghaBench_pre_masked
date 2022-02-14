
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int top; int flags; scalar_t__* d; scalar_t__ neg; } ;
typedef scalar_t__ BN_ULONG ;
typedef TYPE_1__ BIGNUM ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int * FUNC_1 (TYPE_1__*,int) ;

int FUNC_2(BIGNUM *VAR_1, BN_ULONG VAR_2)
{
    FUNC_0(VAR_1);
    if (FUNC_1(VAR_1, (int)sizeof(BN_ULONG) * 8) == ((void*)0))
        return 0;
    VAR_1->neg = 0;
    VAR_1->d[0] = VAR_2;
    VAR_1->top = (VAR_2 ? 1 : 0);
    VAR_1->flags &= ~VAR_0;
    FUNC_0(VAR_1);
    return 1;
}
