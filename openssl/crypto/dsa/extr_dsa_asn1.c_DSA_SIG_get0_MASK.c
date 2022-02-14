
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * s; int * r; } ;
typedef TYPE_1__ DSA_SIG ;
typedef int BIGNUM ;



void FUNC_0(const DSA_SIG *VAR_0, const BIGNUM **VAR_1, const BIGNUM **VAR_2)
{
    if (VAR_1 != ((void*)0))
        *VAR_1 = VAR_0->r;
    if (VAR_2 != ((void*)0))
        *VAR_2 = VAR_0->s;
}
