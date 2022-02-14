
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wined3d_device {struct shader_arb_priv* shader_priv; } ;
struct shader_arb_priv {TYPE_2__* vertex_pipe; TYPE_1__* fragment_pipe; int signature_tree; } ;
struct TYPE_4__ {int (* vp_free ) (struct wined3d_device*) ;} ;
struct TYPE_3__ {int (* free_private ) (struct wined3d_device*) ;} ;


 int FUNC_0 (struct shader_arb_priv*) ;
 int VAR_0 ;
 int FUNC_1 (struct wined3d_device*) ;
 int FUNC_2 (struct wined3d_device*) ;
 int FUNC_3 (int *,int ,int *) ;

__attribute__((used)) static void FUNC_4(struct wined3d_device *VAR_1)
{
    struct shader_arb_priv *VAR_2 = VAR_1->shader_priv;

    FUNC_3(&VAR_2->signature_tree, VAR_0, ((void*)0));
    VAR_2->fragment_pipe->free_private(VAR_1);
    VAR_2->vertex_pipe->vp_free(VAR_1);
    FUNC_0(VAR_1->shader_priv);
}
