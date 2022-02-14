
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 () ;

__attribute__((used)) static bool FUNC_4(void) {
        static int VAR_0 = -1;

        if (VAR_0 < 0) {
                int VAR_1;

                VAR_1 = FUNC_2("SYSTEMD_EMOJI");
                if (VAR_1 < 0)
                        VAR_0 =
                                FUNC_3() &&
                                !FUNC_0(FUNC_1("TERM"), "dumb", "linux");
                else
                        VAR_0 = VAR_1;
        }

        return VAR_0;
}
