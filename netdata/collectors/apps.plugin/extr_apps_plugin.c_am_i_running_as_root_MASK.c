
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uid_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (char*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_3() {
    uid_t VAR_1 = FUNC_1(), VAR_2 = FUNC_0();

    if(VAR_1 == 0 || VAR_2 == 0) {
        if(VAR_0) FUNC_2("I am running with escalated privileges, uid = %u, euid = %u.", VAR_1, VAR_2);
        return 1;
    }

    if(VAR_0) FUNC_2("I am not running with escalated privileges, uid = %u, euid = %u.", VAR_1, VAR_2);
    return 0;
}
