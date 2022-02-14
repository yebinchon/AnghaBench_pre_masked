
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct utsname {int release; } ;
typedef scalar_t__ CGroupMask ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (struct utsname*) ;

CGroupMask FUNC_4(void) {
        static CGroupMask VAR_2 = (CGroupMask) -1;
        if (VAR_2 == (CGroupMask) -1) {
                if (FUNC_1()) {
                        struct utsname VAR_3;
                        FUNC_0(FUNC_3(&VAR_3) >= 0);

                        if (FUNC_2(VAR_3.release, "4.15") < 0)
                                VAR_2 = VAR_0;
                        else
                                VAR_2 = 0;
                } else
                        VAR_2 = VAR_1;
        }

        return VAR_2;
}
