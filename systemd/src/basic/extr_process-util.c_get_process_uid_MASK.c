
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
typedef scalar_t__ pid_t ;


 int FUNC_0 (scalar_t__,char*,int *) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;

int FUNC_3(pid_t VAR_0, uid_t *VAR_1) {

        if (VAR_0 == 0 || VAR_0 == FUNC_1()) {
                *VAR_1 = FUNC_2();
                return 0;
        }

        return FUNC_0(VAR_0, "Uid:", VAR_1);
}
