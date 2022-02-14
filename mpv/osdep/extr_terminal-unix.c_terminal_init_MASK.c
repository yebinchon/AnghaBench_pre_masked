
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (int) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (char*,int) ;
 int FUNC_3 (int ,int ,int ,int) ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;

void FUNC_4(void)
{
    FUNC_0(!VAR_11);
    VAR_11 = 1;

    VAR_13 = VAR_14 = FUNC_2("/dev/tty", VAR_1 | VAR_0);
    if (VAR_13 < 0) {
        VAR_13 = VAR_8;
        VAR_14 = VAR_9;
    }


    FUNC_3(VAR_3, VAR_10, 0, 1);
    FUNC_3(VAR_4, VAR_12, VAR_2, 0);
    FUNC_3(VAR_5, VAR_7, 0, 1);
    FUNC_3(VAR_6, VAR_7, 0, 1);

    FUNC_1();
}
