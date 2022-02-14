
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int lock; int * mt_blinding; int * blinding; } ;
typedef TYPE_1__ RSA ;
typedef int BN_CTX ;
typedef int BN_BLINDING ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (TYPE_1__*,int *) ;

__attribute__((used)) static BN_BLINDING *FUNC_4(RSA *VAR_0, int *VAR_1, BN_CTX *VAR_2)
{
    BN_BLINDING *VAR_3;

    FUNC_2(VAR_0->lock);

    if (VAR_0->blinding == ((void*)0)) {
        VAR_0->blinding = FUNC_3(VAR_0, VAR_2);
    }

    VAR_3 = VAR_0->blinding;
    if (VAR_3 == ((void*)0))
        goto err;

    if (FUNC_0(VAR_3)) {


        *VAR_1 = 1;
    } else {







        *VAR_1 = 0;

        if (VAR_0->mt_blinding == ((void*)0)) {
            VAR_0->mt_blinding = FUNC_3(VAR_0, VAR_2);
        }
        VAR_3 = VAR_0->mt_blinding;
    }

 err:
    FUNC_1(VAR_0->lock);
    return VAR_3;
}
