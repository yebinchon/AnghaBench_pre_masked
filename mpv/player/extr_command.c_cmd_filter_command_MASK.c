
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mp_output_chain {int dummy; } ;
struct mp_filter_command {int arg; int cmd; int type; } ;
struct mp_cmd_ctx {int success; TYPE_4__* args; scalar_t__ priv; struct MPContext* mpctx; } ;
struct MPContext {TYPE_2__* ao_chain; TYPE_1__* vo_chain; } ;
struct TYPE_7__ {int s; } ;
struct TYPE_8__ {TYPE_3__ v; } ;
struct TYPE_6__ {struct mp_output_chain* filter; } ;
struct TYPE_5__ {struct mp_output_chain* filter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mp_output_chain*,int ,struct mp_filter_command*) ;

__attribute__((used)) static void FUNC_1(void *VAR_3)
{
    struct mp_cmd_ctx *VAR_4 = VAR_3;
    struct MPContext *VAR_5 = VAR_4->mpctx;
    int VAR_6 = *(int *)VAR_4->priv;

    struct mp_output_chain *VAR_7 = ((void*)0);
    if (VAR_6 == VAR_2)
        VAR_7 = VAR_5->vo_chain ? VAR_5->vo_chain->filter : ((void*)0);
    if (VAR_6 == VAR_1)
        VAR_7 = VAR_5->ao_chain ? VAR_5->ao_chain->filter : ((void*)0);
    if (!VAR_7) {
        VAR_4->success = 0;
        return;
    }
    struct mp_filter_command VAR_8 = {
        .type = VAR_0,
        .cmd = VAR_4->args[1].v.s,
        .arg = VAR_4->args[2].v.s,
    };
    VAR_4->success = FUNC_0(VAR_7, VAR_4->args[0].v.s, &VAR_8);
}
