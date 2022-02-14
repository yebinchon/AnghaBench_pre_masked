
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dirty_cnt; int * priv_key; int * pub_key; } ;
typedef TYPE_1__ DSA ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;

int FUNC_1(DSA *VAR_0, BIGNUM *VAR_1, BIGNUM *VAR_2)
{




    if (VAR_0->pub_key == ((void*)0) && VAR_1 == ((void*)0))
        return 0;

    if (VAR_1 != ((void*)0)) {
        FUNC_0(VAR_0->pub_key);
        VAR_0->pub_key = VAR_1;
    }
    if (VAR_2 != ((void*)0)) {
        FUNC_0(VAR_0->priv_key);
        VAR_0->priv_key = VAR_2;
    }
    VAR_0->dirty_cnt++;

    return 1;
}
