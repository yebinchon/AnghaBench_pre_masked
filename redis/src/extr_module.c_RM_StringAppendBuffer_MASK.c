
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ptr; } ;
typedef TYPE_1__ RedisModuleString ;
typedef int RedisModuleCtx ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,char const*,size_t) ;

int FUNC_3(RedisModuleCtx *VAR_2, RedisModuleString *VAR_3, const char *VAR_4, size_t VAR_5) {
    FUNC_0(VAR_2);
    VAR_3 = FUNC_1(VAR_3);
    if (VAR_3 == ((void*)0)) return VAR_0;
    VAR_3->ptr = FUNC_2(VAR_3->ptr,VAR_4,VAR_5);
    return VAR_1;
}
