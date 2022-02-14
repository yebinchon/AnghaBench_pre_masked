
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int glsl_vs_float_constants; unsigned int glsl_ps_float_constants; int glsl_varyings; } ;
struct wined3d_gl_info {TYPE_1__ limits; scalar_t__* supported; } ;
struct shader_caps {float ps_1x_max_value; int wined3d_caps; int varying_count; void* ps_uniform_count; void* vs_uniform_count; void* ps_version; void* vs_version; void* cs_version; void* gs_version; void* ds_version; void* hs_version; } ;
struct TYPE_4__ {int max_sm_cs; int max_sm_ps; int max_sm_gs; int max_sm_ds; int max_sm_hs; int max_sm_vs; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 float VAR_2 ;
 int FUNC_0 (char*,unsigned int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_1 (int ,unsigned int) ;
 unsigned int FUNC_2 (struct wined3d_gl_info const*) ;
 TYPE_2__ VAR_7 ;

__attribute__((used)) static void FUNC_3(const struct wined3d_gl_info *VAR_8, struct shader_caps *VAR_9)
{
    unsigned int VAR_10 = FUNC_2(VAR_8);

    FUNC_0("Shader model %u.\n", VAR_10);

    VAR_9->vs_version = FUNC_1(VAR_7.max_sm_vs, VAR_10);
    VAR_9->hs_version = FUNC_1(VAR_7.max_sm_hs, VAR_10);
    VAR_9->ds_version = FUNC_1(VAR_7.max_sm_ds, VAR_10);
    VAR_9->gs_version = FUNC_1(VAR_7.max_sm_gs, VAR_10);
    VAR_9->ps_version = FUNC_1(VAR_7.max_sm_ps, VAR_10);
    VAR_9->cs_version = FUNC_1(VAR_7.max_sm_cs, VAR_10);

    VAR_9->vs_version = VAR_8->supported[VAR_1] ? VAR_9->vs_version : 0;
    VAR_9->ps_version = VAR_8->supported[VAR_0] ? VAR_9->ps_version : 0;

    VAR_9->vs_uniform_count = FUNC_1(VAR_4, VAR_8->limits.glsl_vs_float_constants);
    VAR_9->ps_uniform_count = FUNC_1(VAR_3, VAR_8->limits.glsl_ps_float_constants);
    VAR_9->varying_count = VAR_8->limits.glsl_varyings;
    if (VAR_10 >= 4)
        VAR_9->ps_1x_max_value = VAR_2;
    else
        VAR_9->ps_1x_max_value = 1024.0f;




    VAR_9->wined3d_caps = VAR_6
            | VAR_5;
}
