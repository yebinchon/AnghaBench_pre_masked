
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sndprio ;
typedef int rcvprio ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int,char*,int,int ) ;
 int FUNC_4 (int,int ,int ,int*,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int,int ) ;
 int FUNC_9 (int,char*) ;
 int FUNC_10 (int,char*) ;
 int FUNC_11 (int ,int ) ;

int FUNC_12 ()
{
    int VAR_10;
    int VAR_11;
    int VAR_12;
    int VAR_13;
    int VAR_14;
    int VAR_15;
    int VAR_16;



    VAR_13 = FUNC_11 (VAR_0, VAR_3);
    FUNC_6 (VAR_13, VAR_8);
    VAR_14 = FUNC_11 (VAR_0, VAR_3);
    FUNC_6 (VAR_14, VAR_9);
    VAR_11 = FUNC_11 (VAR_0, VAR_4);
    VAR_15 = 1;
    VAR_10 = FUNC_4 (VAR_11, VAR_7, VAR_6,
        &VAR_15, sizeof (VAR_15));
    FUNC_0 (VAR_10 == 0);
    FUNC_8 (VAR_11, VAR_8);
    VAR_15 = 2;
    VAR_10 = FUNC_4 (VAR_11, VAR_7, VAR_6,
        &VAR_15, sizeof (VAR_15));
    FUNC_0 (VAR_10 == 0);
    FUNC_8 (VAR_11, VAR_9);

    FUNC_10 (VAR_11, "ABC");
    FUNC_10 (VAR_11, "DEF");
    FUNC_9 (VAR_13, "ABC");
    FUNC_9 (VAR_13, "DEF");

    FUNC_7 (VAR_13);
    FUNC_7 (VAR_11);
    FUNC_7 (VAR_14);



    VAR_11 = FUNC_11 (VAR_0, VAR_4);
    FUNC_6 (VAR_11, VAR_8);
    VAR_12 = FUNC_11 (VAR_0, VAR_4);
    FUNC_6 (VAR_12, VAR_9);
    VAR_13 = FUNC_11 (VAR_0, VAR_3);
    VAR_16 = 2;
    VAR_10 = FUNC_4 (VAR_13, VAR_7, VAR_5,
        &VAR_16, sizeof (VAR_16));
    FUNC_0 (VAR_10 == 0);
    FUNC_8 (VAR_13, VAR_8);
    VAR_16 = 1;
    VAR_10 = FUNC_4 (VAR_13, VAR_7, VAR_5,
        &VAR_16, sizeof (VAR_16));
    FUNC_0 (VAR_10 == 0);
    FUNC_8 (VAR_13, VAR_9);

    FUNC_10 (VAR_11, "ABC");
    FUNC_10 (VAR_12, "DEF");
    FUNC_5 (100);
    FUNC_9 (VAR_13, "DEF");
    FUNC_9 (VAR_13, "ABC");

    FUNC_7 (VAR_13);
    FUNC_7 (VAR_12);
    FUNC_7 (VAR_11);



    VAR_11 = FUNC_11 (VAR_0, VAR_4);
    FUNC_6 (VAR_11, VAR_8);
    VAR_13 = FUNC_11 (VAR_0, VAR_3);
    FUNC_8 (VAR_13, VAR_8);

    FUNC_10 (VAR_11, "ABC");
    FUNC_9 (VAR_13, "ABC");
    FUNC_7 (VAR_13);

    VAR_10 = FUNC_3 (VAR_11, "ABC", 3, VAR_2);
    FUNC_1 (VAR_10 == -1 && FUNC_2() == VAR_1);

    VAR_13 = FUNC_11 (VAR_0, VAR_3);
    FUNC_8 (VAR_13, VAR_8);

    FUNC_10 (VAR_11, "ABC");
    FUNC_9 (VAR_13, "ABC");
    FUNC_7 (VAR_13);
    FUNC_7 (VAR_11);

    return 0;
}
