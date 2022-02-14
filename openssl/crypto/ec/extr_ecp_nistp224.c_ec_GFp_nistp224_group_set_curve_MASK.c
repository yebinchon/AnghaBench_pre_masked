
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int felem_bytearray ;
struct TYPE_4__ {int field_mod_func; } ;
typedef TYPE_1__ EC_GROUP ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int,int *) ;
 scalar_t__ FUNC_6 (int *,int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (TYPE_1__*,int const*,int const*,int const*,int *) ;
 int * VAR_3 ;

int FUNC_9(EC_GROUP *VAR_4, const BIGNUM *VAR_5,
                                    const BIGNUM *VAR_6, const BIGNUM *VAR_7,
                                    BN_CTX *VAR_8)
{
    int VAR_9 = 0;
    BIGNUM *VAR_10, *VAR_11, *VAR_12;

    BN_CTX *VAR_13 = ((void*)0);

    if (VAR_8 == ((void*)0))
        VAR_8 = VAR_13 = FUNC_3();

    if (VAR_8 == ((void*)0))
        return 0;

    FUNC_4(VAR_8);
    VAR_10 = FUNC_2(VAR_8);
    VAR_11 = FUNC_2(VAR_8);
    VAR_12 = FUNC_2(VAR_8);
    if (VAR_12 == ((void*)0))
        goto err;
    FUNC_5(VAR_3[0], sizeof(felem_bytearray), VAR_10);
    FUNC_5(VAR_3[1], sizeof(felem_bytearray), VAR_11);
    FUNC_5(VAR_3[2], sizeof(felem_bytearray), VAR_12);
    if ((FUNC_6(VAR_10, VAR_5)) || (FUNC_6(VAR_11, VAR_6)) || (FUNC_6(VAR_12, VAR_7))) {
        FUNC_7(VAR_1,
              VAR_2);
        goto err;
    }
    VAR_4->field_mod_func = VAR_0;
    VAR_9 = FUNC_8(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
 err:
    FUNC_0(VAR_8);

    FUNC_1(VAR_13);

    return VAR_9;
}
