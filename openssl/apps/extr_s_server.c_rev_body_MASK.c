
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int info; } ;
struct TYPE_3__ {TYPE_2__* user; int login; int vb; } ;
typedef int SSL ;
typedef int BIO ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *,char*,scalar_t__) ;
 int * FUNC_8 (int ) ;
 int * FUNC_9 (int,int ) ;
 int FUNC_10 (scalar_t__,char*,...) ;
 int * FUNC_11 (int *,int *) ;
 int FUNC_12 (scalar_t__,char*) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,char*) ;
 int FUNC_15 (int *,int *,int ) ;
 int FUNC_16 (int *,scalar_t__) ;
 scalar_t__ FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *,char*,int) ;
 int FUNC_20 (unsigned char*,int *,int) ;
 int FUNC_21 (scalar_t__) ;
 int FUNC_22 (char*) ;
 void* FUNC_23 (int ,int ) ;
 int FUNC_24 (TYPE_2__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_25 (int *) ;
 int FUNC_26 (int *) ;
 int * FUNC_27 (int ) ;
 int FUNC_28 (int *) ;
 int FUNC_29 (int *,int *,int *) ;
 int FUNC_30 (int *,int ) ;
 int FUNC_31 (int *,scalar_t__) ;
 int FUNC_32 (int *,unsigned char*,int ) ;
 int FUNC_33 (int *,int) ;
 int FUNC_34 (int *,scalar_t__) ;
 int FUNC_35 (int *,int ) ;
 int VAR_5 ;
 char* FUNC_36 (scalar_t__,char*) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_37 (int *) ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_38 (int) ;
 TYPE_1__ VAR_18 ;
 int FUNC_39 (char*) ;
 scalar_t__ FUNC_40 (char*,char*,int) ;
 int VAR_19 ;

__attribute__((used)) static int FUNC_41(int VAR_20, int VAR_21, int VAR_22, unsigned char *VAR_23)
{
    char *VAR_24 = ((void*)0);
    int VAR_25;
    int VAR_26 = 1;
    SSL *VAR_27;
    BIO *VAR_28, *VAR_29, *VAR_30;

    VAR_24 = FUNC_36(VAR_10, "server rev buffer");
    VAR_28 = FUNC_8(FUNC_1());
    VAR_29 = FUNC_8(FUNC_3());
    if ((VAR_28 == ((void*)0)) || (VAR_29 == ((void*)0)))
        goto err;


    if (!FUNC_16(VAR_28, VAR_10))
        goto err;

    if ((VAR_27 = FUNC_27(VAR_11)) == ((void*)0))
        goto err;

    if (VAR_17) {
        FUNC_35(VAR_27, VAR_19);
        FUNC_34(VAR_27, VAR_9);
    }
    if (VAR_23 != ((void*)0)
        && !FUNC_32(VAR_27, VAR_23,
                                       FUNC_39((char *)VAR_23))) {
        FUNC_25(VAR_27);
        FUNC_21(VAR_7);
        goto err;
    }

    VAR_30 = FUNC_9(VAR_20, VAR_1);
    FUNC_29(VAR_27, VAR_30, VAR_30);
    FUNC_28(VAR_27);


    FUNC_15(VAR_29, VAR_27, VAR_0);
    FUNC_11(VAR_28, VAR_29);




    if (VAR_13) {
        FUNC_13(FUNC_26(VAR_27), VAR_6);
        FUNC_14(FUNC_26(VAR_27), (char *)VAR_9);
    }
    if (VAR_15) {

        if (VAR_15 == 2)
            FUNC_30(VAR_27, VAR_5);
        else

            FUNC_30(VAR_27, VAR_12);
        FUNC_31(VAR_27, VAR_8 ? VAR_8 : VAR_9);
    }

    for (;;) {
        VAR_25 = FUNC_0(VAR_28);
        if (VAR_25 > 0)
            break;
        if (!FUNC_18(VAR_28)) {
            FUNC_12(VAR_7, "CONNECTION FAILURE\n");
            FUNC_21(VAR_7);
            goto end;
        }

        if (FUNC_17(VAR_28)
            && FUNC_6(VAR_28) == VAR_2) {
            FUNC_10(VAR_9, "LOOKUP renego during accept\n");
            FUNC_24(VAR_18.user);
            VAR_18.user =
                FUNC_23(VAR_18.vb,
                                       VAR_18.login);
            if (VAR_18.user)
                FUNC_10(VAR_9, "LOOKUP done %s\n",
                           VAR_18.user->info);
            else
                FUNC_10(VAR_9, "LOOKUP not successful\n");
            continue;
        }

    }
    FUNC_10(VAR_7, "CONNECTION ESTABLISHED\n");
    FUNC_37(VAR_27);

    for (;;) {
        VAR_25 = FUNC_7(VAR_28, VAR_24, VAR_10 - 1);
        if (VAR_25 < 0) {
            if (!FUNC_18(VAR_28)) {
                if (!VAR_16)
                    FUNC_21(VAR_7);
                goto err;
            } else {
                FUNC_10(VAR_9, "read R BLOCK\n");

                if (FUNC_17(VAR_28)
                    && FUNC_6(VAR_28) == VAR_2) {
                    FUNC_10(VAR_9, "LOOKUP renego during read\n");
                    FUNC_24(VAR_18.user);
                    VAR_18.user =
                        FUNC_23(VAR_18.vb,
                                               VAR_18.login);
                    if (VAR_18.user)
                        FUNC_10(VAR_9, "LOOKUP done %s\n",
                                   VAR_18.user->info);
                    else
                        FUNC_10(VAR_9, "LOOKUP not successful\n");
                    continue;
                }


                FUNC_38(1);

                continue;
            }
        } else if (VAR_25 == 0) {
            VAR_26 = 1;
            FUNC_10(VAR_7, "CONNECTION CLOSED\n");
            goto end;
        } else {
            char *VAR_31 = VAR_24 + VAR_25 - 1;
            while (VAR_25 && (*VAR_31 == '\n' || *VAR_31 == '\r')) {
                VAR_31--;
                VAR_25--;
            }
            if (!VAR_14 && (VAR_25 == 5) && (FUNC_40(VAR_24, "CLOSE", 5) == 0)) {
                VAR_26 = 1;
                FUNC_10(VAR_7, "CONNECTION CLOSED\n");
                goto end;
            }
            FUNC_20((unsigned char *)VAR_24, ((void*)0), VAR_25);
            VAR_24[VAR_25] = '\n';
            FUNC_19(VAR_28, VAR_24, VAR_25 + 1);
            for (;;) {
                VAR_25 = FUNC_4(VAR_28);
                if (VAR_25 > 0)
                    break;
                if (!FUNC_18(VAR_28))
                    goto end;
            }
        }
    }
 end:

    FUNC_33(VAR_27, VAR_4 | VAR_3);

 err:

    FUNC_22(VAR_24);
    FUNC_5(VAR_28);
    return VAR_26;
}
