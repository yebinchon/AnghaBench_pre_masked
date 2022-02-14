
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (char*,char*,int ) ;

void FUNC_3(void) {
        int VAR_1;

        if (FUNC_0() > 0)
                return;

        VAR_1 = FUNC_2("/proc/sys/kernel/core_pattern", "|/bin/false", VAR_0);
        if (VAR_1 < 0)
                FUNC_1(VAR_1, "Failed to turn off coredumps, ignoring: %m");
}
