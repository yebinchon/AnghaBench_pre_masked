
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int argc; int const** argv; } ;
typedef int RedisModuleString ;
typedef TYPE_1__ RedisModuleCommandFilterCtx ;



const RedisModuleString *FUNC_0(RedisModuleCommandFilterCtx *VAR_0, int VAR_1)
{
    if (VAR_1 < 0 || VAR_1 >= VAR_0->argc) return ((void*)0);
    return VAR_0->argv[VAR_1];
}
