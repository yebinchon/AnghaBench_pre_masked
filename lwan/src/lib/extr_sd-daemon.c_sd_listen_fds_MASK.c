
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,int ,...) ;
 char* FUNC_1 (char*) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (char const*,int) ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (char*) ;

int FUNC_6(int VAR_7) {
        int VAR_8, VAR_9, VAR_10, VAR_11;
        const char *VAR_12;

        VAR_12 = FUNC_1("LISTEN_PID");
        if (!VAR_12) {
                VAR_10 = 0;
                goto finish;
        }

        VAR_9 = FUNC_3(VAR_12, -1);
        if (VAR_9 <= 0) {
                VAR_10 = -VAR_0;
                goto finish;
        }


        if (FUNC_2() != (pid_t)VAR_9) {
                VAR_10 = 0;
                goto finish;
        }

        VAR_12 = FUNC_1("LISTEN_FDS");
        if (!VAR_12) {
                VAR_10 = 0;
                goto finish;
        }

        VAR_8 = FUNC_3(VAR_12, -1);
        if (!VAR_8) {
                VAR_10 = 0;
                goto finish;
        }

        FUNC_4(VAR_5 < VAR_4, "");
        if (VAR_8 < 0 || VAR_8 > VAR_4 - VAR_5) {
                VAR_10 = -VAR_0;
                goto finish;
        }

        for (VAR_11 = VAR_5; VAR_11 < VAR_5 + (int)VAR_8; VAR_11++) {
                int VAR_13;

                VAR_13 = FUNC_0(VAR_11, VAR_2);
                if (VAR_13 < 0) {
                        VAR_10 = -VAR_6;
                        goto finish;
                }

                if (VAR_13 & VAR_1)
                        continue;

                if (FUNC_0(VAR_11, VAR_3, VAR_13 | VAR_1) < 0) {
                        VAR_10 = -VAR_6;
                        goto finish;
                }
        }

        VAR_10 = VAR_8;

finish:
        if (VAR_7) {
                FUNC_5("LISTEN_PID");
                FUNC_5("LISTEN_FDS");
        }

        return VAR_10;
}
