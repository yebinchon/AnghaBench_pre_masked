
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ra_layout {size_t size; int align; } ;
struct TYPE_7__ {int dim_m; } ;
struct sc_uniform {size_t offset; int type; struct ra_layout layout; TYPE_3__ input; } ;
struct gl_shader_cache {int next_uniform_dynamic; size_t pushc_size; size_t ubo_size; TYPE_2__* ra; } ;
struct TYPE_6__ {size_t max_pushc_size; int caps; int glsl_version; TYPE_1__* fns; scalar_t__ glsl_vulkan; } ;
struct TYPE_5__ {struct ra_layout (* uniform_layout ) (TYPE_3__*) ;struct ra_layout (* push_constant_layout ) (TYPE_3__*) ;} ;


 void* FUNC_0 (size_t,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 struct ra_layout FUNC_2 (TYPE_3__*) ;
 struct ra_layout FUNC_3 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_4(struct gl_shader_cache *VAR_5, struct sc_uniform *VAR_6)
{
    bool VAR_7 = VAR_5->next_uniform_dynamic;
    VAR_5->next_uniform_dynamic = 0;




    bool VAR_8 = VAR_6->input.dim_m == 1 || VAR_7;


    if (VAR_8 && VAR_5->ra->glsl_vulkan && VAR_5->ra->max_pushc_size) {
        struct ra_layout VAR_9 = VAR_5->ra->fns->push_constant_layout(&VAR_6->input);
        size_t VAR_10 = FUNC_0(VAR_5->pushc_size, VAR_9.align);

        size_t VAR_11 = VAR_10 + VAR_9.size;
        if (VAR_11 <= VAR_5->ra->max_pushc_size) {
            VAR_6->type = VAR_3;
            VAR_6->layout = VAR_9;
            VAR_6->offset = VAR_10;
            VAR_5->pushc_size = VAR_11;
            return;
        }
    }







    bool VAR_12 = !(VAR_5->ra->caps & VAR_1) || !VAR_7;
    if (VAR_12 && VAR_5->ra->glsl_version >= 440 && (VAR_5->ra->caps & VAR_0)) {
        VAR_6->type = VAR_4;
        VAR_6->layout = VAR_5->ra->fns->uniform_layout(&VAR_6->input);
        VAR_6->offset = FUNC_0(VAR_5->ubo_size, VAR_6->layout.align);
        VAR_5->ubo_size = VAR_6->offset + VAR_6->layout.size;
        return;
    }


    FUNC_1(VAR_5->ra->caps & VAR_1);
    VAR_6->type = VAR_2;
}
