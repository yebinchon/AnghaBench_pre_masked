
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RedisModuleBlockedClient ;


 int* FUNC_0 (int) ;
 int FUNC_1 (void**) ;
 int FUNC_2 (int *,int*) ;
 int FUNC_3 () ;
 int FUNC_4 (long long) ;

void *FUNC_5(void *VAR_0) {
    void **VAR_1 = VAR_0;
    RedisModuleBlockedClient *VAR_2 = VAR_1[0];
    long long VAR_3 = (unsigned long)VAR_1[1];
    FUNC_1(VAR_1);

    FUNC_4(VAR_3);
    int *VAR_4 = FUNC_0(sizeof(int));
    *VAR_4 = FUNC_3();
    FUNC_2(VAR_2,VAR_4);
    return ((void*)0);
}
