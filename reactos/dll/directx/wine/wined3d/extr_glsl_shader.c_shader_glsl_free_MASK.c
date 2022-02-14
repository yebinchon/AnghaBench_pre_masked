
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wined3d_device {struct shader_glsl_priv* shader_priv; } ;
struct shader_glsl_priv {TYPE_2__* vertex_pipe; TYPE_1__* fragment_pipe; int shader_buffer; int string_buffers; struct shader_glsl_priv* stack; int vconst_heap; int pconst_heap; int program_lookup; } ;
struct TYPE_4__ {int (* vp_free ) (struct wined3d_device*) ;} ;
struct TYPE_3__ {int (* free_private ) (struct wined3d_device*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct shader_glsl_priv*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct wined3d_device*) ;
 int FUNC_5 (struct wined3d_device*) ;
 int FUNC_6 (int *,int *,int *) ;

__attribute__((used)) static void FUNC_7(struct wined3d_device *VAR_0)
{
    struct shader_glsl_priv *VAR_1 = VAR_0->shader_priv;

    FUNC_6(&VAR_1->program_lookup, ((void*)0), ((void*)0));
    FUNC_0(&VAR_1->pconst_heap);
    FUNC_0(&VAR_1->vconst_heap);
    FUNC_1(VAR_1->stack);
    FUNC_3(&VAR_1->string_buffers);
    FUNC_2(&VAR_1->shader_buffer);
    VAR_1->fragment_pipe->free_private(VAR_0);
    VAR_1->vertex_pipe->vp_free(VAR_0);

    FUNC_1(VAR_0->shader_priv);
    VAR_0->shader_priv = ((void*)0);
}
