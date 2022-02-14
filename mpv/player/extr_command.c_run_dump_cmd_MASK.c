
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_cmd_ctx {int success; struct MPContext* mpctx; } ;
struct command_ctx {struct mp_cmd_ctx* cache_dump_cmd; } ;
struct MPContext {int demuxer; struct command_ctx* command_ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct MPContext*) ;
 int FUNC_1 (int ,double,double,char*) ;
 int FUNC_2 (struct MPContext*) ;
 int FUNC_3 (struct mp_cmd_ctx*) ;
 int FUNC_4 (struct mp_cmd_ctx*,int ,char*) ;

__attribute__((used)) static void FUNC_5(struct mp_cmd_ctx *VAR_2, double VAR_3, double VAR_4,
                         char *VAR_5)
{
    struct MPContext *VAR_6 = VAR_2->mpctx;
    struct command_ctx *VAR_7 = VAR_6->command_ctx;

    FUNC_2(VAR_6);

    if (!VAR_6->demuxer) {
        FUNC_4(VAR_2, VAR_0, "No demuxer open.");
        VAR_2->success = 0;
        FUNC_3(VAR_2);
        return;
    }

    FUNC_4(VAR_2, VAR_1, "Cache dumping started.");

    if (!FUNC_1(VAR_6->demuxer, VAR_3, VAR_4, VAR_5)) {
        FUNC_4(VAR_2, VAR_1, "Cache dumping stopped.");
        FUNC_3(VAR_2);
        return;
    }

    VAR_7->cache_dump_cmd = VAR_2;
    FUNC_0(VAR_6);
}
