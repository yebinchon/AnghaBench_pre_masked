
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_gl_info {int dummy; } ;
struct shader_caps {float ps_1x_max_value; scalar_t__ wined3d_caps; scalar_t__ varying_count; scalar_t__ ps_uniform_count; scalar_t__ vs_uniform_count; scalar_t__ cs_version; scalar_t__ ps_version; scalar_t__ gs_version; scalar_t__ ds_version; scalar_t__ hs_version; scalar_t__ vs_version; } ;



__attribute__((used)) static void FUNC_0(const struct wined3d_gl_info *VAR_0, struct shader_caps *VAR_1)
{

    VAR_1->vs_version = 0;
    VAR_1->hs_version = 0;
    VAR_1->ds_version = 0;
    VAR_1->gs_version = 0;
    VAR_1->ps_version = 0;
    VAR_1->cs_version = 0;
    VAR_1->vs_uniform_count = 0;
    VAR_1->ps_uniform_count = 0;
    VAR_1->ps_1x_max_value = 0.0f;
    VAR_1->varying_count = 0;
    VAR_1->wined3d_caps = 0;
}
