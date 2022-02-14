
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 () ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (char const) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (char const*,char*,int) ;

__attribute__((used)) static bool FUNC_4(void) {

    const char *VAR_1 = FUNC_0();
    if (VAR_1 != ((void*)0)) {
        if (FUNC_3(VAR_1, "1.", 2) == 0) {

            if (('0' <= VAR_1[2] && VAR_1[2] < '3') && !FUNC_2(VAR_1[3])) {
                FUNC_1(VAR_0, "You are using libevent %s.\nPlease upgrade to"
                        " a more recent version (1.3 or newer)\n",
                        FUNC_0());
                return 0;
            }
        }
    }

    return 1;
}
