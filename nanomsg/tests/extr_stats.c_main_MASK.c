
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
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int,char const**) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,char*,char*,int ) ;
 int FUNC_5 (int,char*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int,char*) ;
 int FUNC_8 (int,char*) ;
 int FUNC_9 (int,char*) ;
 int FUNC_10 (int ,int ) ;

int FUNC_11 (int VAR_10, const char *VAR_11[])
{
    int VAR_12;
    int VAR_13;
    char VAR_14[128];

    FUNC_4(VAR_14, "tcp", "127.0.0.1",
            FUNC_0(VAR_10, VAR_11));


    VAR_12 = FUNC_10 (VAR_0, VAR_1);
    FUNC_5 (VAR_12, VAR_14);
    FUNC_3 (100);

    VAR_13 = FUNC_10 (VAR_0, VAR_2);
    FUNC_7 (VAR_13, VAR_14);
    FUNC_3 (200);

    FUNC_1 (FUNC_2(VAR_12, VAR_3) == 1);
    FUNC_1 (FUNC_2(VAR_12, VAR_7) == 0);
    FUNC_1 (FUNC_2(VAR_12, VAR_6) == 1);
    FUNC_1 (FUNC_2(VAR_12, VAR_9) == 0);
    FUNC_1 (FUNC_2(VAR_12, VAR_8) == 0);

    FUNC_1 (FUNC_2(VAR_13, VAR_3) == 0);
    FUNC_1 (FUNC_2(VAR_13, VAR_7) == 1);
    FUNC_1 (FUNC_2(VAR_13, VAR_6) == 1);
    FUNC_1 (FUNC_2(VAR_13, VAR_9) == 0);
    FUNC_1 (FUNC_2(VAR_13, VAR_8) == 0);

    FUNC_9 (VAR_13, "ABC");
    FUNC_3 (100);

    FUNC_1 (FUNC_2(VAR_13, VAR_9) == 1);
    FUNC_1 (FUNC_2(VAR_13, VAR_5) == 3);
    FUNC_1 (FUNC_2(VAR_13, VAR_8) == 0);
    FUNC_1 (FUNC_2(VAR_13, VAR_4) == 0);

    FUNC_8(VAR_12, "ABC");

    FUNC_1 (FUNC_2(VAR_12, VAR_9) == 0);
    FUNC_1 (FUNC_2(VAR_12, VAR_5) == 0);
    FUNC_1 (FUNC_2(VAR_12, VAR_8) == 1);
    FUNC_1 (FUNC_2(VAR_12, VAR_4) == 3);

    FUNC_9 (VAR_12, "OK");
    FUNC_8 (VAR_13, "OK");

    FUNC_1 (FUNC_2(VAR_13, VAR_9) == 1);
    FUNC_1 (FUNC_2(VAR_13, VAR_5) == 3);
    FUNC_1 (FUNC_2(VAR_13, VAR_8) == 1);
    FUNC_1 (FUNC_2(VAR_13, VAR_4) == 2);

    FUNC_1 (FUNC_2(VAR_12, VAR_9) == 1);
    FUNC_1 (FUNC_2(VAR_12, VAR_5) == 2);
    FUNC_1 (FUNC_2(VAR_12, VAR_8) == 1);
    FUNC_1 (FUNC_2(VAR_12, VAR_4) == 3);

    FUNC_6 (VAR_13);

    FUNC_3 (100);

    FUNC_1 (FUNC_2(VAR_12, VAR_3) == 1);
    FUNC_1 (FUNC_2(VAR_12, VAR_7) == 0);
    FUNC_1 (FUNC_2(VAR_12, VAR_6) == 0);

    FUNC_6 (VAR_12);

    return 0;
}
