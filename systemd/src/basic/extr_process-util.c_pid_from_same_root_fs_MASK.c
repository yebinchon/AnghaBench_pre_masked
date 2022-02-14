
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ pid_t ;


 int FUNC_0 (char const*,char*,int ) ;
 scalar_t__ FUNC_1 () ;
 char* FUNC_2 (scalar_t__,char*) ;

int FUNC_3(pid_t VAR_0) {
        const char *VAR_1;

        if (VAR_0 < 0)
                return 0;

        if (VAR_0 == 0 || VAR_0 == FUNC_1())
                return 1;

        VAR_1 = FUNC_2(VAR_0, "root");

        return FUNC_0(VAR_1, "/proc/1/root", 0);
}
