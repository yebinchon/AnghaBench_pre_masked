
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int buf ;
struct TYPE_2__ {int depth; } ;
typedef int SSL_METHOD ;
typedef int SSL_CTX ;
typedef int SSL ;
typedef int OPTION_CHOICE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (char*,int,int ,char*) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int const*) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,char*) ;
 scalar_t__ FUNC_8 (int *,int) ;
 scalar_t__ FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int *,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,char*,int) ;
 scalar_t__ FUNC_16 (int *) ;
 int FUNC_17 (int *,int) ;
 int FUNC_18 (int *) ;
 scalar_t__ FUNC_19 (int *,char*,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int * FUNC_20 () ;
 int VAR_13 ;
 int FUNC_21 (int *,char*,int,char*,int,char*,int) ;
 int * FUNC_22 (int *,char*,int *) ;
 int FUNC_23 (int ) ;
 int VAR_14 ;
 size_t VAR_15 ;
 int FUNC_24 (int,int ) ;
 char* FUNC_25 (char*) ;
 char* FUNC_26 () ;
 int FUNC_27 (int ) ;
 char* FUNC_28 (int,char**,int ) ;
 int FUNC_29 (char*,int*) ;
 int FUNC_30 () ;
 int FUNC_31 () ;
 int FUNC_32 (char*,...) ;
 int VAR_16 ;
 int FUNC_33 (int *,char*,char*) ;
 int FUNC_34 (char*) ;
 int VAR_17 ;
 size_t FUNC_35 (char*) ;
 scalar_t__ FUNC_36 (int *) ;
 double FUNC_37 (int ) ;
 TYPE_1__ VAR_18 ;

int FUNC_38(int VAR_19, char **VAR_20)
{
    char VAR_21[1024 * 8];
    SSL *VAR_22 = ((void*)0);
    SSL_CTX *VAR_23 = ((void*)0);
    const SSL_METHOD *VAR_24 = ((void*)0);
    char *VAR_25 = ((void*)0), *VAR_26 = ((void*)0), *VAR_27 = ((void*)0);
    char *VAR_28 = ((void*)0), *VAR_29 = ((void*)0);
    char *VAR_30 = ((void*)0);
    char *VAR_31 = VAR_2, *VAR_32 = ((void*)0), *VAR_33 = ((void*)0), *VAR_34;
    double VAR_35 = 0.0;
    int VAR_36 = 0, VAR_37 = 0, VAR_38 = 0;
    int VAR_39 = VAR_0, VAR_40 = 0, VAR_41 = 3, VAR_42 = 1, VAR_43, VAR_44 = 0;
    long VAR_45 = 0, VAR_46 = 0;
    OPTION_CHOICE VAR_47;
    int VAR_48 = 0, VAR_49 = 0, VAR_50, VAR_51;
    size_t VAR_52;

    VAR_24 = FUNC_20();

    VAR_34 = FUNC_28(VAR_19, VAR_20, VAR_16);
    while ((VAR_47 = FUNC_30()) != 145) {
        switch (VAR_47) {
        case 145:
        case 144:
 opthelp:
            FUNC_1(VAR_13, "%s: Use -help for summary.\n", VAR_34);
            goto end;
        case 143:
            FUNC_27(VAR_16);
            VAR_42 = 0;
            goto end;
        case 146:
            VAR_31 = FUNC_26();
            break;
        case 136:
            VAR_41 = 2;
            break;
        case 140:
            VAR_41 = 1;
            break;
        case 129:
            if (!FUNC_29(FUNC_26(), &VAR_18.depth))
                goto opthelp;
            FUNC_1(VAR_13, "%s: verify depth is %d\n",
                       VAR_34, VAR_18.depth);
            break;
        case 149:
            VAR_32 = FUNC_26();
            break;
        case 141:
            if (!FUNC_34(FUNC_26()))
                goto end;
            break;
        case 142:
            VAR_33 = FUNC_26();
            break;
        case 151:
            VAR_25 = FUNC_26();
            break;
        case 152:
            VAR_26 = FUNC_26();
            break;
        case 138:
            VAR_36 = 1;
            break;
        case 139:
            VAR_37 = 1;
            break;
        case 150:
            VAR_27 = FUNC_26();
            break;
        case 137:
            VAR_38 = 1;
            break;
        case 148:
            VAR_28 = FUNC_26();
            break;
        case 147:
            VAR_29 = FUNC_26();
            break;
        case 153:
            VAR_44 = 1;
            break;
        case 134:
            if (!FUNC_29(FUNC_26(), &VAR_39))
                goto opthelp;
            break;
        case 128:
            VAR_30 = FUNC_26();
            VAR_52 = FUNC_35(VAR_30) + VAR_15;
            if (VAR_52 > sizeof(VAR_21)) {
                FUNC_1(VAR_13, "%s: -www option is too long\n", VAR_34);
                goto end;
            }
            break;
        case 135:
            VAR_48 = VAR_1;
            VAR_49 = VAR_1;
            break;
        case 133:
            VAR_48 = VAR_12;
            VAR_49 = VAR_12;
            break;
        case 132:
            VAR_48 = VAR_9;
            VAR_49 = VAR_9;
            break;
        case 131:
            VAR_48 = VAR_10;
            VAR_49 = VAR_10;
            break;
        case 130:
            VAR_48 = VAR_11;
            VAR_49 = VAR_11;
            break;
        }
    }
    VAR_19 = FUNC_31();
    if (VAR_19 != 0)
        goto opthelp;

    if (VAR_28 == ((void*)0))
        VAR_28 = FUNC_25("SSL_CIPHER");

    if ((VAR_23 = FUNC_5(VAR_24)) == ((void*)0))
        goto end;

    FUNC_10(VAR_23, VAR_3);
    FUNC_12(VAR_23, 1);
    if (FUNC_9(VAR_23, VAR_48) == 0)
        goto end;
    if (FUNC_8(VAR_23, VAR_49) == 0)
        goto end;

    if (VAR_44)
        FUNC_11(VAR_23, VAR_4);
    if (VAR_28 != ((void*)0) && !FUNC_6(VAR_23, VAR_28))
        goto end;
    if (VAR_29 != ((void*)0) && !FUNC_7(VAR_23, VAR_29))
        goto end;
    if (!FUNC_33(VAR_23, VAR_32, VAR_33))
        goto end;

    if (!FUNC_21(VAR_23, VAR_26, VAR_37, VAR_25, VAR_36,
                                  VAR_27, VAR_38)) {
        FUNC_3(VAR_13);
        goto end;
    }
    if (!(VAR_41 & 1))
        goto next;
    FUNC_32("Collecting connection statistics for %d seconds\n", VAR_39);



    VAR_45 = 0;
    VAR_46 = (long)FUNC_36(((void*)0)) + VAR_39;
    FUNC_37(VAR_7);
    for (;;) {
        if (VAR_46 < (long)FUNC_36(((void*)0)))
            break;

        if ((VAR_22 = FUNC_22(((void*)0), VAR_31, VAR_23)) == ((void*)0))
            goto end;

        if (VAR_30 != ((void*)0)) {
            VAR_51 = FUNC_2(VAR_21, sizeof(VAR_21), VAR_14,
                                   VAR_30);
            if (VAR_51 <= 0 || FUNC_19(VAR_22, VAR_21, VAR_51) <= 0)
                goto end;
            while ((VAR_43 = FUNC_15(VAR_22, VAR_21, sizeof(VAR_21))) > 0)
                VAR_45 += VAR_43;
        }
        FUNC_17(VAR_22, VAR_6 | VAR_5);
        FUNC_0(FUNC_14(VAR_22));

        VAR_40 += 1;
        if (FUNC_16(VAR_22)) {
            VAR_50 = 'r';
        } else {
            VAR_50 = FUNC_18(VAR_22);
            if (VAR_50 == VAR_12)
                VAR_50 = 't';
            else if (VAR_50 == VAR_1)
                VAR_50 = '3';
            else
                VAR_50 = '*';
        }
        FUNC_24(VAR_50, VAR_17);
        FUNC_23(VAR_17);

        FUNC_13(VAR_22);
        VAR_22 = ((void*)0);
    }
    VAR_35 += FUNC_37(VAR_8);

    VAR_43 = (int)((long)FUNC_36(((void*)0)) - VAR_46 + VAR_39);
    FUNC_32
        ("\n\n%d connections in %.2fs; %.2f connections/user sec, bytes read %ld\n",
         VAR_40, VAR_35, ((double)VAR_40 / VAR_35), VAR_45);
    FUNC_32
        ("%d connections in %ld real seconds, %ld bytes read per connection\n",
         VAR_40, (long)FUNC_36(((void*)0)) - VAR_46 + VAR_39, VAR_45 / VAR_40);





 next:
    if (!(VAR_41 & 2))
        goto end;
    FUNC_32("\n\nNow timing with session id reuse.\n");


    if ((VAR_22 = FUNC_22(((void*)0), VAR_31, VAR_23)) == ((void*)0)) {
        FUNC_1(VAR_13, "Unable to get connection\n");
        goto end;
    }

    if (VAR_30 != ((void*)0)) {
        VAR_51 = FUNC_2(VAR_21, sizeof(VAR_21), VAR_14, VAR_30);
        if (VAR_51 <= 0 || FUNC_19(VAR_22, VAR_21, VAR_51) <= 0)
            goto end;
        while ((VAR_43 = FUNC_15(VAR_22, VAR_21, sizeof(VAR_21))) > 0)
            continue;
    }
    FUNC_17(VAR_22, VAR_6 | VAR_5);
    FUNC_0(FUNC_14(VAR_22));

    VAR_40 = 0;
    VAR_35 = 0.0;

    VAR_46 = (long)FUNC_36(((void*)0)) + VAR_39;

    FUNC_32("starting\n");
    VAR_45 = 0;
    FUNC_37(VAR_7);

    for (;;) {
        if (VAR_46 < (long)FUNC_36(((void*)0)))
            break;

        if ((FUNC_22(VAR_22, VAR_31, VAR_23)) == ((void*)0))
            goto end;

        if (VAR_30 != ((void*)0)) {
            VAR_51 = FUNC_2(VAR_21, sizeof(VAR_21), VAR_14,
                                   VAR_30);
            if (VAR_51 <= 0 || FUNC_19(VAR_22, VAR_21, VAR_51) <= 0)
                goto end;
            while ((VAR_43 = FUNC_15(VAR_22, VAR_21, sizeof(VAR_21))) > 0)
                VAR_45 += VAR_43;
        }
        FUNC_17(VAR_22, VAR_6 | VAR_5);
        FUNC_0(FUNC_14(VAR_22));

        VAR_40 += 1;
        if (FUNC_16(VAR_22)) {
            VAR_50 = 'r';
        } else {
            VAR_50 = FUNC_18(VAR_22);
            if (VAR_50 == VAR_12)
                VAR_50 = 't';
            else if (VAR_50 == VAR_1)
                VAR_50 = '3';
            else
                VAR_50 = '*';
        }
        FUNC_24(VAR_50, VAR_17);
        FUNC_23(VAR_17);
    }
    VAR_35 += FUNC_37(VAR_8);

    FUNC_32
        ("\n\n%d connections in %.2fs; %.2f connections/user sec, bytes read %ld\n",
         VAR_40, VAR_35, ((double)VAR_40 / VAR_35), VAR_45);
    FUNC_32
        ("%d connections in %ld real seconds, %ld bytes read per connection\n",
         VAR_40, (long)FUNC_36(((void*)0)) - VAR_46 + VAR_39, VAR_45 / VAR_40);

    VAR_42 = 0;

 end:
    FUNC_13(VAR_22);
    FUNC_4(VAR_23);
    return VAR_42;
}
