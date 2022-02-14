
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char EVP_PKEY_CTX ;
typedef unsigned char EVP_PKEY ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,unsigned char*,int,unsigned char*,size_t,int ) ;
 int FUNC_3 (unsigned char*) ;
 unsigned char* FUNC_4 (unsigned char*,int *) ;
 int FUNC_5 (unsigned char*) ;
 unsigned char* FUNC_6 () ;
 int FUNC_7 (unsigned char*,int ) ;
 int FUNC_8 (unsigned char*,unsigned char*,size_t*,unsigned char*,int) ;
 int FUNC_9 (unsigned char*) ;
 int FUNC_10 (unsigned char*,unsigned char*,size_t,unsigned char*,int) ;
 int FUNC_11 (unsigned char*) ;
 int FUNC_12 (unsigned char*) ;
 unsigned char* FUNC_13 (size_t) ;
 int FUNC_14 (unsigned char*,int) ;
 int FUNC_15 (char*,int) ;
 int FUNC_16 (int ,int) ;
 int FUNC_17 (unsigned char*) ;
 int VAR_0 ;
 int FUNC_18 (unsigned char*,unsigned char*,int) ;
 int FUNC_19 (unsigned char*,int ,int) ;

__attribute__((used)) static int FUNC_20(int VAR_1)
{





    size_t VAR_2;
    int VAR_3 = FUNC_0(FUNC_1(VAR_0));
    int VAR_4 = 0;

    unsigned char *VAR_5 = FUNC_13(VAR_1);
    unsigned char *VAR_6 = FUNC_13(VAR_3);
    unsigned char *VAR_7 = ((void*)0);
    EVP_PKEY_CTX *VAR_8 = ((void*)0);
    EVP_PKEY *VAR_9 = ((void*)0);

    if (!FUNC_17(VAR_5) ||
        !FUNC_17(VAR_6) ||
        !FUNC_16(FUNC_14(VAR_5, VAR_1), 1))
        goto end;

    FUNC_19(VAR_6, 0, VAR_3);
    if (VAR_1 > VAR_3)
        FUNC_18(VAR_6, VAR_5, VAR_3);
    else
        FUNC_18(VAR_6 + VAR_3 - VAR_1, VAR_5, VAR_1);

    if (!FUNC_17(VAR_9 = FUNC_6()))
        goto end;
    FUNC_7(VAR_9, VAR_0);

    if (!FUNC_17(VAR_8 = FUNC_4(VAR_9, ((void*)0))))
        goto end;
    if (!FUNC_16(FUNC_9(VAR_8), 1))
        goto end;

    if (FUNC_8(VAR_8, ((void*)0), &VAR_2, VAR_5, VAR_1) != 1) {
        FUNC_15("Failed to get signature length, len=%d", VAR_1);
        goto end;
    }

    if (!FUNC_17(VAR_7 = FUNC_13(VAR_2)))
        goto end;

    if (FUNC_8(VAR_8, VAR_7, &VAR_2, VAR_5, VAR_1) != 1) {
        FUNC_15("Failed to sign, len=%d", VAR_1);
        goto end;
    }


    if (!FUNC_16(FUNC_11(VAR_8), 1))
        goto end;


    if (FUNC_10(VAR_8, VAR_7, VAR_2, VAR_5, VAR_1) != 1) {
        FUNC_15("EVP verify with unpadded length %d failed\n", VAR_1);
        goto end;
    }


    if (FUNC_10(VAR_8, VAR_7, VAR_2, VAR_6, VAR_3) != 1) {
        FUNC_15("EVP verify with length %d failed\n", VAR_1);
        goto end;
    }


    if (FUNC_2(0, VAR_5, VAR_1, VAR_7, VAR_2, VAR_0) != 1) {
        FUNC_15("Verification with unpadded data failed, len=%d", VAR_1);
        goto end;
    }

    if (FUNC_2(0, VAR_6, VAR_3, VAR_7, VAR_2, VAR_0) != 1) {
        FUNC_15("verify with length %d failed\n", VAR_1);
        goto end;
    }

    VAR_4 = 1;
end:
    FUNC_3(VAR_8);
    FUNC_5(VAR_9);

    FUNC_12(VAR_7);
    FUNC_12(VAR_6);
    FUNC_12(VAR_5);

    return VAR_4;
}
