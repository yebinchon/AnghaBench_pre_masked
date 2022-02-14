
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int argc; int ** argv; } ;
typedef int RedisModuleString ;
typedef TYPE_1__ RedisModuleCommandFilterCtx ;


 int VAR_0 ;
 int VAR_1 ;
 int ** FUNC_0 (int **,int) ;

int FUNC_1(RedisModuleCommandFilterCtx *VAR_2, int VAR_3, RedisModuleString *VAR_4)
{
    int VAR_5;

    if (VAR_3 < 0 || VAR_3 > VAR_2->argc) return VAR_0;

    VAR_2->argv = FUNC_0(VAR_2->argv, (VAR_2->argc+1)*sizeof(RedisModuleString *));
    for (VAR_5 = VAR_2->argc; VAR_5 > VAR_3; VAR_5--) {
        VAR_2->argv[VAR_5] = VAR_2->argv[VAR_5-1];
    }
    VAR_2->argv[VAR_3] = VAR_4;
    VAR_2->argc++;

    return VAR_1;
}
