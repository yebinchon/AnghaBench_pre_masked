
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int neg; } ;
typedef int BN_ULONG ;
typedef TYPE_1__ BIGNUM ;


 scalar_t__ FUNC_0 (TYPE_1__ const*,int const) ;

int FUNC_1(const BIGNUM *VAR_0, const BN_ULONG VAR_1)
{
    return FUNC_0(VAR_0, VAR_1) && (!VAR_1 || !VAR_0->neg);
}
