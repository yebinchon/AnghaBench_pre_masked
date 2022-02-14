
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mp_cmd_ctx {int success; TYPE_1__* abort; } ;
struct command_ctx {struct mp_cmd_ctx* cache_dump_cmd; } ;
struct MPContext {int demuxer; struct command_ctx* command_ctx; } ;
struct TYPE_2__ {int cancel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int ,int ,int *) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct mp_cmd_ctx*) ;
 int FUNC_5 (struct mp_cmd_ctx*,int ,char*) ;

__attribute__((used)) static void FUNC_6(struct MPContext *VAR_2)
{
    struct command_ctx *VAR_3 = VAR_2->command_ctx;
    struct mp_cmd_ctx *VAR_4 = VAR_3->cache_dump_cmd;

    if (!VAR_4)
        return;


    FUNC_0(VAR_2->demuxer);

    if (FUNC_3(VAR_4->abort->cancel)) {


        FUNC_2(VAR_2->demuxer, 0, 0, ((void*)0));
        FUNC_0(FUNC_1(VAR_2->demuxer) <= 0);
    }

    int VAR_5 = FUNC_1(VAR_2->demuxer);
    if (VAR_5 <= 0) {
        if (VAR_5 < 0) {
            FUNC_5(VAR_4, VAR_0, "Cache dumping stopped due to error.");
            VAR_4->success = 0;
        } else {
            FUNC_5(VAR_4, VAR_1, "Cache dumping successfully ended.");
            VAR_4->success = 1;
        }
        VAR_3->cache_dump_cmd = ((void*)0);
        FUNC_4(VAR_4);
    }
}
