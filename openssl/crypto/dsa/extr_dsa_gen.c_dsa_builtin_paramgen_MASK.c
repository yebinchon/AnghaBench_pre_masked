
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * g; int * q; int * p; int dirty_cnt; } ;
typedef int EVP_MD ;
typedef TYPE_1__ DSA ;
typedef int BN_MONT_CTX ;
typedef int BN_GENCB ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int,int) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 () ;
 int FUNC_8 (int *,int *,int *) ;
 int FUNC_9 (int *,int *,int *) ;
 int FUNC_10 (unsigned char*,int,int *) ;
 int FUNC_11 (int *,int *,int *) ;
 scalar_t__ FUNC_12 (int *,int *) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (int *,int *,int *,int *,int *) ;
 void* FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *,int *,int) ;
 int FUNC_19 (int *,int *) ;
 int FUNC_20 (int *,size_t) ;
 int FUNC_21 (int *,int *,int *,int *) ;
 int FUNC_22 (int *,int *,int *,int *,int *,int *) ;
 int FUNC_23 (int *,unsigned int) ;
 int FUNC_24 (int *,int *,int *) ;
 int * FUNC_25 () ;
 int FUNC_26 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_27 (int ,int ) ;
 int FUNC_28 (unsigned char*,int,unsigned char*,int *,int const*,int *) ;
 int FUNC_29 (int const*) ;
 int * FUNC_30 () ;
 int * FUNC_31 () ;
 int * FUNC_32 () ;
 scalar_t__ FUNC_33 (unsigned char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_34 (unsigned char*,unsigned char const*,int) ;

int FUNC_35(DSA *VAR_5, size_t VAR_6, size_t VAR_7,
                         const EVP_MD *VAR_8, const unsigned char *VAR_9,
                         size_t VAR_10, unsigned char *VAR_11,
                         int *VAR_12, unsigned long *VAR_13, BN_GENCB *VAR_14)
{
    int VAR_15 = 0;
    unsigned char VAR_16[VAR_3];
    unsigned char VAR_17[VAR_3];
    unsigned char VAR_18[VAR_3], VAR_19[VAR_3];
    BIGNUM *VAR_20, *VAR_21, *VAR_22, *VAR_23, *VAR_24;
    BIGNUM *VAR_25 = ((void*)0), *VAR_26 = ((void*)0), *VAR_27 = ((void*)0);
    BN_MONT_CTX *VAR_28 = ((void*)0);
    int VAR_29, VAR_30, VAR_31 = 0, VAR_32 = 0, VAR_33 = VAR_7 >> 3;
    int VAR_34 = 0;
    int VAR_35 = 0;
    BN_CTX *VAR_36 = ((void*)0);
    unsigned int VAR_37 = 2;

    if (VAR_33 != VAR_4 && VAR_33 != VAR_2 &&
        VAR_33 != VAR_3)

        return 0;

    if (VAR_8 == ((void*)0)) {
        if (VAR_33 == VAR_4)
            VAR_8 = FUNC_30();
        else if (VAR_33 == VAR_2)
            VAR_8 = FUNC_31();
        else
            VAR_8 = FUNC_32();
    } else {
        VAR_33 = FUNC_29(VAR_8);
    }

    if (VAR_6 < 512)
        VAR_6 = 512;

    VAR_6 = (VAR_6 + 63) / 64 * 64;

    if (VAR_9 != ((void*)0)) {
        if (VAR_10 < (size_t)VAR_33) {
            FUNC_27(VAR_0, VAR_1);
            return 0;
        }
        if (VAR_10 > (size_t)VAR_33) {

            VAR_10 = VAR_33;
        }
        FUNC_34(VAR_16, VAR_9, VAR_10);
    }

    if ((VAR_28 = FUNC_7()) == ((void*)0))
        goto err;

    if ((VAR_36 = FUNC_3()) == ((void*)0))
        goto err;

    FUNC_4(VAR_36);

    VAR_20 = FUNC_2(VAR_36);
    VAR_25 = FUNC_2(VAR_36);
    VAR_21 = FUNC_2(VAR_36);
    VAR_26 = FUNC_2(VAR_36);
    VAR_22 = FUNC_2(VAR_36);
    VAR_23 = FUNC_2(VAR_36);
    VAR_27 = FUNC_2(VAR_36);
    VAR_24 = FUNC_2(VAR_36);

    if (VAR_24 == ((void*)0))
        goto err;

    if (!FUNC_18(VAR_24, FUNC_25(), VAR_6 - 1))
        goto err;

    for (;;) {
        for (;;) {
            int VAR_38 = (VAR_9 == ((void*)0));


            if (!FUNC_5(VAR_14, 0, VAR_32++))
                goto err;

            if (VAR_38) {
                if (FUNC_33(VAR_16, VAR_33) <= 0)
                    goto err;
            } else {

                VAR_9 = ((void*)0);
            }
            FUNC_34(VAR_18, VAR_16, VAR_33);
            FUNC_34(VAR_19, VAR_16, VAR_33);

            for (VAR_29 = VAR_33 - 1; VAR_29 >= 0; VAR_29--) {
                VAR_18[VAR_29]++;
                if (VAR_18[VAR_29] != 0)
                    break;
            }


            if (!FUNC_28(VAR_16, VAR_33, VAR_17, ((void*)0), VAR_8, ((void*)0)))
                goto err;
            if (!FUNC_28(VAR_18, VAR_33, VAR_19, ((void*)0), VAR_8, ((void*)0)))
                goto err;
            for (VAR_29 = 0; VAR_29 < VAR_33; VAR_29++)
                VAR_17[VAR_29] ^= VAR_19[VAR_29];


            VAR_17[0] |= 0x80;
            VAR_17[VAR_33 - 1] |= 0x01;
            if (!FUNC_10(VAR_17, VAR_33, VAR_26))
                goto err;


            VAR_35 = FUNC_11(VAR_26, VAR_36, VAR_14);
            if (VAR_35 > 0)
                break;
            if (VAR_35 != 0)
                goto err;



        }

        if (!FUNC_5(VAR_14, 2, 0))
            goto err;
        if (!FUNC_5(VAR_14, 3, 0))
            goto err;


        VAR_34 = 0;


        VAR_31 = (VAR_6 - 1) / 160;

        for (;;) {
            if ((VAR_34 != 0) && !FUNC_5(VAR_14, 0, VAR_34))
                goto err;


            FUNC_26(VAR_21);

            for (VAR_30 = 0; VAR_30 <= VAR_31; VAR_30++) {



                for (VAR_29 = VAR_33 - 1; VAR_29 >= 0; VAR_29--) {
                    VAR_18[VAR_29]++;
                    if (VAR_18[VAR_29] != 0)
                        break;
                }

                if (!FUNC_28(VAR_18, VAR_33, VAR_17, ((void*)0), VAR_8, ((void*)0)))
                    goto err;


                if (!FUNC_10(VAR_17, VAR_33, VAR_20))
                    goto err;
                if (!FUNC_18(VAR_20, VAR_20, (VAR_33 << 3) * VAR_30))
                    goto err;
                if (!FUNC_9(VAR_21, VAR_21, VAR_20))
                    goto err;
            }


            if (!FUNC_20(VAR_21, VAR_6 - 1))
                goto err;
            if (!FUNC_13(VAR_22, VAR_21))
                goto err;
            if (!FUNC_9(VAR_22, VAR_22, VAR_24))
                goto err;


            if (!FUNC_19(VAR_20, VAR_26))
                goto err;
            if (!FUNC_21(VAR_23, VAR_22, VAR_20, VAR_36))
                goto err;
            if (!FUNC_24(VAR_20, VAR_23, FUNC_25()))
                goto err;
            if (!FUNC_24(VAR_27, VAR_22, VAR_20))
                goto err;


            if (FUNC_12(VAR_27, VAR_24) >= 0) {

                VAR_35 = FUNC_11(VAR_27, VAR_36, VAR_14);
                if (VAR_35 > 0)
                    goto end;
                if (VAR_35 != 0)
                    goto err;
            }


            VAR_34++;



            if (VAR_34 >= 4096)
                break;
        }
    }
 end:
    if (!FUNC_5(VAR_14, 2, 1))
        goto err;



    if (!FUNC_24(VAR_24, VAR_27, FUNC_25()))
        goto err;
    if (!FUNC_14(VAR_20, ((void*)0), VAR_24, VAR_26, VAR_36))
        goto err;

    if (!FUNC_23(VAR_24, VAR_37))
        goto err;
    if (!FUNC_8(VAR_28, VAR_27, VAR_36))
        goto err;

    for (;;) {

        if (!FUNC_22(VAR_25, VAR_24, VAR_20, VAR_27, VAR_36, VAR_28))
            goto err;
        if (!FUNC_17(VAR_25))
            break;
        if (!FUNC_9(VAR_24, VAR_24, FUNC_25()))
            goto err;
        VAR_37++;
    }

    if (!FUNC_5(VAR_14, 3, 1))
        goto err;

    VAR_15 = 1;
 err:
    if (VAR_15) {
        FUNC_16(VAR_5->p);
        FUNC_16(VAR_5->q);
        FUNC_16(VAR_5->g);
        VAR_5->p = FUNC_15(VAR_27);
        VAR_5->q = FUNC_15(VAR_26);
        VAR_5->g = FUNC_15(VAR_25);
        VAR_5->dirty_cnt++;
        if (VAR_5->p == ((void*)0) || VAR_5->q == ((void*)0) || VAR_5->g == ((void*)0)) {
            VAR_15 = 0;
            goto err;
        }
        if (VAR_12 != ((void*)0))
            *VAR_12 = VAR_34;
        if (VAR_13 != ((void*)0))
            *VAR_13 = VAR_37;
        if (VAR_11)
            FUNC_34(VAR_11, VAR_16, VAR_33);
    }
    FUNC_0(VAR_36);
    FUNC_1(VAR_36);
    FUNC_6(VAR_28);
    return VAR_15;
}
