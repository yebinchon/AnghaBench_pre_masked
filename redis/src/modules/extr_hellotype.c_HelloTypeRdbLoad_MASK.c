
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef void HelloTypeObject ;
typedef int int64_t ;
typedef int RedisModuleIO ;


 int FUNC_0 (void*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 void* FUNC_3 () ;

void *FUNC_4(RedisModuleIO *VAR_0, int VAR_1) {
    if (VAR_1 != 0) {

        return ((void*)0);
    }
    uint64_t VAR_2 = FUNC_2(VAR_0);
    struct HelloTypeObject *VAR_3 = FUNC_3();
    while(VAR_2--) {
        int64_t VAR_4 = FUNC_1(VAR_0);
        FUNC_0(VAR_3,VAR_4);
    }
    return VAR_3;
}
