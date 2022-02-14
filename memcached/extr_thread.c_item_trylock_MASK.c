
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
typedef void pthread_mutex_t ;


 size_t FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 scalar_t__ FUNC_1 (void*) ;

void *FUNC_2(uint32_t VAR_2) {
    pthread_mutex_t *VAR_3 = &VAR_1[VAR_2 & FUNC_0(VAR_0)];
    if (FUNC_1(VAR_3) == 0) {
        return VAR_3;
    }
    return ((void*)0);
}
