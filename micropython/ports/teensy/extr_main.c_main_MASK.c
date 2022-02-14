
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vstr_t ;
typedef int mp_obj_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
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
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,void*) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 () ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 char* FUNC_10 (scalar_t__) ;
 int FUNC_11 () ;
 int FUNC_12 (int) ;
 int FUNC_13 (int ,int ,int ) ;
 int FUNC_14 (int ,int ) ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 () ;
 int FUNC_17 (char*) ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 scalar_t__ VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int FUNC_18 (char*) ;
 scalar_t__ FUNC_19 () ;
 int FUNC_20 (char*) ;
 scalar_t__ VAR_42 ;
 scalar_t__ FUNC_21 () ;
 int FUNC_22 () ;
 int FUNC_23 (int *,char*) ;
 int FUNC_24 (int *) ;
 int * FUNC_25 (int) ;
 char* FUNC_26 (int *) ;

int FUNC_27(void) {




    VAR_22 |= (1 << 9);

    FUNC_11();
    FUNC_12(10240);

    FUNC_15(VAR_1, VAR_19);
    FUNC_3();



soft_reset:

    FUNC_4(VAR_20, 1);


    FUNC_2(&VAR_24, (void*)VAR_0);


    FUNC_5();
    FUNC_8(VAR_26, 0);
    FUNC_7(VAR_26, FUNC_0(VAR_3));
    FUNC_8(VAR_25, 0);

    FUNC_22();

    FUNC_16();
    if (!FUNC_18("/boot.py")) {
        FUNC_1(4);
    }



    FUNC_4(VAR_20, 0);





    {
        vstr_t *VAR_43 = FUNC_25(16);
        FUNC_23(VAR_43, "/");
        if (VAR_32 == VAR_2) {
            FUNC_23(VAR_43, "main.py");
        } else {
            FUNC_23(VAR_43, FUNC_10(VAR_32));
        }
        if (!FUNC_18(FUNC_26(VAR_43))) {
            FUNC_1(3);
        }
        FUNC_24(VAR_43);
    }




    for (;;) {
        if (VAR_42 == VAR_21) {
            if (FUNC_21() != 0) {
                break;
            }
        } else {
            if (FUNC_19() != 0) {
                break;
            }
        }
    }

    FUNC_17("MPY: soft reboot\n");


    goto soft_reset;
}
