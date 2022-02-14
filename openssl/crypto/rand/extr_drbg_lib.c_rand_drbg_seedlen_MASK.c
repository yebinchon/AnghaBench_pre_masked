
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t strength; size_t min_entropylen; scalar_t__ min_noncelen; int * get_nonce; } ;
typedef TYPE_1__ RAND_DRBG ;



size_t FUNC_0(RAND_DRBG *VAR_0)
{






    size_t VAR_1 = VAR_0->strength;
    size_t VAR_2 = VAR_0->min_entropylen;





    if (VAR_0->min_noncelen > 0 && VAR_0->get_nonce == ((void*)0)) {
        VAR_1 += VAR_0->strength / 2;
        VAR_2 += VAR_0->min_noncelen;
    }






    VAR_1 >>= 3;


    return VAR_1 > VAR_2 ? VAR_1 : VAR_2;
}
