
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TS_TST_INFO ;
typedef int TS_RESP ;
typedef int PKCS7 ;
typedef int EVP_MD ;
typedef int CONF ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,int *) ;
 int VAR_2 ;
 int * FUNC_9 (char const*,char,int ) ;
 int * FUNC_10 (int *,char const*,char const*,char const*,char const*,char const*,int const*,char const*,char const*,char const*) ;
 int * FUNC_11 (int *,int *) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int *,int *) ;
 int * FUNC_14 (int *) ;

__attribute__((used)) static int FUNC_15(CONF *VAR_3, const char *VAR_4, const char *VAR_5,
                         const char *VAR_6, const char *VAR_7, const char *VAR_8,
                         const EVP_MD *VAR_9, const char *VAR_10, const char *VAR_11,
                         const char *VAR_12, const char *VAR_13, int VAR_14,
                         const char *VAR_15, int VAR_16, int VAR_17)
{
    int VAR_18 = 0;
    TS_RESP *VAR_19 = ((void*)0);
    BIO *VAR_20 = ((void*)0);
    BIO *VAR_21 = ((void*)0);
    BIO *VAR_22 = ((void*)0);
    BIO *VAR_23 = ((void*)0);
    BIO *VAR_24 = ((void*)0);

    if (VAR_13 != ((void*)0)) {
        if ((VAR_20 = FUNC_1(VAR_13, "rb")) == ((void*)0))
            goto end;
        if (VAR_14) {
            VAR_19 = FUNC_14(VAR_20);
        } else {
            VAR_19 = FUNC_11(VAR_20, ((void*)0));
        }
    } else {
        VAR_19 = FUNC_10(VAR_3, VAR_4, VAR_5, VAR_6,
                                   VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12);
        if (VAR_19 != ((void*)0))
            FUNC_2(VAR_2, "Response has been generated.\n");
        else
            FUNC_2(VAR_2, "Response is not generated.\n");
    }
    if (VAR_19 == ((void*)0))
        goto end;


    if (VAR_17) {
        if ((VAR_24 = FUNC_9(VAR_15, 'w', VAR_1)) == ((void*)0))
        goto end;
        if (VAR_16) {
            TS_TST_INFO *VAR_25 = FUNC_6(VAR_19);
            if (!FUNC_8(VAR_24, VAR_25))
                goto end;
        } else {
            if (!FUNC_7(VAR_24, VAR_19))
                goto end;
        }
    } else {
        if ((VAR_24 = FUNC_9(VAR_15, 'w', VAR_0)) == ((void*)0))
            goto end;
        if (VAR_16) {
            PKCS7 *VAR_26 = FUNC_5(VAR_19);
            if (!FUNC_12(VAR_24, VAR_26))
                goto end;
        } else {
            if (!FUNC_13(VAR_24, VAR_19))
                goto end;
        }
    }

    VAR_18 = 1;

 end:
    FUNC_3(VAR_2);
    FUNC_0(VAR_20);
    FUNC_0(VAR_21);
    FUNC_0(VAR_22);
    FUNC_0(VAR_23);
    FUNC_0(VAR_24);
    FUNC_4(VAR_19);
    return VAR_18;
}
