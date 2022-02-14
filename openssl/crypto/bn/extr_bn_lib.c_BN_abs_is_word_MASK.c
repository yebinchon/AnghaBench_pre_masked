
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int top; scalar_t__ const* d; } ;
typedef scalar_t__ BN_ULONG ;
typedef TYPE_1__ BIGNUM ;



int FUNC_0(const BIGNUM *VAR_0, const BN_ULONG VAR_1)
{
    return ((VAR_0->top == 1) && (VAR_0->d[0] == VAR_1)) || ((VAR_1 == 0) && (VAR_0->top == 0));
}
