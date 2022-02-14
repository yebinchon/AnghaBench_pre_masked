
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ secure; int * seed_pool; } ;
typedef TYPE_1__ RAND_DRBG ;


 int FUNC_0 (unsigned char*,size_t) ;
 int FUNC_1 (unsigned char*,size_t) ;

void FUNC_2(RAND_DRBG *VAR_0,
                               unsigned char *VAR_1, size_t VAR_2)
{
    if (VAR_0->seed_pool == ((void*)0)) {
        if (VAR_0->secure)
            FUNC_1(VAR_1, VAR_2);
        else
            FUNC_0(VAR_1, VAR_2);
    }
}
