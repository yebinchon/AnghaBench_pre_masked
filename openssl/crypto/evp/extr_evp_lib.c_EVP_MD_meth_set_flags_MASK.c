
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long flags; } ;
typedef TYPE_1__ EVP_MD ;



int FUNC_0(EVP_MD *VAR_0, unsigned long VAR_1)
{
    if (VAR_0->flags != 0)
        return 0;

    VAR_0->flags = VAR_1;
    return 1;
}
