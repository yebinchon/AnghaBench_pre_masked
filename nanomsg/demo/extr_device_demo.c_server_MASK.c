
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int username ;
typedef int time_t ;
struct tm {int tm_hour; } ;
typedef int greeting ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,char*) ;
 scalar_t__ FUNC_1 () ;
 struct tm* FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int,char const*) ;
 int FUNC_5 () ;
 int FUNC_6 (int,char*,int,int ) ;
 int FUNC_7 (int,char*,int,int ) ;
 int FUNC_8 (int ,int ) ;
 char* FUNC_9 (int ) ;
 int FUNC_10 (char*,char*,char*,char*,int) ;
 int VAR_2 ;
 int FUNC_11 (char*) ;
 int FUNC_12 (int *) ;

int FUNC_13(const char *VAR_3)
{
    int VAR_4;


    VAR_4 = FUNC_8 (VAR_0, VAR_1);
    if (VAR_4 < 0) {
        FUNC_0 (VAR_2, "nn_socket: %s\n", FUNC_9 (FUNC_5 ()));
        return (-1);
    }





    if (FUNC_4 (VAR_4, VAR_3) < 0) {
        FUNC_0 (VAR_2, "nn_connect: %s\n", FUNC_9 (FUNC_5 ()));
        FUNC_3 (VAR_4);
        return (-1);
    }







    for (;;) {
        char VAR_5[128];
        char VAR_6[128];
        time_t VAR_7;
        struct tm *VAR_8;
        char *VAR_9;
        int VAR_10;
        char *VAR_11;

        VAR_10 = FUNC_6 (VAR_4, VAR_5, sizeof (VAR_5), 0);
        if (VAR_10 < 0) {

            FUNC_0 (VAR_2, "nn_recv: %s\n", FUNC_9 (FUNC_5 ()));
            break;
        }

        VAR_7 = FUNC_12 (((void*)0));
        VAR_8 = FUNC_2 (&VAR_7);
        if (VAR_8->tm_hour < 12) {
            VAR_9 = "morning";

        } else if (VAR_8->tm_hour < 17) {
            VAR_9 = "afternoon";

        } else if (VAR_8->tm_hour < 20) {
            VAR_9 = "evening";

        } else {
            VAR_9 = "night";
        }


        if (VAR_10 < sizeof (VAR_5)) {
            VAR_5[VAR_10] = '\0';
        } else {
            VAR_5[sizeof (VAR_5) - 1] = '\0';
        }

        VAR_11 = "Good %s, %s (from %d).";


        if ((FUNC_11 (VAR_5) + FUNC_11 (VAR_9) + FUNC_11 (VAR_11)) >=
            sizeof (VAR_6)) {

            VAR_11 = "I'm sorry, your name is too long.  But good %s anyway.";
        }


        FUNC_10 (VAR_6, VAR_11, VAR_9, VAR_5, (int)FUNC_1());

        VAR_10 = FUNC_7 (VAR_4, VAR_6, FUNC_11 (VAR_6), 0);
        if (VAR_10 < 0) {




            FUNC_0 (VAR_2, "nn_send: %s (ignoring)\n",
                FUNC_9 (FUNC_5 ()));
        }
    }

    FUNC_3 (VAR_4);
    return (-1);
}
