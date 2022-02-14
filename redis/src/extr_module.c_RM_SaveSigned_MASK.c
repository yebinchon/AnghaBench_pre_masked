
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int int64_t ;
typedef int RedisModuleIO ;


 int FUNC_0 (int *,int ) ;

void FUNC_1(RedisModuleIO *VAR_0, int64_t VAR_1) {
    union {uint64_t u; int64_t i;} VAR_2;
    VAR_2.i = VAR_1;
    FUNC_0(VAR_0,VAR_2.u);
}
