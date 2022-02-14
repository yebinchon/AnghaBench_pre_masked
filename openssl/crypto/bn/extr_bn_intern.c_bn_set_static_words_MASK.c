
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dmax; int top; int flags; scalar_t__ neg; int * d; } ;
typedef int BN_ULONG ;
typedef TYPE_1__ BIGNUM ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(BIGNUM *VAR_1, const BN_ULONG *VAR_2, int VAR_3)
{




    VAR_1->d = (BN_ULONG *)VAR_2;
    VAR_1->dmax = VAR_1->top = VAR_3;
    VAR_1->neg = 0;
    VAR_1->flags |= VAR_0;
    FUNC_0(VAR_1);
}
