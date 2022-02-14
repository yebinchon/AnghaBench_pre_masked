
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int X509 ;
struct TYPE_6__ {int * certs; } ;
typedef int OPTION_CHOICE ;
typedef TYPE_1__ NETSCAPE_CERT_SEQUENCE ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,char*,...) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_1__* FUNC_5 () ;






 TYPE_1__* FUNC_6 (int *,int *,int *,int *) ;
 int * FUNC_7 (int *,int *,int *,int *) ;
 int FUNC_8 (int *,TYPE_1__*) ;
 int FUNC_9 (int *,int *) ;
 int VAR_1 ;
 int * FUNC_10 (char*,char,int ) ;
 int FUNC_11 (int *,int *) ;
 int VAR_2 ;
 char* FUNC_12 () ;
 int FUNC_13 (int ) ;
 char* FUNC_14 (int,char**,int ) ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 int * FUNC_17 () ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *,int *) ;
 int * FUNC_20 (int *,int) ;

int FUNC_21(int VAR_3, char **VAR_4)
{
    BIO *VAR_5 = ((void*)0), *VAR_6 = ((void*)0);
    X509 *VAR_7 = ((void*)0);
    NETSCAPE_CERT_SEQUENCE *VAR_8 = ((void*)0);
    OPTION_CHOICE VAR_9;
    int VAR_10 = 0, VAR_11 = 1, VAR_12;
    char *VAR_13 = ((void*)0), *VAR_14 = ((void*)0), *VAR_15;

    VAR_15 = FUNC_14(VAR_3, VAR_4, VAR_2);
    while ((VAR_9 = FUNC_15()) != 133) {
        switch (VAR_9) {
        case 133:
        case 132:
 opthelp:
            FUNC_2(VAR_1, "%s: Use -help for summary.\n", VAR_15);
            goto end;
        case 131:
            VAR_11 = 0;
            FUNC_13(VAR_2);
            goto end;
        case 128:
            VAR_10 = 1;
            break;
        case 130:
            VAR_13 = FUNC_12();
            break;
        case 129:
            VAR_14 = FUNC_12();
            break;
        }
    }
    VAR_3 = FUNC_16();
    if (VAR_3 != 0)
        goto opthelp;

    VAR_5 = FUNC_10(VAR_13, 'r', VAR_0);
    if (VAR_5 == ((void*)0))
        goto end;
    VAR_6 = FUNC_10(VAR_14, 'w', VAR_0);
    if (VAR_6 == ((void*)0))
        goto end;

    if (VAR_10) {
        VAR_8 = FUNC_5();
        if (VAR_8 == ((void*)0))
            goto end;
        VAR_8->certs = FUNC_17();
        if (VAR_8->certs == ((void*)0))
            goto end;
        while ((VAR_7 = FUNC_7(VAR_5, ((void*)0), ((void*)0), ((void*)0))))
            FUNC_19(VAR_8->certs, VAR_7);

        if (!FUNC_18(VAR_8->certs)) {
            FUNC_2(VAR_1, "%s: Error reading certs file %s\n",
                       VAR_15, VAR_13);
            FUNC_3(VAR_1);
            goto end;
        }
        FUNC_8(VAR_6, VAR_8);
        VAR_11 = 0;
        goto end;
    }

    VAR_8 = FUNC_6(VAR_5, ((void*)0), ((void*)0), ((void*)0));
    if (VAR_8 == ((void*)0)) {
        FUNC_2(VAR_1, "%s: Error reading sequence file %s\n",
                   VAR_15, VAR_13);
        FUNC_3(VAR_1);
        goto end;
    }

    for (VAR_12 = 0; VAR_12 < FUNC_18(VAR_8->certs); VAR_12++) {
        VAR_7 = FUNC_20(VAR_8->certs, VAR_12);
        FUNC_11(VAR_6, VAR_7);
        FUNC_9(VAR_6, VAR_7);
    }
    VAR_11 = 0;
 end:
    FUNC_0(VAR_5);
    FUNC_1(VAR_6);
    FUNC_4(VAR_8);

    return VAR_11;
}
