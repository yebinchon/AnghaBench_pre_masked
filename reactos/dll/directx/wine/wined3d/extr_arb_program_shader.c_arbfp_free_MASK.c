
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_device {struct shader_arb_priv* fragment_priv; int * shader_backend; TYPE_1__* adapter; } ;
struct shader_arb_priv {int use_arbfp_fixed_func; int fragment_shaders; } ;
struct TYPE_2__ {int gl_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct shader_arb_priv*) ;
 int FUNC_1 (int *,int ,int *) ;

__attribute__((used)) static void FUNC_2(struct wined3d_device *VAR_3)
{
    struct shader_arb_priv *VAR_4 = VAR_3->fragment_priv;

    FUNC_1(&VAR_4->fragment_shaders, VAR_2, &VAR_3->adapter->gl_info);
    VAR_4->use_arbfp_fixed_func = VAR_0;

    if (VAR_3->shader_backend != &VAR_1)
        FUNC_0(VAR_3->fragment_priv);
}
