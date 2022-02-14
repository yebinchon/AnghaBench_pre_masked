
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int trash ;
typedef scalar_t__ passwd_modes ;
typedef int OPTION_CHOICE ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int ,char*,...) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (char*,size_t,char*,int) ;
 int VAR_1 ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (size_t,char*) ;
 int FUNC_7 (int ) ;
 int VAR_2 ;
 int * FUNC_8 (char*,char,int ) ;
 int VAR_3 ;
 int FUNC_9 (int,char**,char**,char*,int ,int,int,int,size_t,scalar_t__) ;
 char* FUNC_10 () ;
 int FUNC_11 (int ) ;
 char* FUNC_12 (int,char**,int ) ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 (int) ;
 char** FUNC_16 () ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 char* FUNC_17 (char*,char) ;

int FUNC_18(int VAR_12, char **VAR_13)
{
    BIO *VAR_14 = ((void*)0);
    char *VAR_15 = ((void*)0), *VAR_16 = ((void*)0), *VAR_17 = ((void*)0), **VAR_18 = ((void*)0);
    char *VAR_19 = ((void*)0), *VAR_20 = ((void*)0), *VAR_21;
    OPTION_CHOICE VAR_22;
    int VAR_23 = 0, VAR_24 = 0;

    int VAR_25 = 0;

    int VAR_26 = 0, VAR_27 = 0, VAR_28 = 0, VAR_29 = 0;
    int VAR_30 = 1;
    passwd_modes VAR_31 = VAR_11;
    size_t VAR_32 = 0;
    size_t VAR_33 = 256;


    VAR_21 = FUNC_12(VAR_12, VAR_13, VAR_8);
    while ((VAR_22 = FUNC_13()) != 138) {
        switch (VAR_22) {
        case 138:
        case 137:
 opthelp:
            FUNC_2(VAR_2, "%s: Use -help for summary.\n", VAR_21);
            goto end;
        case 136:
            FUNC_11(VAR_8);
            VAR_30 = 0;
            goto end;
        case 135:
            if (VAR_24)
                goto opthelp;
            VAR_15 = FUNC_10();
            VAR_24 = 1;
            break;
        case 134:

            VAR_25 = 1;

            break;
        case 133:
            VAR_27 = 1;
            break;
        case 128:
            VAR_28 = 1;
            break;
        case 132:
            VAR_29 = 1;
            break;
        case 144:
            if (VAR_31 != VAR_11)
                goto opthelp;
            VAR_31 = VAR_7;
            break;
        case 143:
            if (VAR_31 != VAR_11)
                goto opthelp;
            VAR_31 = VAR_9;
            break;
        case 142:
            if (VAR_31 != VAR_11)
                goto opthelp;
            VAR_31 = VAR_10;
            break;
        case 140:
            if (VAR_31 != VAR_11)
                goto opthelp;
            VAR_31 = VAR_5;
            break;
        case 141:
            if (VAR_31 != VAR_11)
                goto opthelp;
            VAR_31 = VAR_4;
            break;
        case 139:

            if (VAR_31 != VAR_11)
                goto opthelp;
            VAR_31 = VAR_6;

            break;
        case 130:
            VAR_26 = 1;
            VAR_16 = FUNC_10();
            break;
        case 129:
            if (VAR_24)
                goto opthelp;
            VAR_23 = 1;
            VAR_24 = 1;
            break;
        case 131:
            if (!FUNC_15(VAR_22))
                goto end;
            break;
        }
    }
    VAR_12 = FUNC_14();
    VAR_13 = FUNC_16();

    if (*VAR_13 != ((void*)0)) {
        if (VAR_24)
            goto opthelp;
        VAR_24 = 1;
        VAR_18 = VAR_13;
    }

    if (VAR_31 == VAR_11) {

        VAR_31 = VAR_6;
    }






    if (VAR_15 != ((void*)0) && VAR_23) {
        FUNC_2(VAR_2, "%s: Can't combine -in and -stdin\n", VAR_21);
        goto end;
    }

    if (VAR_15 != ((void*)0) || VAR_23) {




        VAR_14 = FUNC_8(VAR_15, 'r', VAR_1);
        if (VAR_14 == ((void*)0))
            goto end;
    }

    if (VAR_31 == VAR_6)
        VAR_33 = 8;

    if (VAR_18 == ((void*)0)) {


        VAR_32 = VAR_33 + 2;

        VAR_17 = VAR_20 =
            FUNC_6(VAR_32, "password buffer");
    }

    if ((VAR_14 == ((void*)0)) && (VAR_18 == ((void*)0))) {





        if (1) {


            static char *VAR_34[2] = { ((void*)0), ((void*)0) };

            VAR_18 = VAR_34;
            if (VAR_14 == ((void*)0)) {
                if (FUNC_4
                    (VAR_20, VAR_32, "Password: ",
                     !(VAR_26 || VAR_25)) != 0)
                    goto end;
            }
            VAR_18[0] = VAR_20;
        } else {

            FUNC_2(VAR_2, "password required\n");
            goto end;
        }
    }

    if (VAR_14 == ((void*)0)) {
        FUNC_7(VAR_18 != ((void*)0));
        FUNC_7(*VAR_18 != ((void*)0));

        do {
            VAR_17 = *VAR_18++;
            if (!FUNC_9(VAR_26, &VAR_16, &VAR_19, VAR_17, VAR_3,
                           VAR_27, VAR_28, VAR_29, VAR_33, VAR_31))
                goto end;
        } while (*VAR_18 != ((void*)0));
    } else {

        int VAR_35;

        FUNC_7(VAR_17 != ((void*)0));
        do {
            int VAR_36 = FUNC_1(VAR_14, VAR_17, VAR_33 + 1);
            if (VAR_36 > 0) {
                char *VAR_37 = (FUNC_17(VAR_17, '\n'));
                if (VAR_37 != ((void*)0)) {
                    *VAR_37 = 0;
                } else {

                    char VAR_38[VAR_0];
                    do
                        VAR_36 = FUNC_1(VAR_14, VAR_38, sizeof(VAR_38));
                    while ((VAR_36 > 0) && (!FUNC_17(VAR_38, '\n')));
                }

                if (!FUNC_9
                    (VAR_26, &VAR_16, &VAR_19, VAR_17, VAR_3, VAR_27,
                     VAR_28, VAR_29, VAR_33, VAR_31))
                    goto end;
            }
            VAR_35 = (VAR_36 <= 0);
        } while (!VAR_35);
    }
    VAR_30 = 0;

 end:



    FUNC_5(VAR_19);
    FUNC_5(VAR_20);
    FUNC_0(VAR_14);
    return VAR_30;
}
