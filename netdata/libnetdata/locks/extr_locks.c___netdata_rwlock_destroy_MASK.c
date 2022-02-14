
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int netdata_rwlock_t ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int) ;

int FUNC_3(netdata_rwlock_t *VAR_0) {
    int VAR_1 = FUNC_1(VAR_0);
    if(FUNC_2(VAR_1 != 0))
        FUNC_0("RW_LOCK: failed to destroy lock (code %d)", VAR_1);
    return VAR_1;
}
