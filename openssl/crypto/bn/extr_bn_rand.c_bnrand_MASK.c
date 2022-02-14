
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OPENSSL_CTX ;
typedef int BN_CTX ;
typedef scalar_t__ BNRAND_FLAG ;
typedef int BIGNUM ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned char*,int,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (unsigned char*,int) ;
 unsigned char* FUNC_4 (int) ;
 scalar_t__ VAR_6 ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,unsigned char*,int) ;
 scalar_t__ FUNC_8 (int *,unsigned char*,int) ;

__attribute__((used)) static int FUNC_9(BNRAND_FLAG VAR_7, BIGNUM *VAR_8, int VAR_9, int VAR_10, int VAR_11,
                  BN_CTX *VAR_12)
{
    unsigned char *VAR_13 = ((void*)0);
    int VAR_14, VAR_15 = 0, VAR_16, VAR_17, VAR_18;
    OPENSSL_CTX *VAR_19 = FUNC_6(VAR_12);

    if (VAR_9 == 0) {
        if (VAR_10 != VAR_2 || VAR_11 != VAR_1)
            goto toosmall;
        FUNC_1(VAR_8);
        return 1;
    }
    if (VAR_9 < 0 || (VAR_9 == 1 && VAR_10 > 0))
        goto toosmall;

    VAR_17 = (VAR_9 + 7) / 8;
    VAR_16 = (VAR_9 - 1) % 8;
    VAR_18 = 0xff << (VAR_16 + 1);

    VAR_13 = FUNC_4(VAR_17);
    if (VAR_13 == ((void*)0)) {
        FUNC_2(VAR_0, VAR_4);
        goto err;
    }


    VAR_14 = VAR_7 == VAR_5 ? FUNC_7(VAR_19, VAR_13, VAR_17)
                       : FUNC_8(VAR_19, VAR_13, VAR_17);
    if (VAR_14 <= 0)
        goto err;

    if (VAR_7 == VAR_6) {



        int VAR_20;
        unsigned char VAR_21;

        for (VAR_20 = 0; VAR_20 < VAR_17; VAR_20++) {
            if (FUNC_7(VAR_19, &VAR_21, 1) <= 0)
                goto err;
            if (VAR_21 >= 128 && VAR_20 > 0)
                VAR_13[VAR_20] = VAR_13[VAR_20 - 1];
            else if (VAR_21 < 42)
                VAR_13[VAR_20] = 0;
            else if (VAR_21 < 84)
                VAR_13[VAR_20] = 255;
        }
    }

    if (VAR_10 >= 0) {
        if (VAR_10) {
            if (VAR_16 == 0) {
                VAR_13[0] = 1;
                VAR_13[1] |= 0x80;
            } else {
                VAR_13[0] |= (3 << (VAR_16 - 1));
            }
        } else {
            VAR_13[0] |= (1 << VAR_16);
        }
    }
    VAR_13[0] &= ~VAR_18;
    if (VAR_11)
        VAR_13[VAR_17 - 1] |= 1;
    if (!FUNC_0(VAR_13, VAR_17, VAR_8))
        goto err;
    VAR_15 = 1;
 err:
    FUNC_3(VAR_13, VAR_17);
    FUNC_5(VAR_8);
    return VAR_15;

toosmall:
    FUNC_2(VAR_0, VAR_3);
    return 0;
}
