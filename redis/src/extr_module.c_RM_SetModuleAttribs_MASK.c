
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int ver; int apiver; scalar_t__ options; scalar_t__ in_hook; scalar_t__ in_call; void* filters; void* using; void* usedby; void* types; int name; } ;
struct TYPE_5__ {TYPE_2__* module; } ;
typedef TYPE_1__ RedisModuleCtx ;
typedef TYPE_2__ RedisModule ;


 void* FUNC_0 () ;
 int FUNC_1 (char*) ;
 TYPE_2__* FUNC_2 (int) ;

void FUNC_3(RedisModuleCtx *VAR_0, const char *VAR_1, int VAR_2, int VAR_3) {
    RedisModule *VAR_4;

    if (VAR_0->module != ((void*)0)) return;
    VAR_4 = FUNC_2(sizeof(*VAR_4));
    VAR_4->name = FUNC_1((char*)VAR_1);
    VAR_4->ver = VAR_2;
    VAR_4->apiver = VAR_3;
    VAR_4->types = FUNC_0();
    VAR_4->usedby = FUNC_0();
    VAR_4->using = FUNC_0();
    VAR_4->filters = FUNC_0();
    VAR_4->in_call = 0;
    VAR_4->in_hook = 0;
    VAR_4->options = 0;
    VAR_0->module = VAR_4;
}
