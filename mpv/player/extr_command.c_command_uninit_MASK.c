
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct command_ctx {int hotplug; int cache_dump_cmd; } ;
struct MPContext {struct command_ctx* command_ctx; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct MPContext*) ;
 int FUNC_3 (struct command_ctx*) ;

void FUNC_4(struct MPContext *VAR_0)
{
    struct command_ctx *VAR_1 = VAR_0->command_ctx;

    FUNC_1(!VAR_1->cache_dump_cmd);

    FUNC_2(VAR_0);
    FUNC_0(VAR_1->hotplug);

    FUNC_3(VAR_0->command_ctx);
    VAR_0->command_ctx = ((void*)0);
}
