
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,int ) ;
 scalar_t__ FUNC_1 (char*) ;

int FUNC_2(void) {
        int VAR_0;

        if (FUNC_1("SYSTEMD_IGNORE_CHROOT") > 0)
                return 0;

        VAR_0 = FUNC_0("/proc/1/root", "/", 0);
        if (VAR_0 < 0)
                return VAR_0;

        return VAR_0 == 0;
}
