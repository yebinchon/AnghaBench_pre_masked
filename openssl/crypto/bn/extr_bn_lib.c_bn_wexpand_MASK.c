
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int dmax; } ;
typedef TYPE_1__ BIGNUM ;


 TYPE_1__* FUNC_0 (TYPE_1__*,int) ;

BIGNUM *FUNC_1(BIGNUM *VAR_0, int VAR_1)
{
    return (VAR_1 <= VAR_0->dmax) ? VAR_0 : FUNC_0(VAR_0, VAR_1);
}
