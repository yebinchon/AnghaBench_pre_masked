
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * group; } ;
typedef TYPE_1__ EC_KEY ;
typedef int BN_CTX ;


 int FUNC_0 (int *,int *) ;

int FUNC_1(EC_KEY *VAR_0, BN_CTX *VAR_1)
{
    if (VAR_0->group == ((void*)0))
        return 0;
    return FUNC_0(VAR_0->group, VAR_1);
}
