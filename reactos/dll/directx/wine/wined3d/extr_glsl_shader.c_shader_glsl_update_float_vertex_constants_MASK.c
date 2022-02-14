
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_device {struct shader_glsl_priv* shader_priv; } ;
struct constant_heap {int dummy; } ;
struct shader_glsl_priv {int next_constant_version; struct constant_heap vconst_heap; } ;
typedef scalar_t__ UINT ;


 int FUNC_0 (struct constant_heap*,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_1(struct wined3d_device *VAR_0, UINT VAR_1, UINT VAR_2)
{
    struct shader_glsl_priv *VAR_3 = VAR_0->shader_priv;
    struct constant_heap *VAR_4 = &VAR_3->vconst_heap;
    UINT VAR_5;

    for (VAR_5 = VAR_1; VAR_5 < VAR_2 + VAR_1; ++VAR_5)
    {
        FUNC_0(VAR_4, VAR_5, VAR_3->next_constant_version);
    }
}
