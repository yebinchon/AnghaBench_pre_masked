
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,int ) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 () ;
 int FUNC_4 (int,int,int) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 () ;

int FUNC_7(void) {
        int VAR_3, VAR_4;





        VAR_3 = FUNC_0("/dev/console", VAR_0|VAR_1, VAR_2);
        if (VAR_3 < 0) {
                FUNC_2(VAR_3, "Failed to acquire terminal, using /dev/null stdin/stdout/stderr instead: %m");

                VAR_4 = FUNC_3();
                if (VAR_4 < 0)
                        return FUNC_1(VAR_4, "Failed to make /dev/null stdin/stdout/stderr: %m");

        } else {
                VAR_4 = FUNC_5(VAR_3, 1);
                if (VAR_4 < 0)
                        FUNC_2(VAR_4, "Failed to reset terminal, ignoring: %m");

                VAR_4 = FUNC_4(VAR_3, VAR_3, VAR_3);
                if (VAR_4 < 0)
                        return FUNC_1(VAR_4, "Failed to make terminal stdin/stdout/stderr: %m");
        }

        FUNC_6();
        return 0;
}
