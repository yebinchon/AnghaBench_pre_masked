
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RedisModuleDict {int rax; } ;
typedef struct RedisModuleDict RedisModuleDict ;
typedef int RedisModuleCtx ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,struct RedisModuleDict*) ;
 int FUNC_1 () ;
 struct RedisModuleDict* FUNC_2 (int) ;

RedisModuleDict *FUNC_3(RedisModuleCtx *VAR_1) {
    struct RedisModuleDict *VAR_2 = FUNC_2(sizeof(*VAR_2));
    VAR_2->rax = FUNC_1();
    if (VAR_1 != ((void*)0)) FUNC_0(VAR_1,VAR_0,VAR_2);
    return VAR_2;
}
