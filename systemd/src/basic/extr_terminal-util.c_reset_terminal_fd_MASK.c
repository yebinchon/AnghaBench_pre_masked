
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct termios {int c_iflag; int c_lflag; int* c_cc; int c_cflag; int c_oflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
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
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 size_t VAR_25 ;
 size_t VAR_26 ;
 size_t VAR_27 ;
 size_t VAR_28 ;
 size_t VAR_29 ;
 size_t VAR_30 ;
 size_t VAR_31 ;
 size_t VAR_32 ;
 size_t VAR_33 ;
 size_t VAR_34 ;
 size_t VAR_35 ;
 size_t VAR_36 ;
 size_t VAR_37 ;
 size_t VAR_38 ;
 size_t VAR_39 ;
 int FUNC_0 (int) ;
 int VAR_40 ;
 int FUNC_1 (int,int ,...) ;
 int FUNC_2 (int,int ) ;
 scalar_t__ FUNC_3 (int,struct termios*) ;
 scalar_t__ FUNC_4 (int,int ,struct termios*) ;
 int FUNC_5 (int) ;

int FUNC_6(int VAR_41, bool VAR_42) {
        struct termios VAR_43;
        int VAR_44 = 0;



        FUNC_0(VAR_41 >= 0);






        (void) FUNC_1(VAR_41, VAR_24);


        if (VAR_42)
                (void) FUNC_1(VAR_41, VAR_19, VAR_20);


        (void) FUNC_5(VAR_41);

        if (FUNC_3(VAR_41, &VAR_43) < 0) {
                VAR_44 = -VAR_40;
                goto finish;
        }





        VAR_43.c_iflag &= ~(VAR_11 | VAR_0 | VAR_16 | VAR_14 | VAR_12 | VAR_17);
        VAR_43.c_iflag |= VAR_9 | VAR_13 | VAR_18;
        VAR_43.c_oflag |= VAR_21;
        VAR_43.c_cflag |= VAR_1;
        VAR_43.c_lflag = VAR_15 | VAR_8 | VAR_10 | VAR_2 | VAR_4 | VAR_5 | VAR_3 | VAR_7 | VAR_6;

        VAR_43.c_cc[VAR_29] = 03;
        VAR_43.c_cc[VAR_33] = 034;
        VAR_43.c_cc[VAR_28] = 0177;
        VAR_43.c_cc[VAR_30] = 025;
        VAR_43.c_cc[VAR_25] = 04;
        VAR_43.c_cc[VAR_35] = 021;
        VAR_43.c_cc[VAR_36] = 023;
        VAR_43.c_cc[VAR_37] = 032;
        VAR_43.c_cc[VAR_31] = 026;
        VAR_43.c_cc[VAR_39] = 027;
        VAR_43.c_cc[VAR_34] = 022;
        VAR_43.c_cc[VAR_26] = 0;
        VAR_43.c_cc[VAR_27] = 0;

        VAR_43.c_cc[VAR_38] = 0;
        VAR_43.c_cc[VAR_32] = 1;

        if (FUNC_4(VAR_41, VAR_23, &VAR_43) < 0)
                VAR_44 = -VAR_40;

finish:

        (void) FUNC_2(VAR_41, VAR_22);

        return VAR_44;
}
