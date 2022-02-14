
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ggen ;
struct TYPE_3__ {int dirty_cnt; int * g; int * q; int * p; } ;
typedef int EVP_MD_CTX ;
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
 int VAR_2 ;
 int FUNC_27 (int ,int ) ;
 int FUNC_28 (unsigned char*,size_t,unsigned char*,int *,int const*,int *) ;
 int FUNC_29 (int *,unsigned char*,int *) ;
 int FUNC_30 (int *,int const*,int *) ;
 int FUNC_31 (int *,unsigned char const*,int) ;
 int VAR_3 ;
 int FUNC_32 (int *) ;
 int * FUNC_33 () ;
 int FUNC_34 (int const*) ;
 int * FUNC_35 () ;
 int * FUNC_36 () ;
 int * FUNC_37 () ;
 int FUNC_38 (unsigned char*) ;
 unsigned char* FUNC_39 (size_t) ;
 scalar_t__ FUNC_40 (unsigned char*,size_t) ;
 int FUNC_41 (unsigned char*,unsigned char const*,size_t) ;
 int FUNC_42 (unsigned char*,int ,int) ;

int FUNC_43(DSA *VAR_4, size_t VAR_5, size_t VAR_6,
                          const EVP_MD *VAR_7, const unsigned char *VAR_8,
                          size_t VAR_9, int VAR_10, unsigned char *VAR_11,
                          int *VAR_12, unsigned long *VAR_13,
                          BN_GENCB *VAR_14)
{
    int VAR_15 = -1;
    unsigned char *VAR_16 = ((void*)0), *VAR_17 = ((void*)0);
    unsigned char VAR_18[VAR_3];
    int VAR_19;
    BIGNUM *VAR_20, *VAR_21, *VAR_22, *VAR_23, *VAR_24;
    BIGNUM *VAR_25 = ((void*)0), *VAR_26 = ((void*)0), *VAR_27 = ((void*)0);
    BN_MONT_CTX *VAR_28 = ((void*)0);
    int VAR_29, VAR_30, VAR_31 = 0, VAR_32 = 0, VAR_33 = VAR_6 >> 3;
    int VAR_34 = 0;
    int VAR_35 = 0;
    BN_CTX *VAR_36 = ((void*)0);
    EVP_MD_CTX *VAR_37 = FUNC_33();
    unsigned int VAR_38 = 2;

    if (VAR_37 == ((void*)0))
        goto err;


    if (VAR_5 <= VAR_6) {
        FUNC_27(VAR_0, VAR_1);
        goto err;
    }

    if (VAR_7 == ((void*)0)) {
        if (VAR_6 == 160)
            VAR_7 = FUNC_35();
        else if (VAR_6 == 224)
            VAR_7 = FUNC_36();
        else
            VAR_7 = FUNC_37();
    }

    VAR_19 = FUNC_34(VAR_7);

    if (!VAR_4->p || !VAR_4->q || VAR_10 >= 0) {
        if (VAR_9 == 0)
            VAR_9 = VAR_19;

        VAR_16 = FUNC_39(VAR_9);

        if (VAR_11)
            VAR_17 = VAR_11;
        else
            VAR_17 = FUNC_39(VAR_9);

        if (VAR_16 == ((void*)0) || VAR_17 == ((void*)0))
            goto err;

        if (VAR_8)
            FUNC_41(VAR_16, VAR_8, VAR_9);

    }

    if ((VAR_36 = FUNC_3()) == ((void*)0))
        goto err;

    if ((VAR_28 = FUNC_7()) == ((void*)0))
        goto err;

    FUNC_4(VAR_36);
    VAR_20 = FUNC_2(VAR_36);
    VAR_25 = FUNC_2(VAR_36);
    VAR_21 = FUNC_2(VAR_36);
    VAR_22 = FUNC_2(VAR_36);
    VAR_23 = FUNC_2(VAR_36);
    VAR_24 = FUNC_2(VAR_36);
    if (VAR_24 == ((void*)0))
        goto err;


    if (VAR_4->p && VAR_4->q) {
        VAR_27 = VAR_4->p;
        VAR_26 = VAR_4->q;
        if (VAR_10 >= 0)
            FUNC_41(VAR_17, VAR_16, VAR_9);
        goto g_only;
    } else {
        VAR_27 = FUNC_2(VAR_36);
        VAR_26 = FUNC_2(VAR_36);
        if (VAR_26 == ((void*)0))
            goto err;
    }

    if (!FUNC_18(VAR_24, FUNC_25(), VAR_5 - 1))
        goto err;
    for (;;) {
        for (;;) {
            unsigned char *VAR_39;

            if (!FUNC_5(VAR_14, 0, VAR_32++))
                goto err;

            if (!VAR_8) {
                if (FUNC_40(VAR_16, VAR_9) <= 0)
                    goto err;
            }

            if (!FUNC_28(VAR_16, VAR_9, VAR_18, ((void*)0), VAR_7, ((void*)0)))
                goto err;

            if (VAR_19 > VAR_33)
                VAR_39 = VAR_18 + VAR_19 - VAR_33;
            else
                VAR_39 = VAR_18;

            if (VAR_19 < VAR_33)
                FUNC_42(VAR_18 + VAR_19, 0, VAR_33 - VAR_19);


            VAR_39[0] |= 0x80;
            VAR_39[VAR_33 - 1] |= 0x01;
            if (!FUNC_10(VAR_39, VAR_33, VAR_26))
                goto err;


            VAR_35 = FUNC_11(VAR_26, VAR_36, VAR_14);
            if (VAR_35 > 0)
                break;
            if (VAR_35 != 0)
                goto err;

            if (VAR_8) {
                VAR_15 = 0;
                FUNC_27(VAR_0, VAR_2);
                goto err;
            }



        }

        if (VAR_11)
            FUNC_41(VAR_11, VAR_16, VAR_9);

        if (!FUNC_5(VAR_14, 2, 0))
            goto err;
        if (!FUNC_5(VAR_14, 3, 0))
            goto err;


        VAR_34 = 0;


        VAR_31 = (VAR_5 - 1) / (VAR_19 << 3);

        for (;;) {
            if ((VAR_34 != 0) && !FUNC_5(VAR_14, 0, VAR_34))
                goto err;


            FUNC_26(VAR_21);

            for (VAR_30 = 0; VAR_30 <= VAR_31; VAR_30++) {



                for (VAR_29 = VAR_9 - 1; VAR_29 >= 0; VAR_29--) {
                    VAR_16[VAR_29]++;
                    if (VAR_16[VAR_29] != 0)
                        break;
                }

                if (!FUNC_28(VAR_16, VAR_9, VAR_18, ((void*)0), VAR_7, ((void*)0)))
                    goto err;


                if (!FUNC_10(VAR_18, VAR_19, VAR_20))
                    goto err;
                if (!FUNC_18(VAR_20, VAR_20, (VAR_19 << 3) * VAR_30))
                    goto err;
                if (!FUNC_9(VAR_21, VAR_21, VAR_20))
                    goto err;
            }


            if (!FUNC_20(VAR_21, VAR_5 - 1))
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



            if (VAR_34 >= (int)(4 * VAR_5))
                break;
        }
        if (VAR_8) {
            VAR_15 = 0;
            FUNC_27(VAR_0, VAR_1);
            goto err;
        }
    }
 end:
    if (!FUNC_5(VAR_14, 2, 1))
        goto err;

 g_only:



    if (!FUNC_24(VAR_24, VAR_27, FUNC_25()))
        goto err;
    if (!FUNC_14(VAR_20, ((void*)0), VAR_24, VAR_26, VAR_36))
        goto err;

    if (VAR_10 < 0) {
        if (!FUNC_23(VAR_24, VAR_38))
            goto err;
    } else
        VAR_38 = 1;
    if (!FUNC_8(VAR_28, VAR_27, VAR_36))
        goto err;

    for (;;) {
        static const unsigned char VAR_40[4] = { 0x67, 0x67, 0x65, 0x6e };
        if (VAR_10 >= 0) {
            VAR_18[0] = VAR_10 & 0xff;
            VAR_18[1] = (VAR_38 >> 8) & 0xff;
            VAR_18[2] = VAR_38 & 0xff;
            if (!FUNC_30(VAR_37, VAR_7, ((void*)0)))
                goto err;
            if (!FUNC_31(VAR_37, VAR_17, VAR_9))
                goto err;
            if (!FUNC_31(VAR_37, VAR_40, sizeof(VAR_40)))
                goto err;
            if (!FUNC_31(VAR_37, VAR_18, 3))
                goto err;
            if (!FUNC_29(VAR_37, VAR_18, ((void*)0)))
                goto err;
            if (!FUNC_10(VAR_18, VAR_19, VAR_24))
                goto err;
        }

        if (!FUNC_22(VAR_25, VAR_24, VAR_20, VAR_27, VAR_36, VAR_28))
            goto err;
        if (!FUNC_17(VAR_25))
            break;
        if (VAR_10 < 0 && !FUNC_9(VAR_24, VAR_24, FUNC_25()))
            goto err;
        VAR_38++;
        if (VAR_10 >= 0 && VAR_38 > 0xffff)
            goto err;
    }

    if (!FUNC_5(VAR_14, 3, 1))
        goto err;

    VAR_15 = 1;
 err:
    if (VAR_15 == 1) {
        if (VAR_27 != VAR_4->p) {
            FUNC_16(VAR_4->p);
            VAR_4->p = FUNC_15(VAR_27);
        }
        if (VAR_26 != VAR_4->q) {
            FUNC_16(VAR_4->q);
            VAR_4->q = FUNC_15(VAR_26);
        }
        FUNC_16(VAR_4->g);
        VAR_4->g = FUNC_15(VAR_25);
        if (VAR_4->p == ((void*)0) || VAR_4->q == ((void*)0) || VAR_4->g == ((void*)0)) {
            VAR_15 = -1;
            goto err;
        }
        VAR_4->dirty_cnt++;
        if (VAR_12 != ((void*)0))
            *VAR_12 = VAR_34;
        if (VAR_13 != ((void*)0))
            *VAR_13 = VAR_38;
    }
    FUNC_38(VAR_16);
    if (VAR_11 != VAR_17)
        FUNC_38(VAR_17);
    FUNC_0(VAR_36);
    FUNC_1(VAR_36);
    FUNC_6(VAR_28);
    FUNC_32(VAR_37);
    return VAR_15;
}
