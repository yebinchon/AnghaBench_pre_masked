
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_context {TYPE_1__* device; } ;
struct shader_arb_priv {struct wined3d_context* last_context; } ;
struct TYPE_2__ {struct shader_arb_priv* shader_priv; } ;



__attribute__((used)) static void FUNC_0(struct wined3d_context *VAR_0)
{
    struct shader_arb_priv *VAR_1;

    VAR_1 = VAR_0->device->shader_priv;
    if (VAR_1->last_context == VAR_0)
        VAR_1->last_context = ((void*)0);
}
