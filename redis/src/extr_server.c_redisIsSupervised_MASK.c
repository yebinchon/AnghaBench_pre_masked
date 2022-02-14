
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

int FUNC_3(int VAR_3) {
    if (VAR_3 == VAR_0) {
        const char *VAR_4 = FUNC_0("UPSTART_JOB");
        const char *VAR_5 = FUNC_0("NOTIFY_SOCKET");

        if (VAR_4) {
            FUNC_2();
        } else if (VAR_5) {
            FUNC_1();
        }
    } else if (VAR_3 == VAR_2) {
        return FUNC_2();
    } else if (VAR_3 == VAR_1) {
        return FUNC_1();
    }

    return 0;
}
