
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct timer_pool {int dummy; } ;
struct ra_renderpass_run_params {int compute_groups; int push_constants; int num_values; int values; int pass; } ;
struct mp_pass_perf {int dummy; } ;
struct gl_shader_cache {TYPE_3__* ra; TYPE_1__* current_shader; int num_values; int values; } ;
struct TYPE_6__ {TYPE_2__* fns; } ;
struct TYPE_5__ {int (* renderpass_run ) (TYPE_3__*,struct ra_renderpass_run_params*) ;} ;
struct TYPE_4__ {int pushc; int pass; struct timer_pool* timer; } ;


 int VAR_0 ;
 int FUNC_0 (struct gl_shader_cache*,int ,int *,int *,int ,int ) ;
 int FUNC_1 (struct gl_shader_cache*) ;
 int FUNC_2 (TYPE_3__*,struct ra_renderpass_run_params*) ;
 struct mp_pass_perf FUNC_3 (struct timer_pool*) ;
 int FUNC_4 (struct timer_pool*) ;
 int FUNC_5 (struct timer_pool*) ;

struct mp_pass_perf FUNC_6(struct gl_shader_cache *VAR_1,
                                           int VAR_2, int VAR_3, int VAR_4)
{
    struct timer_pool *VAR_5 = ((void*)0);

    FUNC_0(VAR_1, VAR_0, ((void*)0), ((void*)0), 0, 0);
    if (!VAR_1->current_shader)
        goto error;

    VAR_5 = VAR_1->current_shader->timer;

    struct ra_renderpass_run_params VAR_6 = {
        .pass = VAR_1->current_shader->pass,
        .values = VAR_1->values,
        .num_values = VAR_1->num_values,
        .push_constants = VAR_1->current_shader->pushc,
        .compute_groups = {VAR_2, VAR_3, VAR_4},
    };

    FUNC_4(VAR_5);
    VAR_1->ra->fns->renderpass_run(VAR_1->ra, &VAR_6);
    FUNC_5(VAR_5);

error:
    FUNC_1(VAR_1);
    return FUNC_3(VAR_5);
}
