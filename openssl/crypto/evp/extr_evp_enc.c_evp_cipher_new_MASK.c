
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int refcnt; int * lock; } ;
typedef TYPE_1__ EVP_CIPHER ;


 int * FUNC_0 () ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int) ;

EVP_CIPHER *FUNC_3(void)
{
    EVP_CIPHER *VAR_0 = FUNC_2(sizeof(EVP_CIPHER));

    if (VAR_0 != ((void*)0)) {
        VAR_0->lock = FUNC_0();
        if (VAR_0->lock == ((void*)0)) {
            FUNC_1(VAR_0);
            return ((void*)0);
        }
        VAR_0->refcnt = 1;
    }
    return VAR_0;
}
