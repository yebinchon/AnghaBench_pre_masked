
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ strength_bits; scalar_t__ alg_bits; } ;
typedef TYPE_1__ SSL_CIPHER ;



int FUNC_0(const SSL_CIPHER *VAR_0, int *VAR_1)
{
    int VAR_2 = 0;

    if (VAR_0 != ((void*)0)) {
        if (VAR_1 != ((void*)0))
            *VAR_1 = (int)VAR_0->alg_bits;
        VAR_2 = (int)VAR_0->strength_bits;
    }
    return VAR_2;
}
