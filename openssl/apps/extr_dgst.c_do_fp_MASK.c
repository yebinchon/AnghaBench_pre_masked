
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_PKEY ;
typedef int EVP_MD_CTX ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int **) ;
 size_t FUNC_2 (int *,char*,int) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,...) ;
 int FUNC_5 (int *,char const*) ;
 int FUNC_6 (int *,char*,int) ;
 int FUNC_7 (int *,unsigned char*,size_t) ;
 int VAR_0 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,unsigned char*,size_t*) ;
 int FUNC_10 (int *,unsigned char*,unsigned int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (unsigned char*,size_t) ;
 int FUNC_13 (char*) ;
 unsigned char* FUNC_14 (size_t,char*) ;
 int * VAR_1 ;
 char* FUNC_15 (char const*,int*) ;

int FUNC_16(BIO *VAR_2, unsigned char *VAR_3, BIO *VAR_4, int VAR_5, int VAR_6,
          EVP_PKEY *VAR_7, unsigned char *VAR_8, int VAR_9,
          const char *VAR_10, const char *VAR_11,
          const char *VAR_12)
{
    size_t VAR_13 = VAR_0;
    int VAR_14, VAR_15 = 0, VAR_16 = 1;
    unsigned char *VAR_17 = ((void*)0);

    while (FUNC_3(VAR_4) || !FUNC_0(VAR_4)) {
        VAR_14 = FUNC_6(VAR_4, (char *)VAR_3, VAR_0);
        if (VAR_14 < 0) {
            FUNC_4(VAR_1, "Read Error in %s\n", VAR_12);
            FUNC_8(VAR_1);
            goto end;
        }
        if (VAR_14 == 0)
            break;
    }
    if (VAR_8 != ((void*)0)) {
        EVP_MD_CTX *VAR_18;
        FUNC_1(VAR_4, &VAR_18);
        VAR_14 = FUNC_10(VAR_18, VAR_8, (unsigned int)VAR_9);
        if (VAR_14 > 0) {
            FUNC_4(VAR_2, "Verified OK\n");
        } else if (VAR_14 == 0) {
            FUNC_4(VAR_2, "Verification Failure\n");
            goto end;
        } else {
            FUNC_4(VAR_1, "Error Verifying Data\n");
            FUNC_8(VAR_1);
            goto end;
        }
        VAR_16 = 0;
        goto end;
    }
    if (VAR_7 != ((void*)0)) {
        EVP_MD_CTX *VAR_19;
        int VAR_20;
        FUNC_1(VAR_4, &VAR_19);
        VAR_20 = FUNC_11(VAR_7);
        if (VAR_20 > VAR_0) {
            VAR_13 = VAR_20;
            VAR_17 = FUNC_14(VAR_13, "Signature buffer");
            VAR_3 = VAR_17;
        }
        if (!FUNC_9(VAR_19, VAR_3, &VAR_13)) {
            FUNC_4(VAR_1, "Error Signing Data\n");
            FUNC_8(VAR_1);
            goto end;
        }
    } else {
        VAR_13 = FUNC_2(VAR_4, (char *)VAR_3, VAR_0);
        if ((int)VAR_13 < 0) {
            FUNC_8(VAR_1);
            goto end;
        }
    }

    if (VAR_6) {
        FUNC_7(VAR_2, VAR_3, VAR_13);
    } else if (VAR_5 == 2) {
        VAR_12 = FUNC_15(VAR_12, &VAR_15);

        if (VAR_15 == 1)
            FUNC_5(VAR_2, "\\");

        for (VAR_14 = 0; VAR_14 < (int)VAR_13; VAR_14++)
            FUNC_4(VAR_2, "%02x", VAR_3[VAR_14]);

        FUNC_4(VAR_2, " *%s\n", VAR_12);
        FUNC_13((char *)VAR_12);
    } else {
        if (VAR_10 != ((void*)0)) {
            FUNC_5(VAR_2, VAR_10);
            if (VAR_11 != ((void*)0))
                FUNC_4(VAR_2, "-%s", VAR_11);
            FUNC_4(VAR_2, "(%s)= ", VAR_12);
        } else if (VAR_11 != ((void*)0)) {
            FUNC_4(VAR_2, "%s(%s)= ", VAR_11, VAR_12);
        } else {
            FUNC_4(VAR_2, "(%s)= ", VAR_12);
        }
        for (VAR_14 = 0; VAR_14 < (int)VAR_13; VAR_14++) {
            if (VAR_5 && (VAR_14 != 0))
                FUNC_4(VAR_2, ":");
            FUNC_4(VAR_2, "%02x", VAR_3[VAR_14]);
        }
        FUNC_4(VAR_2, "\n");
    }

    VAR_16 = 0;
 end:
    if (VAR_17 != ((void*)0))
        FUNC_12(VAR_17, VAR_13);

    return VAR_16;
}
