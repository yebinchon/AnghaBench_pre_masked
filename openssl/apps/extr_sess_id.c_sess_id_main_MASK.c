
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509 ;
typedef int SSL_SESSION ;
typedef int OPTION_CHOICE ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int *,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int VAR_3 ;
 int VAR_4 ;







 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;
 size_t VAR_5 ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,unsigned char*,size_t) ;
 int FUNC_10 (int *,int *) ;
 int VAR_6 ;
 int * FUNC_11 (char*,char,int) ;
 int FUNC_12 (int *,int *) ;
 scalar_t__ FUNC_13 (int *,int *) ;
 int * FUNC_14 (char*,int) ;
 char* FUNC_15 () ;
 int FUNC_16 (char*,int,int*) ;
 int FUNC_17 (int ) ;
 char* FUNC_18 (int,char**,int ) ;
 int FUNC_19 () ;
 int FUNC_20 () ;
 int VAR_7 ;
 size_t FUNC_21 (char*) ;

int FUNC_22(int VAR_8, char **VAR_9)
{
    SSL_SESSION *VAR_10 = ((void*)0);
    X509 *VAR_11 = ((void*)0);
    BIO *VAR_12 = ((void*)0);
    char *VAR_13 = ((void*)0), *VAR_14 = ((void*)0), *VAR_15 = ((void*)0), *VAR_16;
    int VAR_17 = VAR_2, VAR_18 = VAR_2;
    int VAR_19 = 0, VAR_20 = 0, VAR_21 = 0, VAR_22 = 1, VAR_23, VAR_24 = 0;
    OPTION_CHOICE VAR_25;

    VAR_16 = FUNC_18(VAR_8, VAR_9, VAR_7);
    while ((VAR_25 = FUNC_19()) != 136) {
        switch (VAR_25) {
        case 136:
        case 135:
 opthelp:
            FUNC_1(VAR_6, "%s: Use -help for summary.\n", VAR_16);
            goto end;
        case 134:
            FUNC_17(VAR_7);
            VAR_22 = 0;
            goto end;
        case 132:
            if (!FUNC_16(FUNC_15(), VAR_4, &VAR_17))
                goto opthelp;
            break;
        case 129:
            if (!FUNC_16(FUNC_15(), VAR_4 | VAR_3,
                            &VAR_18))
                goto opthelp;
            break;
        case 133:
            VAR_13 = FUNC_15();
            break;
        case 130:
            VAR_14 = FUNC_15();
            break;
        case 128:
            VAR_21 = ++VAR_24;
            break;
        case 138:
            VAR_19 = ++VAR_24;
            break;
        case 131:
            VAR_20 = ++VAR_24;
            break;
        case 137:
            VAR_15 = FUNC_15();
            break;
        }
    }
    VAR_8 = FUNC_20();
    if (VAR_8 != 0)
        goto opthelp;

    VAR_10 = FUNC_14(VAR_13, VAR_17);
    if (VAR_10 == ((void*)0)) {
        goto end;
    }
    VAR_11 = FUNC_6(VAR_10);

    if (VAR_15 != ((void*)0)) {
        size_t VAR_26 = FUNC_21(VAR_15);
        if (VAR_26 > VAR_5) {
            FUNC_1(VAR_6, "Context too long\n");
            goto end;
        }
        if (!FUNC_9(VAR_10, (unsigned char *)VAR_15,
                                         VAR_26)) {
            FUNC_1(VAR_6, "Error setting id context\n");
            goto end;
        }
    }

    if (!VAR_20 || VAR_21) {
        VAR_12 = FUNC_11(VAR_14, 'w', VAR_18);
        if (VAR_12 == ((void*)0))
            goto end;
    }

    if (VAR_21) {
        FUNC_7(VAR_12, VAR_10);

        if (VAR_19) {
            if (VAR_11 == ((void*)0))
                FUNC_2(VAR_12, "No certificate present\n");
            else
                FUNC_10(VAR_12, VAR_11);
        }
    }

    if (!VAR_20 && !VAR_19) {
        if (VAR_18 == VAR_0) {
            VAR_23 = FUNC_12(VAR_12, VAR_10);
        } else if (VAR_18 == VAR_2) {
            VAR_23 = FUNC_3(VAR_12, VAR_10);
        } else if (VAR_18 == VAR_1) {
            VAR_23 = FUNC_8(VAR_12, VAR_10);
        } else {
            FUNC_1(VAR_6, "bad output format specified for outfile\n");
            goto end;
        }
        if (!VAR_23) {
            FUNC_1(VAR_6, "unable to write SSL_SESSION\n");
            goto end;
        }
    } else if (!VAR_20 && (VAR_11 != ((void*)0))) {
        if (VAR_18 == VAR_0) {
            VAR_23 = (int)FUNC_13(VAR_12, VAR_11);
        } else if (VAR_18 == VAR_2) {
            VAR_23 = FUNC_4(VAR_12, VAR_11);
        } else {
            FUNC_1(VAR_6, "bad output format specified for outfile\n");
            goto end;
        }
        if (!VAR_23) {
            FUNC_1(VAR_6, "unable to write X509\n");
            goto end;
        }
    }
    VAR_22 = 0;
 end:
    FUNC_0(VAR_12);
    FUNC_5(VAR_10);
    return VAR_22;
}
