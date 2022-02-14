
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UI_METHOD ;
typedef int PW_CB_DATA ;
typedef int OSSL_STORE_SEARCH ;
typedef int OSSL_STORE_INFO ;
typedef int OSSL_STORE_CTX ;
typedef int BIO ;


 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,int ,int *) ;
 int FUNC_4 (int *,int ,int ,int *) ;





 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 char* FUNC_8 (int *) ;
 char* FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 char* FUNC_13 (int) ;
 int FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (int *) ;
 int FUNC_17 (int *,int) ;
 int FUNC_18 (int *,int *) ;
 int * FUNC_19 (int *) ;
 int * FUNC_20 (char const*,int const*,int *,int *,int *) ;
 int FUNC_21 (int *,int) ;
 int FUNC_22 (int *,int ) ;
 int FUNC_23 (int *,int ,int *,int *,int ,int *,int *) ;
 int FUNC_24 (int *,int ) ;
 int FUNC_25 (int *,int ) ;
 int FUNC_26 (int *,int ) ;
 int FUNC_27 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_28 (int,int *,char*,...) ;

__attribute__((used)) static int FUNC_29(const char *VAR_2, const UI_METHOD *VAR_3, PW_CB_DATA *VAR_4,
                   int VAR_5, int VAR_6, OSSL_STORE_SEARCH *VAR_7,
                   int VAR_8, int VAR_9, int VAR_10, int VAR_11, BIO *VAR_12,
                   const char *VAR_13)
{
    OSSL_STORE_CTX *VAR_14 = ((void*)0);
    int VAR_15 = 1, VAR_16 = 0;

    if ((VAR_14 = FUNC_20(VAR_2, VAR_3, VAR_4, ((void*)0), ((void*)0)))
        == ((void*)0)) {
        FUNC_0(VAR_0, "Couldn't open file or uri %s\n", VAR_2);
        FUNC_2(VAR_0);
        return VAR_15;
    }

    if (VAR_5 != 0) {
        if (!FUNC_17(VAR_14, VAR_5)) {
            FUNC_2(VAR_0);
            goto end2;
        }
    }

    if (VAR_6 != 0) {
        if (!FUNC_21(VAR_14, VAR_6)) {
            FUNC_0(VAR_0,
                       "%s: the store scheme doesn't support the given search criteria.\n",
                       VAR_13);
            goto end2;
        }

        if (!FUNC_18(VAR_14, VAR_7)) {
            FUNC_2(VAR_0);
            goto end2;
        }
    }


    VAR_15 = 0;

    for (;;) {
        OSSL_STORE_INFO *VAR_17 = FUNC_19(VAR_14);
        int VAR_18 = VAR_17 == ((void*)0) ? 0 : FUNC_12(VAR_17);
        const char *VAR_19 =
            VAR_17 == ((void*)0) ? ((void*)0) : FUNC_13(VAR_18);

        if (VAR_17 == ((void*)0)) {
            if (FUNC_15(VAR_14))
                break;

            if (FUNC_16(VAR_14)) {
                if (VAR_10)
                    FUNC_1();
                else
                    FUNC_2(VAR_0);
                VAR_15++;
                continue;
            }

            FUNC_0(VAR_0,
                       "ERROR: OSSL_STORE_load() returned NULL without "
                       "eof or error indications\n");
            FUNC_0(VAR_0, "       This is an error in the loader\n");
            FUNC_2(VAR_0);
            VAR_15++;
            break;
        }

        if (VAR_18 == 130) {
            const char *VAR_20 = FUNC_8(VAR_17);
            const char *VAR_21 = FUNC_9(VAR_17);
            FUNC_28(VAR_11, &VAR_1, "%d: %s: %s\n", VAR_16, VAR_19,
                          VAR_20);
            if (VAR_21 != ((void*)0))
                FUNC_28(VAR_11, &VAR_1, "%s\n", VAR_21);
        } else {
            FUNC_28(VAR_11, &VAR_1, "%d: %s\n", VAR_16, VAR_19);
        }






        switch (VAR_18) {
        case 130:
            if (VAR_10) {
                const char *VAR_22 = FUNC_8(VAR_17);
                VAR_15 += FUNC_29(VAR_22, VAR_3, VAR_4,
                               VAR_5, VAR_6, VAR_7,
                               VAR_8, VAR_9, VAR_10, VAR_11 + 2, VAR_12, VAR_13);
            }
            break;
        case 129:
            if (VAR_8)
                FUNC_3(VAR_12, FUNC_10(VAR_17),
                                      0, ((void*)0));
            if (!VAR_9)
                FUNC_22(VAR_12,
                                         FUNC_10(VAR_17));
            break;
        case 128:
            if (VAR_8)
                FUNC_4(VAR_12, FUNC_11(VAR_17),
                                       0, ((void*)0));
            if (!VAR_9)
                FUNC_23(VAR_12, FUNC_11(VAR_17),
                                         ((void*)0), ((void*)0), 0, ((void*)0), ((void*)0));
            break;
        case 132:
            if (VAR_8)
                FUNC_27(VAR_12, FUNC_6(VAR_17));
            if (!VAR_9)
                FUNC_24(VAR_12, FUNC_6(VAR_17));
            break;
        case 131:
            if (VAR_8)
                FUNC_26(VAR_12, FUNC_7(VAR_17));
            if (!VAR_9)
                FUNC_25(VAR_12, FUNC_7(VAR_17));
            break;
        default:
            FUNC_0(VAR_0, "!!! Unknown code\n");
            VAR_15++;
            break;
        }
        VAR_16++;
        FUNC_5(VAR_17);
    }
    FUNC_28(VAR_11, VAR_12, "Total found: %d\n", VAR_16);

 end2:
    if (!FUNC_14(VAR_14)) {
        FUNC_2(VAR_0);
        VAR_15++;
    }

    return VAR_15;
}
