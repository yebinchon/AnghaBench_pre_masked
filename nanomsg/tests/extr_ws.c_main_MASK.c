
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int opt ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char const**) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (int,char*) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (int,int ,int ,int*,size_t*) ;
 int FUNC_7 (int,int ,int ,int*,int) ;
 int FUNC_8 (int) ;
 char* VAR_13 ;
 int FUNC_9 (char*,char*,char*,int ) ;
 int FUNC_10 (int,char*) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int,char*) ;
 int FUNC_13 (int,int ) ;
 int FUNC_14 (int,char*) ;
 int FUNC_15 (int,char*) ;
 int FUNC_16 (int,int ,int ,int*,int) ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 () ;

int FUNC_19 (int VAR_14, const char *VAR_15[])
{
    int VAR_16;
    int VAR_17;
    int VAR_18;
    int VAR_19;
    int VAR_20;
    size_t VAR_21;
    int VAR_22;
    char VAR_23[128];

    FUNC_9 (VAR_13, "ws", "127.0.0.1",
            FUNC_1 (VAR_14, VAR_15));

    FUNC_9 (VAR_23, "ws", "*",
            FUNC_1 (VAR_14, VAR_15));


    VAR_17 = FUNC_17 (VAR_0, VAR_5);
    FUNC_10 (VAR_17, VAR_23);
    FUNC_11 (VAR_17);



    VAR_18 = FUNC_17 (VAR_0, VAR_5);
    FUNC_12 (VAR_18, VAR_13);
    FUNC_11 (VAR_18);


    VAR_18 = FUNC_17 (VAR_0, VAR_5);


    VAR_21 = sizeof (VAR_20);
    VAR_16 = FUNC_6 (VAR_18, VAR_10, VAR_11, &VAR_20, &VAR_21);
    FUNC_0 (VAR_16 == 0);
    FUNC_2 (VAR_21 == sizeof (VAR_20));
    FUNC_2 (VAR_20 == VAR_12);


    VAR_16 = FUNC_4 (VAR_18, "ws://127.0.0.1");
    FUNC_0 (VAR_16 >= 0);


    VAR_16 = FUNC_4 (VAR_18, "ws://*:");
    FUNC_2 (VAR_16 < 0);
    FUNC_0 (FUNC_5 () == VAR_2);
    VAR_16 = FUNC_4 (VAR_18, "ws://*:1000000");
    FUNC_2 (VAR_16 < 0);
    FUNC_0 (FUNC_5 () == VAR_2);
    VAR_16 = FUNC_4 (VAR_18, "ws://*:some_port");
    FUNC_2 (VAR_16 < 0);
    VAR_16 = FUNC_4 (VAR_18, "ws://eth10000;127.0.0.1:5555");
    FUNC_2 (VAR_16 < 0);
    FUNC_0 (FUNC_5 () == VAR_3);

    VAR_16 = FUNC_3 (VAR_18, "ws://127.0.0.1:");
    FUNC_2 (VAR_16 < 0);
    FUNC_0 (FUNC_5 () == VAR_2);
    VAR_16 = FUNC_3 (VAR_18, "ws://127.0.0.1:1000000");
    FUNC_2 (VAR_16 < 0);
    FUNC_0 (FUNC_5 () == VAR_2);
    VAR_16 = FUNC_3 (VAR_18, "ws://eth10000:5555");
    FUNC_2 (VAR_16 < 0);
    FUNC_0 (FUNC_5 () == VAR_3);

    VAR_16 = FUNC_4 (VAR_18, "ws://:5555");
    FUNC_2 (VAR_16 < 0);
    FUNC_0 (FUNC_5 () == VAR_2);
    VAR_16 = FUNC_4 (VAR_18, "ws://-hostname:5555");
    FUNC_2 (VAR_16 < 0);
    FUNC_0 (FUNC_5 () == VAR_2);
    VAR_16 = FUNC_4 (VAR_18, "ws://abc.123.---.#:5555");
    FUNC_2 (VAR_16 < 0);
    FUNC_0 (FUNC_5 () == VAR_2);
    VAR_16 = FUNC_4 (VAR_18, "ws://[::1]:5555");
    FUNC_2 (VAR_16 < 0);
    FUNC_0 (FUNC_5 () == VAR_2);
    VAR_16 = FUNC_4 (VAR_18, "ws://abc...123:5555");
    FUNC_2 (VAR_16 < 0);
    FUNC_0 (FUNC_5 () == VAR_2);
    VAR_16 = FUNC_4 (VAR_18, "ws://.123:5555");
    FUNC_2 (VAR_16 < 0);
    FUNC_0 (FUNC_5 () == VAR_2);

    FUNC_11 (VAR_18);

    VAR_17 = FUNC_17 (VAR_0, VAR_5);
    FUNC_10 (VAR_17, VAR_13);
    VAR_18 = FUNC_17 (VAR_0, VAR_5);
    FUNC_12 (VAR_18, VAR_13);


    for (VAR_22 = 0; VAR_22 != 100; ++VAR_22) {

        FUNC_15 (VAR_18, "ABC");
        FUNC_14 (VAR_17, "ABC");

        FUNC_15 (VAR_17, "DEF");
        FUNC_14 (VAR_18, "DEF");
    }


    for (VAR_22 = 0; VAR_22 != 100; ++VAR_22) {
        FUNC_15 (VAR_18, "0123456789012345678901234567890123456789");
    }
    for (VAR_22 = 0; VAR_22 != 100; ++VAR_22) {
        FUNC_14 (VAR_17, "0123456789012345678901234567890123456789");
    }

    FUNC_11 (VAR_18);
    FUNC_11 (VAR_17);


    VAR_17 = FUNC_17 (VAR_0, VAR_5);
    FUNC_10 (VAR_17, VAR_13);
    VAR_19 = FUNC_17 (VAR_0, VAR_5);

    VAR_16 = FUNC_3 (VAR_19, VAR_13);
    FUNC_2 (VAR_16 < 0);
    FUNC_0 (FUNC_5 () == VAR_1);
    FUNC_11(VAR_17);
    FUNC_11(VAR_19);


    VAR_17 = FUNC_17 (VAR_0, VAR_5);
    VAR_20 = -1;
    VAR_16 = FUNC_7 (VAR_17, VAR_9, VAR_6, &VAR_20, sizeof (VAR_20));
    FUNC_2 (VAR_16 >= 0);
    VAR_20 = -2;
    VAR_16 = FUNC_7 (VAR_17, VAR_9, VAR_6, &VAR_20, sizeof (VAR_20));
    FUNC_2 (VAR_16 < 0);
    FUNC_0 (FUNC_5 () == VAR_2);
    FUNC_11 (VAR_17);


    VAR_17 = FUNC_17 (VAR_0, VAR_5);
    FUNC_10 (VAR_17, VAR_13);
    VAR_18 = FUNC_17 (VAR_0, VAR_5);
    FUNC_12 (VAR_18, VAR_13);
    VAR_20 = 1000;
    FUNC_16 (VAR_18, VAR_9, VAR_8, &VAR_20, sizeof (VAR_20));
    FUNC_2 (VAR_20 == 1000);
    VAR_20 = 1000;
    FUNC_16 (VAR_17, VAR_9, VAR_7, &VAR_20, sizeof (VAR_20));
    FUNC_2 (VAR_20 == 1000);
    VAR_20 = 4;
    FUNC_16 (VAR_17, VAR_9, VAR_6, &VAR_20, sizeof (VAR_20));
    FUNC_15 (VAR_18, "ABC");
    FUNC_14 (VAR_17, "ABC");
    FUNC_15 (VAR_18, "ABCD");
    FUNC_14 (VAR_17, "ABCD");
    FUNC_15 (VAR_18, "ABCDE");
    FUNC_13 (VAR_17, VAR_4);




    VAR_20 = 5;
    FUNC_16 (VAR_17, VAR_9, VAR_6, &VAR_20, sizeof (VAR_20));
    FUNC_12 (VAR_18, VAR_13);
    FUNC_15 (VAR_18, "ABCDE");
    FUNC_14 (VAR_17, "ABCDE");
    FUNC_11 (VAR_17);
    FUNC_11 (VAR_18);

    FUNC_18 ();


    VAR_18 = FUNC_17 (VAR_0, VAR_5);
    FUNC_12 (VAR_18, VAR_13);
    FUNC_8 (100);
    FUNC_11 (VAR_18);

    return 0;
}
