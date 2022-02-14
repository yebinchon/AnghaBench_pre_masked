
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct command_ctx {TYPE_2__* cache_dump_cmd; } ;
struct MPContext {struct command_ctx* command_ctx; } ;
struct TYPE_4__ {TYPE_1__* abort; } ;
struct TYPE_3__ {int cancel; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct MPContext*) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct MPContext *VAR_0)
{
    struct command_ctx *VAR_1 = VAR_0->command_ctx;

    if (VAR_1->cache_dump_cmd)
        FUNC_2(VAR_1->cache_dump_cmd->abort->cancel);
    FUNC_1(VAR_0);
    FUNC_0(!VAR_1->cache_dump_cmd);
}
