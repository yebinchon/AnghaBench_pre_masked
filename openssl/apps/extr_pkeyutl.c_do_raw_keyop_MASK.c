
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_PKEY_CTX ;
typedef int EVP_PKEY ;
typedef int EVP_MD_CTX ;
typedef int EVP_MD ;
typedef int BIO ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *,unsigned char*,int) ;
 int FUNC_2 (int *,unsigned char*,size_t*,unsigned char*,int) ;
 int FUNC_3 (int *,unsigned char*,size_t*) ;
 int FUNC_4 (int *,int *,int const*,int *,int *) ;
 int FUNC_5 (int *,unsigned char*,size_t) ;
 int FUNC_6 (int *,unsigned char*,size_t,unsigned char*,int) ;
 int FUNC_7 (int *,unsigned char*,size_t) ;
 int FUNC_8 (int *,int *,int const*,int *,int *) ;
 int FUNC_9 (int *,unsigned char*,size_t) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 () ;
 int FUNC_12 (int *,int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;


 scalar_t__ FUNC_13 (int *) ;
 int FUNC_14 (unsigned char*) ;
 int VAR_2 ;
 unsigned char* FUNC_15 (size_t,char*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_16(int VAR_4, EVP_PKEY_CTX *VAR_5,
                        const EVP_MD *VAR_6, EVP_PKEY *VAR_7, BIO *VAR_8,
                        int VAR_9, unsigned char *VAR_10, int VAR_11,
                        unsigned char **VAR_12, size_t *VAR_13)
{
    int VAR_14 = 0;
    EVP_MD_CTX *VAR_15 = ((void*)0);
    unsigned char VAR_16[VAR_2];
    unsigned char *VAR_17 = ((void*)0);
    int VAR_18 = 0;

    if ((VAR_15 = FUNC_11()) == ((void*)0)) {
        FUNC_0(VAR_3, "Error: out of memory\n");
        return VAR_14;
    }
    FUNC_12(VAR_15, VAR_5);


    if (FUNC_13(VAR_7) == VAR_0
            || FUNC_13(VAR_7) == VAR_1) {
        if (VAR_9 < 0) {
            FUNC_0(VAR_3,
                       "Error: unable to determine file size for oneshot operation\n");
            goto end;
        }
        VAR_17 = FUNC_15(VAR_9, "oneshot sign/verify buffer");
        switch(VAR_4) {
        case 128:
            if (FUNC_8(VAR_15, ((void*)0), VAR_6, ((void*)0), VAR_7) != 1)
                goto end;
            VAR_18 = FUNC_1(VAR_8, VAR_17, VAR_9);
            if (VAR_18 != VAR_9) {
                FUNC_0(VAR_3, "Error reading raw input data\n");
                goto end;
            }
            VAR_14 = FUNC_6(VAR_15, VAR_10, (size_t)VAR_11, VAR_17, VAR_18);
            break;
        case 129:
            if (FUNC_4(VAR_15, ((void*)0), VAR_6, ((void*)0), VAR_7) != 1)
                goto end;
            VAR_18 = FUNC_1(VAR_8, VAR_17, VAR_9);
            if (VAR_18 != VAR_9) {
                FUNC_0(VAR_3, "Error reading raw input data\n");
                goto end;
            }
            VAR_14 = FUNC_2(VAR_15, ((void*)0), VAR_13, VAR_17, VAR_18);
            if (VAR_14 == 1 && VAR_12 != ((void*)0)) {
                *VAR_12 = FUNC_15(*VAR_13, "buffer output");
                VAR_14 = FUNC_2(VAR_15, *VAR_12, VAR_13, VAR_17, VAR_18);
            }
            break;
        }
        goto end;
    }

    switch(VAR_4) {
    case 128:
        if (FUNC_8(VAR_15, ((void*)0), VAR_6, ((void*)0), VAR_7) != 1)
            goto end;
        for (;;) {
            VAR_18 = FUNC_1(VAR_8, VAR_16, VAR_2);
            if (VAR_18 == 0)
                break;
            if (VAR_18 < 0) {
                FUNC_0(VAR_3, "Error reading raw input data\n");
                goto end;
            }
            VAR_14 = FUNC_9(VAR_15, VAR_16, (size_t)VAR_18);
            if (VAR_14 != 1) {
                FUNC_0(VAR_3, "Error verifying raw input data\n");
                goto end;
            }
        }
        VAR_14 = FUNC_7(VAR_15, VAR_10, (size_t)VAR_11);
        break;
    case 129:
        if (FUNC_4(VAR_15, ((void*)0), VAR_6, ((void*)0), VAR_7) != 1)
            goto end;
        for (;;) {
            VAR_18 = FUNC_1(VAR_8, VAR_16, VAR_2);
            if (VAR_18 == 0)
                break;
            if (VAR_18 < 0) {
                FUNC_0(VAR_3, "Error reading raw input data\n");
                goto end;
            }
            VAR_14 = FUNC_5(VAR_15, VAR_16, (size_t)VAR_18);
            if (VAR_14 != 1) {
                FUNC_0(VAR_3, "Error signing raw input data\n");
                goto end;
            }
        }
        VAR_14 = FUNC_3(VAR_15, ((void*)0), VAR_13);
        if (VAR_14 == 1 && VAR_12 != ((void*)0)) {
            *VAR_12 = FUNC_15(*VAR_13, "buffer output");
            VAR_14 = FUNC_3(VAR_15, *VAR_12, VAR_13);
        }
        break;
    }

 end:
    FUNC_14(VAR_17);
    FUNC_10(VAR_15);
    return VAR_14;
}
