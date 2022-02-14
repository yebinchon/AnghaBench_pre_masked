
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int netdata_mutex_t ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int) ;

int FUNC_5(netdata_mutex_t *VAR_0) {
    FUNC_1();

    int VAR_1 = FUNC_3(VAR_0);
    if(FUNC_4(VAR_1 != 0)) {
        FUNC_2();
        FUNC_0("MUTEX_LOCK: failed to get lock (code %d)", VAR_1);
    }
    return VAR_1;
}
