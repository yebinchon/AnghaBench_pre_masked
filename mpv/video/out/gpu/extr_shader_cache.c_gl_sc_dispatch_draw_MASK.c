
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct timer_pool {int dummy; } ;
struct TYPE_7__ {int h; int w; int format; } ;
struct ra_tex {TYPE_2__ params; } ;
struct mp_rect {int member_3; int member_2; int member_1; int member_0; } ;
struct ra_renderpass_run_params {void* vertex_data; size_t vertex_count; struct mp_rect scissors; struct mp_rect viewport; struct ra_tex* target; int push_constants; int num_values; int values; int pass; } ;
struct ra_renderpass_input {int dummy; } ;
struct mp_pass_perf {int dummy; } ;
struct TYPE_6__ {int invalidate_target; } ;
struct gl_shader_cache {TYPE_5__* ra; TYPE_3__* current_shader; int num_values; int values; TYPE_1__ params; } ;
struct TYPE_10__ {TYPE_4__* fns; } ;
struct TYPE_9__ {int (* renderpass_run ) (TYPE_5__*,struct ra_renderpass_run_params*) ;} ;
struct TYPE_8__ {int pushc; int pass; struct timer_pool* timer; } ;


 int VAR_0 ;
 int FUNC_0 (struct gl_shader_cache*,int ,int ,struct ra_renderpass_input const*,int,size_t) ;
 int FUNC_1 (struct gl_shader_cache*) ;
 int FUNC_2 (TYPE_5__*,struct ra_renderpass_run_params*) ;
 struct mp_pass_perf FUNC_3 (struct timer_pool*) ;
 int FUNC_4 (struct timer_pool*) ;
 int FUNC_5 (struct timer_pool*) ;

struct mp_pass_perf FUNC_6(struct gl_shader_cache *VAR_1,
                                        struct ra_tex *VAR_2, bool VAR_3,
                                        const struct ra_renderpass_input *VAR_4,
                                        int VAR_5, size_t VAR_6,
                                        void *VAR_7, size_t VAR_8)
{
    struct timer_pool *VAR_9 = ((void*)0);

    VAR_1->params.invalidate_target = VAR_3;
    FUNC_0(VAR_1, VAR_0, VAR_2->params.format,
                   VAR_4, VAR_5, VAR_6);
    if (!VAR_1->current_shader)
        goto error;

    VAR_9 = VAR_1->current_shader->timer;

    struct mp_rect VAR_10 = {0, 0, VAR_2->params.w, VAR_2->params.h};

    struct ra_renderpass_run_params VAR_11 = {
        .pass = VAR_1->current_shader->pass,
        .values = VAR_1->values,
        .num_values = VAR_1->num_values,
        .push_constants = VAR_1->current_shader->pushc,
        .target = VAR_2,
        .vertex_data = VAR_7,
        .vertex_count = VAR_8,
        .viewport = VAR_10,
        .scissors = VAR_10,
    };

    FUNC_4(VAR_9);
    VAR_1->ra->fns->renderpass_run(VAR_1->ra, &VAR_11);
    FUNC_5(VAR_9);

error:
    FUNC_1(VAR_1);
    return FUNC_3(VAR_9);
}
