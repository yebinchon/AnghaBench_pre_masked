
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int reseed_interval; } ;
typedef TYPE_1__ RAND_DRBG ;


 unsigned int VAR_0 ;

int FUNC_0(RAND_DRBG *VAR_1, unsigned int VAR_2)
{
    if (VAR_2 > VAR_0)
        return 0;
    VAR_1->reseed_interval = VAR_2;
    return 1;
}
