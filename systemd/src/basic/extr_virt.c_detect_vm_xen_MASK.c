
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char*,int ) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(void) {



        if (FUNC_0("/proc/xen", VAR_0) < 0) {
                FUNC_1("Virtualization XEN not found, /proc/xen does not exist");
                return VAR_1;
        }

        FUNC_1("Virtualization XEN found (/proc/xen exists)");
        return VAR_2;
}
