
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,char*) ;
 int FUNC_3 (char*) ;
 int VAR_1 ;
 char* FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int) ;
 int FUNC_9 () ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int) ;
 int FUNC_13 (char*,...) ;
 int VAR_2 ;
 int FUNC_14 (char*,char*) ;
 int FUNC_15 (char*,char*,int) ;

int FUNC_16(int VAR_3, char **VAR_4) {
    char *VAR_5;
    char *VAR_6 = VAR_4[0];


    while(VAR_3 > 1) {
        VAR_3--;
        VAR_4++;
        if (!FUNC_14(*VAR_4,"--multiline")) {
            FUNC_12(1);
            FUNC_13("Multi-line mode enabled.\n");
        } else if (!FUNC_14(*VAR_4,"--keycodes")) {
            FUNC_9();
            FUNC_1(0);
        } else {
            FUNC_2(VAR_2, "Usage: %s [--multiline] [--keycodes]\n", VAR_6);
            FUNC_1(1);
        }
    }



    FUNC_10(VAR_0);
    FUNC_11(VAR_1);



    FUNC_6("history.txt");







    while((VAR_5 = FUNC_4("hello> ")) != ((void*)0)) {

        if (VAR_5[0] != '\0' && VAR_5[0] != '/') {
            FUNC_13("echo: '%s'\n", VAR_5);
            FUNC_5(VAR_5);
            FUNC_7("history.txt");
        } else if (!FUNC_15(VAR_5,"/historylen",11)) {

            int VAR_7 = FUNC_0(VAR_5+11);
            FUNC_8(VAR_7);
        } else if (VAR_5[0] == '/') {
            FUNC_13("Unreconized command: %s\n", VAR_5);
        }
        FUNC_3(VAR_5);
    }
    return 0;
}
