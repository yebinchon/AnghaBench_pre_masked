
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmo ;
typedef int pid_t ;
typedef int pid_file ;
typedef scalar_t__ int32_t ;
typedef scalar_t__ in_port_t ;
typedef int environment ;
typedef int coreadm ;
typedef int buffer ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*,char**) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char*,int,int *) ;
 int * FUNC_5 (char*,char*) ;
 int FUNC_6 () ;
 int FUNC_7 (int ,char*,char*) ;
 scalar_t__ FUNC_8 () ;
 scalar_t__ FUNC_9 () ;
 int FUNC_10 (char*) ;
 scalar_t__ FUNC_11 (char*) ;
 int FUNC_12 (char*,scalar_t__*) ;
 int FUNC_13 (char*,int,char*,int) ;
 int VAR_3 ;
 char* FUNC_14 (int ) ;
 int FUNC_15 (char*) ;
 scalar_t__ FUNC_16 (char*,char*,int) ;
 int FUNC_17 (char*) ;
 int FUNC_18 (int) ;

__attribute__((used)) static pid_t FUNC_19(in_port_t *VAR_4, bool VAR_5, int VAR_6) {
    char VAR_7[80];
    FUNC_13(VAR_7, sizeof(VAR_7),
             "MEMCACHED_PORT_FILENAME=/tmp/ports.%lu", (long)FUNC_8());
    char *VAR_8= VAR_7 + FUNC_15("MEMCACHED_PORT_FILENAME=");
    char VAR_9[80];
    FUNC_13(VAR_9, sizeof(VAR_9), "/tmp/pid.%lu", (long)FUNC_8());

    FUNC_11(VAR_8);
    FUNC_11(VAR_9);
    pid_t VAR_10 = FUNC_6();
    FUNC_1(VAR_10 != -1);

    if (VAR_10 == 0) {

        char *VAR_11[24];
        int VAR_12 = 0;
        char VAR_13[24];
        FUNC_13(VAR_13, sizeof(VAR_13), "%u", VAR_6);

        FUNC_10(VAR_7);





        if (!VAR_5) {
            VAR_11[VAR_12++] = "./timedrun";
            VAR_11[VAR_12++] = VAR_13;
        }
        VAR_11[VAR_12++] = "./memcached-debug";
        VAR_11[VAR_12++] = "-A";
        VAR_11[VAR_12++] = "-p";
        VAR_11[VAR_12++] = "-1";
        VAR_11[VAR_12++] = "-U";
        VAR_11[VAR_12++] = "0";
        if (FUNC_9() == 0) {
            VAR_11[VAR_12++] = "-u";
            VAR_11[VAR_12++] = "root";
        }
        if (VAR_5) {
            VAR_11[VAR_12++] = "-d";
            VAR_11[VAR_12++] = "-P";
            VAR_11[VAR_12++] = VAR_9;
        }







        VAR_11[VAR_12++] = ((void*)0);
        FUNC_1(FUNC_2(VAR_11[0], VAR_11) != -1);
    }


    while (FUNC_0(VAR_8, VAR_0) == -1) {
        FUNC_18(10);
    }

    FILE *VAR_14 = FUNC_5(VAR_8, "r");
    if (VAR_14 == ((void*)0)) {
        FUNC_7(VAR_3, "Failed to open the file containing port numbers: %s\n",
                FUNC_14(VAR_2));
        FUNC_1(0);
    }

    *VAR_4 = (in_port_t)-1;
    char VAR_15[80];
    while ((FUNC_4(VAR_15, sizeof(VAR_15), VAR_14)) != ((void*)0)) {
        if (FUNC_16(VAR_15, "TCP INET: ", 10) == 0) {
            int32_t VAR_16;
            FUNC_1(FUNC_12(VAR_15 + 10, &VAR_16));
            *VAR_4 = (in_port_t)VAR_16;
        }
    }
    FUNC_3(VAR_14);
    FUNC_1(FUNC_11(VAR_8) == 0);

    if (VAR_5) {




        while (FUNC_0(VAR_9, VAR_0) == -1) {
            FUNC_18(10);
        }

        VAR_14 = FUNC_5(VAR_9, "r");
        if (VAR_14 == ((void*)0)) {
            FUNC_7(VAR_3, "Failed to open pid file: %s\n",
                    FUNC_14(VAR_2));
            FUNC_1(0);
        }


        for (int VAR_17 = 0; VAR_17 < 20 && FUNC_4(VAR_15, sizeof(VAR_15), VAR_14) == ((void*)0); VAR_17++) {
            FUNC_18(10);
        }
        FUNC_3(VAR_14);

        int32_t VAR_18;
        FUNC_1(FUNC_12(VAR_15, &VAR_18));
        VAR_10 = (pid_t)VAR_18;
    }

    return VAR_10;
}
