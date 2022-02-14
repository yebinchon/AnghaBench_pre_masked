
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int FUNC_0 (char*,int ) ;

int FUNC_1(uint64_t VAR_0) {
        int VAR_1;

        VAR_1 = FUNC_0("/proc/sys/kernel/usermodehelper/inheritable", VAR_0);
        if (VAR_1 < 0)
                return VAR_1;

        VAR_1 = FUNC_0("/proc/sys/kernel/usermodehelper/bset", VAR_0);
        if (VAR_1 < 0)
                return VAR_1;

        return VAR_1;
}
