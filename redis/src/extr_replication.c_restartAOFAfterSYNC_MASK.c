
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 () ;

void FUNC_4() {
    unsigned int VAR_2, VAR_3 = 10;
    for (VAR_2 = 0; VAR_2 < VAR_3; ++VAR_2) {
        if (FUNC_3() == VAR_0) break;
        FUNC_1(VAR_1,
            "Failed enabling the AOF after successful master synchronization! "
            "Trying it again in one second.");
        FUNC_2(1);
    }
    if (VAR_2 == VAR_3) {
        FUNC_1(VAR_1,
            "FATAL: this replica instance finished the synchronization with "
            "its master, but the AOF can't be turned on. Exiting now.");
        FUNC_0(1);
    }
}
