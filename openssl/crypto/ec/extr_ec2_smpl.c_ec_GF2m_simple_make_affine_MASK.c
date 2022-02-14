
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int Z_is_one; int Z; int Y; int X; } ;
typedef TYPE_1__ EC_POINT ;
typedef int EC_GROUP ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int const*,TYPE_1__*,int *,int *,int *) ;
 scalar_t__ FUNC_8 (int const*,TYPE_1__*) ;

int FUNC_9(const EC_GROUP *VAR_0, EC_POINT *VAR_1,
                               BN_CTX *VAR_2)
{
    BIGNUM *VAR_3, *VAR_4;
    int VAR_5 = 0;

    BN_CTX *VAR_6 = ((void*)0);


    if (VAR_1->Z_is_one || FUNC_8(VAR_0, VAR_1))
        return 1;


    if (VAR_2 == ((void*)0)) {
        VAR_2 = VAR_6 = FUNC_3();
        if (VAR_2 == ((void*)0))
            return 0;
    }


    FUNC_4(VAR_2);
    VAR_3 = FUNC_2(VAR_2);
    VAR_4 = FUNC_2(VAR_2);
    if (VAR_4 == ((void*)0))
        goto err;

    if (!FUNC_7(VAR_0, VAR_1, VAR_3, VAR_4, VAR_2))
        goto err;
    if (!FUNC_5(VAR_1->X, VAR_3))
        goto err;
    if (!FUNC_5(VAR_1->Y, VAR_4))
        goto err;
    if (!FUNC_6(VAR_1->Z))
        goto err;
    VAR_1->Z_is_one = 1;

    VAR_5 = 1;

 err:
    FUNC_0(VAR_2);

    FUNC_1(VAR_6);

    return VAR_5;
}
