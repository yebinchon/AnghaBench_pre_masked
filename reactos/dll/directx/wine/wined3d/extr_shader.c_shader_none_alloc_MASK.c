
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_vertex_pipe_ops {int (* vp_free ) (struct wined3d_device*) ;void* (* vp_alloc ) (int *,struct shader_none_priv*) ;} ;
struct wined3d_device {struct shader_none_priv* shader_priv; void* fragment_priv; void* vertex_priv; TYPE_1__* adapter; } ;
struct shader_none_priv {int ffp_proj_control; struct fragment_pipeline const* fragment_pipe; struct wined3d_vertex_pipe_ops const* vertex_pipe; } ;
struct fragment_pipeline {int (* get_caps ) (int *,struct fragment_caps*) ;void* (* alloc_private ) (int *,struct shader_none_priv*) ;} ;
struct fragment_caps {int wined3d_caps; } ;
struct TYPE_2__ {int gl_info; } ;
typedef int HRESULT ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct shader_none_priv* FUNC_1 (int) ;
 int FUNC_2 (struct shader_none_priv*) ;
 int VAR_4 ;
 void* FUNC_3 (int *,struct shader_none_priv*) ;
 void* FUNC_4 (int *,struct shader_none_priv*) ;
 int FUNC_5 (struct wined3d_device*) ;
 int FUNC_6 (int *,struct fragment_caps*) ;

__attribute__((used)) static HRESULT FUNC_7(struct wined3d_device *VAR_5, const struct wined3d_vertex_pipe_ops *VAR_6,
        const struct fragment_pipeline *VAR_7)
{
    struct fragment_caps VAR_8;
    void *VAR_9, *VAR_10;
    struct shader_none_priv *VAR_11;

    if (!(VAR_11 = FUNC_1(sizeof(*VAR_11))))
        return VAR_1;

    if (!(VAR_9 = VAR_6->vp_alloc(&VAR_4, VAR_11)))
    {
        FUNC_0("Failed to initialize vertex pipe.\n");
        FUNC_2(VAR_11);
        return VAR_0;
    }

    if (!(VAR_10 = VAR_7->alloc_private(&VAR_4, VAR_11)))
    {
        FUNC_0("Failed to initialize fragment pipe.\n");
        VAR_6->vp_free(VAR_5);
        FUNC_2(VAR_11);
        return VAR_0;
    }

    VAR_11->vertex_pipe = VAR_6;
    VAR_11->fragment_pipe = VAR_7;
    VAR_7->get_caps(&VAR_5->adapter->gl_info, &VAR_8);
    VAR_11->ffp_proj_control = VAR_8.wined3d_caps & VAR_2;

    VAR_5->vertex_priv = VAR_9;
    VAR_5->fragment_priv = VAR_10;
    VAR_5->shader_priv = VAR_11;

    return VAR_3;
}
