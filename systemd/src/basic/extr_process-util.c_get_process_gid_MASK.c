
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
typedef scalar_t__ pid_t ;
typedef int gid_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,char*,int *) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 () ;

int FUNC_4(pid_t VAR_0, gid_t *VAR_1) {

        if (VAR_0 == 0 || VAR_0 == FUNC_3()) {
                *VAR_1 = FUNC_2();
                return 0;
        }

        FUNC_0(sizeof(uid_t) == sizeof(gid_t));
        return FUNC_1(VAR_0, "Gid:", VAR_1);
}
