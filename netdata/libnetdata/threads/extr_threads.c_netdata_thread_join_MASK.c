
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int netdata_thread_t ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ,void**) ;

int FUNC_2(netdata_thread_t VAR_0, void **VAR_1) {
    int VAR_2 = FUNC_1(VAR_0, VAR_1);
    if(VAR_2 != 0)
        FUNC_0("cannot join thread. pthread_join() failed with code %d.", VAR_2);

    return VAR_2;
}
