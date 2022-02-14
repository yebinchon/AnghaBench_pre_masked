
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int) ;
 char* FUNC_9 (int ) ;
 int FUNC_10 () ;

int FUNC_11(int VAR_5, char **VAR_6)
{
    int VAR_7;
    char *VAR_8 = 0;
    int VAR_9 = 60;


    if (VAR_5 == 2)
 VAR_8 = VAR_6[1];
    else if (VAR_5 == 4) {
 VAR_9 = FUNC_0(VAR_6[2]);
 VAR_8 = VAR_6[3];
    } else
 FUNC_10();

    if (!(VAR_7 = FUNC_4(VAR_8, VAR_1|VAR_0))) {
 FUNC_5("Can't open %s, because: %s\n", VAR_8, FUNC_9(VAR_4));
 FUNC_2(-1);
    }

    if (VAR_9) {
 FUNC_5("Waiting %d seconds for the system to settle down to "
        "'normal'\n", VAR_9);
 FUNC_8(VAR_9);
    } else
 FUNC_6("Not waiting for system to settle down");

    FUNC_7(VAR_2, VAR_3);

    FUNC_3(VAR_7);

    FUNC_1(VAR_7);

    return 0;
}
