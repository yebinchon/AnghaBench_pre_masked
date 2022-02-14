
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {int sa_mask; int sa_handler; } ;
typedef int sigset_t ;
typedef int common_act ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int VAR_26 ;
 int VAR_27 ;
 char* FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (unsigned int*,int) ;
 int FUNC_10 (struct sigaction*,int ,int) ;
 int FUNC_11 (int ,struct sigaction*,struct sigaction*) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ,int *,int *) ;
 scalar_t__ FUNC_15 (int ,int) ;
 char* FUNC_16 (char*,char) ;
 int FUNC_17 (char*,int *,int ) ;
 int FUNC_18 (int) ;

void FUNC_19(void)
{
    char *VAR_28;
    struct sigaction VAR_29, VAR_30, VAR_31;
    sigset_t VAR_32, VAR_33;
    static int VAR_34 = 0;

    if (VAR_34)
        return;
    VAR_34 = 1;

    if ((VAR_28 = FUNC_8("OPENSSL_sparcv9cap"))) {
        VAR_5[0] = FUNC_17(VAR_28, ((void*)0), 0);
        if ((VAR_28 = FUNC_16(VAR_28, ':')))
            VAR_5[1] = FUNC_17(VAR_28 + 1, ((void*)0), 0);
        return;
    }
    VAR_5[0] = VAR_20 | VAR_21;

    FUNC_13(&VAR_32);
    FUNC_12(&VAR_32, VAR_9);
    FUNC_12(&VAR_32, VAR_11);



    FUNC_12(&VAR_32, VAR_8);
    FUNC_12(&VAR_32, VAR_6);
    FUNC_12(&VAR_32, VAR_10);
    FUNC_14(VAR_12, &VAR_32, &VAR_33);

    FUNC_10(&VAR_29, 0, sizeof(VAR_29));
    VAR_29.sa_handler = VAR_26;
    VAR_29.sa_mask = VAR_32;

    FUNC_11(VAR_9, &VAR_29, &VAR_30);
    FUNC_11(VAR_6, &VAR_29, &VAR_31);


    if (FUNC_15(VAR_27, 1) == 0) {
        FUNC_3();
        VAR_5[0] &= ~VAR_21;
    }

    if (FUNC_15(VAR_27, 1) == 0) {
        FUNC_5();
        VAR_5[0] |= VAR_22 | VAR_14;

        if (FUNC_4() >= 12)
            VAR_5[0] &= ~(VAR_22 | VAR_20);
        else {
            FUNC_6();
            VAR_5[0] |= VAR_23;
        }
    }

    if (FUNC_15(VAR_27, 1) == 0) {
        FUNC_1();
        VAR_5[0] |= VAR_18;
    }





    if (FUNC_15(VAR_27, 1) == 0) {
        FUNC_7();
        VAR_5[0] |= VAR_24;
    }

    if (FUNC_15(VAR_27, 1) == 0) {
        FUNC_0();
        VAR_5[0] |= VAR_15;
    }







    if ((VAR_5[0] & VAR_24) &&
        FUNC_15(VAR_27, 1) == 0) {
        VAR_5[1] = (unsigned int)FUNC_2();
    }

    FUNC_11(VAR_6, &VAR_31, ((void*)0));
    FUNC_11(VAR_9, &VAR_30, ((void*)0));

    FUNC_14(VAR_12, &VAR_33, ((void*)0));

    if (sizeof(size_t) == 8)
        VAR_5[0] |= VAR_13;

    else {
        int VAR_35 = FUNC_18(340);

        if (VAR_35 >= 0 && VAR_35 & 1)
            VAR_5[0] |= VAR_13;
    }

}
