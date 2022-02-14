
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct MPContext {TYPE_1__* opts; } ;
struct TYPE_2__ {int lua_load_stats; int lua_load_ytdl; int lua_load_osc; } ;


 int FUNC_0 (struct MPContext*,int ,char*) ;

void FUNC_1(struct MPContext *VAR_0)
{
    FUNC_0(VAR_0, VAR_0->opts->lua_load_osc, "@osc.lua");
    FUNC_0(VAR_0, VAR_0->opts->lua_load_ytdl, "@ytdl_hook.lua");
    FUNC_0(VAR_0, VAR_0->opts->lua_load_stats, "@stats.lua");
}
