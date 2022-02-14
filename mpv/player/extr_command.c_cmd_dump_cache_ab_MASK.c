
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mp_cmd_ctx {TYPE_3__* args; struct MPContext* mpctx; } ;
struct MPContext {TYPE_1__* opts; } ;
struct TYPE_5__ {int s; } ;
struct TYPE_6__ {TYPE_2__ v; } ;
struct TYPE_4__ {int * ab_loop; } ;


 int FUNC_0 (struct mp_cmd_ctx*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(void *VAR_0)
{
    struct mp_cmd_ctx *VAR_1 = VAR_0;
    struct MPContext *VAR_2 = VAR_1->mpctx;

    FUNC_0(VAR_1, VAR_2->opts->ab_loop[0], VAR_2->opts->ab_loop[1],
                 VAR_1->args[0].v.s);
}
