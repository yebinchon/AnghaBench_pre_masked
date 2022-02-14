
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char const*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,char*,char const*) ;
 int FUNC_4 (char*,char const*) ;
 int FUNC_5 (int) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (int,int ) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_11 () ;
 int FUNC_12 (char const*,int,int) ;
 int FUNC_13 (char*) ;
 char const* VAR_5 ;
 int FUNC_14 () ;
 scalar_t__ FUNC_15 () ;
 int FUNC_16 (char*,char*,int) ;
 int FUNC_17 (char*) ;
 int FUNC_18 (int) ;
 scalar_t__ FUNC_19 (int,char*,int ) ;

int FUNC_20(int VAR_6, const char *VAR_7)
{
    if(!VAR_6) {
        int VAR_8 = FUNC_6();
        if(VAR_8 == -1) {
            FUNC_13("cannot fork");
            FUNC_5(1);
        }
        if(VAR_8 != 0) {
            FUNC_5(0);
        }


        if (FUNC_15() < 0) {
            FUNC_13("Cannot become session leader.");
            FUNC_5(2);
        }


        VAR_8 = FUNC_6();
        if(VAR_8 == -1) {
            FUNC_13("cannot fork");
            FUNC_5(1);
        }
        if(VAR_8 != 0) {
            FUNC_5(0);
        }
    }


    int VAR_9 = -1;
    if(VAR_5[0]) {
        VAR_9 = FUNC_12(VAR_5, VAR_2 | VAR_1, 0644);
        if(VAR_9 >= 0) {
            if(FUNC_7(VAR_9, 0) != 0)
                FUNC_4("Cannot truncate pidfile '%s'.", VAR_5);

            char VAR_10[100];
            FUNC_16(VAR_10, "%d\n", FUNC_9());
            ssize_t VAR_11 = FUNC_19(VAR_9, VAR_10, FUNC_17(VAR_10));
            if(VAR_11 <= 0)
                FUNC_4("Cannot write pidfile '%s'.", VAR_5);
        }
        else FUNC_4("Failed to open pidfile '%s'.", VAR_5);
    }


    FUNC_18(0007);


    FUNC_11();


    FUNC_14();

    if(VAR_7 && *VAR_7) {
        if(FUNC_0(VAR_7, VAR_9) != 0) {
            FUNC_4("Cannot become user '%s'. Continuing as we are.", VAR_7);
        }
        else FUNC_3(VAR_0, "Successfully became user '%s'.", VAR_7);
    }
    else {
        FUNC_2(VAR_3, FUNC_10(), FUNC_8());
        FUNC_2(VAR_4, FUNC_10(), FUNC_8());
    }

    if(VAR_9 != -1)
        FUNC_1(VAR_9);

    return(0);
}
