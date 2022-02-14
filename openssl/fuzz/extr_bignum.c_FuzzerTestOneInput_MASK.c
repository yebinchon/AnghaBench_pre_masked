
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int * FUNC_2 (size_t const*,size_t,int *) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,int *,int *,int *) ;
 int FUNC_7 (int *,int *,int *,int *,int *) ;
 int * FUNC_8 () ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 () ;
 int FUNC_12 (int) ;
 int FUNC_13 (char) ;
 int VAR_0 ;

int FUNC_14(const uint8_t *VAR_1, size_t VAR_2)
{
    int VAR_3 = 0;
    size_t VAR_4 = 0, VAR_5 = 0, VAR_6 = 0;
    int VAR_7 = 0, VAR_8 = 0;
    BN_CTX *VAR_9;
    BIGNUM *VAR_10;
    BIGNUM *VAR_11;
    BIGNUM *VAR_12;
    BIGNUM *VAR_13;
    BIGNUM *VAR_14;

    VAR_10 = FUNC_8();
    VAR_11 = FUNC_8();
    VAR_12 = FUNC_8();
    VAR_13 = FUNC_8();
    VAR_14 = FUNC_8();
    VAR_9 = FUNC_1();





    if (VAR_2 > 2) {
        VAR_2 -= 3;
        VAR_4 = (VAR_1[0] * VAR_2) / 255;
        ++VAR_1;
        VAR_5 = (VAR_1[0] * (VAR_2 - VAR_4)) / 255;
        ++VAR_1;
        VAR_6 = VAR_2 - VAR_4 - VAR_5;

        VAR_7 = VAR_1[0] & 1;
        VAR_8 = VAR_1[0] & 4;
        ++VAR_1;
    }
    FUNC_12(FUNC_2(VAR_1, VAR_4, VAR_10) == VAR_10);
    FUNC_10(VAR_10, VAR_7);
    FUNC_12(FUNC_2(VAR_1 + VAR_4, VAR_5, VAR_11) == VAR_11);
    FUNC_12(FUNC_2(VAR_1 + VAR_4 + VAR_5, VAR_6, VAR_12) == VAR_12);
    FUNC_10(VAR_12, VAR_8);


    if (FUNC_5(VAR_12)) {
        VAR_3 = 1;
        goto done;
    }

    FUNC_12(FUNC_6(VAR_13, VAR_10, VAR_11, VAR_12, VAR_9));
    FUNC_12(FUNC_7(VAR_14, VAR_10, VAR_11, VAR_12, VAR_9));

    VAR_3 = FUNC_3(VAR_13, VAR_14) == 0;
    if (!VAR_3) {
        FUNC_9(VAR_0, VAR_10);
        FUNC_13('\n');
        FUNC_9(VAR_0, VAR_11);
        FUNC_13('\n');
        FUNC_9(VAR_0, VAR_12);
        FUNC_13('\n');
        FUNC_9(VAR_0, VAR_13);
        FUNC_13('\n');
        FUNC_9(VAR_0, VAR_14);
        FUNC_13('\n');
    }

 done:
    FUNC_12(VAR_3);
    FUNC_4(VAR_10);
    FUNC_4(VAR_11);
    FUNC_4(VAR_12);
    FUNC_4(VAR_13);
    FUNC_4(VAR_14);
    FUNC_0(VAR_9);
    FUNC_11();

    return 0;
}
