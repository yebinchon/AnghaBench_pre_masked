
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mp_swresample {double speed; struct mp_filter* f; } ;
struct priv {double cmd_speed; struct mp_swresample public; void* out_pool; void* reorder_buffer; TYPE_1__* opts; int log; } ;
struct mp_resample_opts {int dummy; } ;
struct mp_filter {int global; int log; struct priv* priv; } ;
struct TYPE_3__ {int avopts; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (struct priv*) ;
 int FUNC_1 (struct priv*,int ) ;
 int FUNC_2 (struct mp_filter*,int ,char*) ;
 struct mp_filter* FUNC_3 (struct mp_filter*,int *) ;
 TYPE_1__* FUNC_4 (struct priv*,int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_5 (struct priv*,struct mp_resample_opts*) ;

struct mp_swresample *FUNC_6(struct mp_filter *VAR_4,
                                           struct mp_resample_opts *VAR_5)
{
    struct mp_filter *VAR_6 = FUNC_3(VAR_4, &VAR_3);
    if (!VAR_6)
        return ((void*)0);

    FUNC_2(VAR_6, VAR_0, "in");
    FUNC_2(VAR_6, VAR_1, "out");

    struct priv *VAR_7 = VAR_6->priv;
    VAR_7->public.f = VAR_6;
    VAR_7->public.speed = 1.0;
    VAR_7->cmd_speed = 1.0;
    VAR_7->log = VAR_6->log;

    if (VAR_5) {
        VAR_7->opts = FUNC_5(VAR_7, VAR_5);
        VAR_7->opts->avopts = FUNC_1(VAR_7, VAR_7->opts->avopts);
    } else {
        VAR_7->opts = FUNC_4(VAR_7, VAR_6->global, &VAR_2);
    }

    VAR_7->reorder_buffer = FUNC_0(VAR_7);
    VAR_7->out_pool = FUNC_0(VAR_7);

    return &VAR_7->public;
}
