
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 () ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_3 (int) ;

int FUNC_4()
{
    VAR_1 = FUNC_2();
    if (VAR_1 <= 0) {
        FUNC_1("FREEBSD: can't get system page size");
        return 1;
    }

    if (FUNC_3(FUNC_0("kern.smp.cpus", VAR_0))) {
        FUNC_1("FREEBSD: can't get number of cpus");
        return 1;
    }

    if (FUNC_3(!VAR_0)) {
        FUNC_1("FREEBSD: wrong number of cpus");
        return 1;
    }

    return 0;
}
