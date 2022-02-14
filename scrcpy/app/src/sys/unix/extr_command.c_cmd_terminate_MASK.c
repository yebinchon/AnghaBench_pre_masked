
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ pid_t ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (scalar_t__,int ) ;

bool
FUNC_3(pid_t VAR_1) {
    if (VAR_1 <= 0) {
        FUNC_0("Requested to kill %d, this is an error. Please report the bug.\n",
             (int) VAR_1);
        FUNC_1();
    }
    return FUNC_2(VAR_1, VAR_0) != -1;
}
