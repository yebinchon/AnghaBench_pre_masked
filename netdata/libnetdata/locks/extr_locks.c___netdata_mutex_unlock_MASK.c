
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int netdata_mutex_t ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int) ;

int FUNC_4(netdata_mutex_t *VAR_0) {
    int VAR_1 = FUNC_2(VAR_0);
    if(FUNC_3(VAR_1 != 0))
        FUNC_0("MUTEX_LOCK: failed to unlock (code %d).", VAR_1);
    else
        FUNC_1();

    return VAR_1;
}
