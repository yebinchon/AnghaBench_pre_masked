
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int STANZA ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int **,char*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int *,int *,int ) ;
 int FUNC_4 (int *,int *,int *,int *,int ,int *) ;
 int FUNC_5 (int *,int *,int *,int *,int ,int *) ;
 int FUNC_6 (int *,int *,int *,int ) ;
 int * FUNC_7 () ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;
 int VAR_0 ;
 int FUNC_11 (char*,int *,int *) ;
 int * FUNC_12 (int *,char*) ;

__attribute__((used)) static int FUNC_13(STANZA *VAR_1)
{
    BIGNUM *VAR_2 = ((void*)0), *VAR_3 = ((void*)0), *VAR_4 = ((void*)0), *VAR_5 = ((void*)0), *VAR_6 = ((void*)0);
    BIGNUM *VAR_7 = ((void*)0), *VAR_8 = ((void*)0), *VAR_9 = ((void*)0);
    int VAR_10 = 0;

    if (!FUNC_9(VAR_2 = FUNC_12(VAR_1, "A"))
            || !FUNC_9(VAR_3 = FUNC_12(VAR_1, "E"))
            || !FUNC_9(VAR_4 = FUNC_12(VAR_1, "M"))
            || !FUNC_9(VAR_5 = FUNC_12(VAR_1, "ModExp"))
            || !FUNC_9(VAR_6 = FUNC_7())
            || !FUNC_9(VAR_9 = FUNC_7()))
        goto err;

    if (!FUNC_10(FUNC_3(VAR_6, VAR_2, VAR_3, VAR_4, VAR_0))
            || !FUNC_11("A ^ E (mod M)", VAR_5, VAR_6))
        goto err;

    if (FUNC_2(VAR_4)) {
        if (!FUNC_10(FUNC_4(VAR_6, VAR_2, VAR_3, VAR_4, VAR_0, ((void*)0)))
                || !FUNC_11("A ^ E (mod M) (mont)", VAR_5, VAR_6)
                || !FUNC_10(FUNC_5(VAR_6, VAR_2, VAR_3, VAR_4,
                                                        VAR_0, ((void*)0)))
                || !FUNC_11("A ^ E (mod M) (mont const", VAR_5, VAR_6))
            goto err;
    }


    FUNC_1(&VAR_2, "050505050505");
    FUNC_1(&VAR_7, "02");
    FUNC_1(&VAR_8,
        "4141414141414141414141274141414141414141414141414141414141414141"
        "4141414141414141414141414141414141414141414141414141414141414141"
        "4141414141414141414141800000000000000000000000000000000000000000"
        "0000000000000000000000000000000000000000000000000000000000000000"
        "0000000000000000000000000000000000000000000000000000000000000000"
        "0000000000000000000000000000000000000000000000000000000001");
    if (!FUNC_10(FUNC_3(VAR_9, VAR_2, VAR_7, VAR_8, VAR_0))
        || !FUNC_10(FUNC_6(VAR_3, VAR_2, VAR_2, VAR_0))
        || !FUNC_8(VAR_9, VAR_3))
        goto err;

    VAR_10 = 1;
 err:
    FUNC_0(VAR_2);
    FUNC_0(VAR_7);
    FUNC_0(VAR_8);
    FUNC_0(VAR_9);
    FUNC_0(VAR_3);
    FUNC_0(VAR_4);
    FUNC_0(VAR_5);
    FUNC_0(VAR_6);
    return VAR_10;
}
