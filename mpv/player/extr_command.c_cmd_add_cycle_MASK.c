
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mp_cmd_ctx {int success; TYPE_3__* args; TYPE_1__* cmd; int priv; struct MPContext* mpctx; } ;
struct m_property_switch_arg {double inc; int wrap; } ;
struct MPContext {int dummy; } ;
struct TYPE_5__ {char* s; double d; } ;
struct TYPE_6__ {TYPE_2__ v; } ;
struct TYPE_4__ {int scale_units; double scale; int original; scalar_t__ repeated; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct MPContext*,char*,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct mp_cmd_ctx*,char*,int ,struct m_property_switch_arg*) ;
 int FUNC_3 (char*,struct MPContext*) ;
 scalar_t__ FUNC_4 (char*,struct MPContext*) ;

__attribute__((used)) static void FUNC_5(void *VAR_1)
{
    struct mp_cmd_ctx *VAR_2 = VAR_1;
    struct MPContext *VAR_3 = VAR_2->mpctx;
    bool VAR_4 = !!VAR_2->priv;

    char *VAR_5 = VAR_2->args[0].v.s;
    if (VAR_2->cmd->repeated && !FUNC_3(VAR_5, VAR_3)) {
        FUNC_1(VAR_3, "Dropping command '%.*s' from auto-repeated key.\n",
                   FUNC_0(VAR_2->cmd->original));
        return;
    }

    double VAR_6 = 1;
    int VAR_7 = VAR_2->cmd->scale_units;
    if (FUNC_4(VAR_5, VAR_3)) {
        VAR_6 = VAR_2->cmd->scale;
        VAR_7 = 1;
    }

    for (int VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
        struct m_property_switch_arg VAR_9 = {
            .inc = VAR_2->args[1].v.d * VAR_6,
            .wrap = VAR_4,
        };
        FUNC_2(VAR_2, VAR_5, VAR_0, &VAR_9);
        if (!VAR_2->success)
            return;
    }
}
