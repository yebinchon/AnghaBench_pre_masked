
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uchar ;
typedef scalar_t__ schar ;


 int FUNC_0 (int,int ,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 () ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 int FUNC_4 () ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;

void FUNC_5(void) {
    schar VAR_11;
    uchar VAR_12;

    VAR_11 = VAR_9 - 3;
    if (VAR_11 >= 0) {






        FUNC_3(VAR_8 + VAR_2 + 1 - VAR_5, VAR_11);




        VAR_9 = 0;

    }
    if (VAR_10 & 0x10) {
        if (VAR_6 != VAR_3) {
            FUNC_1();
        }
    }
    for (VAR_12 = 20; VAR_12 > 0; VAR_12--) {
        uchar VAR_13 = VAR_0 & VAR_1;
        if (VAR_13 != 0)
            goto isNotReset;
    }

    VAR_7 = 0;
    VAR_4 = 0;
    FUNC_4();
    FUNC_0(0xff, 0, 0);
isNotReset:
    FUNC_2(VAR_12);
}
