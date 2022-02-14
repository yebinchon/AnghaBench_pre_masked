
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wined3d_vertex_pipe_ops {int (* vp_free ) (struct wined3d_device*) ;void* (* vp_alloc ) (int *,struct shader_glsl_priv*) ;} ;
struct wined3d_gl_info {int dummy; } ;
struct wined3d_device {struct shader_glsl_priv* shader_priv; void* fragment_priv; void* vertex_priv; TYPE_2__* wined3d; TYPE_1__* adapter; } ;
struct shader_glsl_priv {int next_constant_version; int ffp_proj_control; int legacy_lighting; int shader_buffer; struct shader_glsl_priv* stack; int vconst_heap; int pconst_heap; struct fragment_pipeline const* fragment_pipe; struct wined3d_vertex_pipe_ops const* vertex_pipe; int program_lookup; int string_buffers; } ;
struct fragment_pipeline {int (* free_private ) (struct wined3d_device*) ;int (* get_caps ) (struct wined3d_gl_info const*,struct fragment_caps*) ;void* (* alloc_private ) (int *,struct shader_glsl_priv*) ;} ;
struct fragment_caps {int wined3d_caps; } ;
struct TYPE_4__ {int flags; } ;
struct TYPE_3__ {struct wined3d_gl_info gl_info; } ;
typedef scalar_t__ SIZE_T ;
typedef int HRESULT ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 struct shader_glsl_priv* FUNC_3 (int) ;
 struct shader_glsl_priv* FUNC_4 (scalar_t__,int) ;
 int FUNC_5 (struct shader_glsl_priv*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 void* FUNC_10 (int *,struct shader_glsl_priv*) ;
 void* FUNC_11 (int *,struct shader_glsl_priv*) ;
 int FUNC_12 (struct wined3d_device*) ;
 int FUNC_13 (struct wined3d_gl_info const*,struct fragment_caps*) ;
 int FUNC_14 (struct wined3d_device*) ;
 int FUNC_15 (struct wined3d_device*) ;
 int FUNC_16 (int *,int ) ;
 scalar_t__ FUNC_17 (int ) ;

__attribute__((used)) static HRESULT FUNC_18(struct wined3d_device *VAR_9, const struct wined3d_vertex_pipe_ops *VAR_10,
        const struct fragment_pipeline *VAR_11)
{
    SIZE_T VAR_12 = FUNC_17(FUNC_6(VAR_5, VAR_4)) + 1;
    const struct wined3d_gl_info *VAR_13 = &VAR_9->adapter->gl_info;
    struct fragment_caps VAR_14;
    void *VAR_15, *VAR_16;
    struct shader_glsl_priv *VAR_17;

    if (!(VAR_17 = FUNC_3(sizeof(*VAR_17))))
        return VAR_1;

    FUNC_9(&VAR_17->string_buffers);

    if (!(VAR_15 = VAR_10->vp_alloc(&VAR_8, VAR_17)))
    {
        FUNC_0("Failed to initialize vertex pipe.\n");
        FUNC_5(VAR_17);
        return VAR_0;
    }

    if (!(VAR_16 = VAR_11->alloc_private(&VAR_8, VAR_17)))
    {
        FUNC_0("Failed to initialize fragment pipe.\n");
        VAR_10->vp_free(VAR_9);
        FUNC_5(VAR_17);
        return VAR_0;
    }

    if (!FUNC_8(&VAR_17->shader_buffer))
    {
        FUNC_0("Failed to initialize shader buffer.\n");
        goto fail;
    }

    if (!(VAR_17->stack = FUNC_4(VAR_12, sizeof(*VAR_17->stack))))
    {
        FUNC_0("Failed to allocate memory.\n");
        goto fail;
    }

    if (!FUNC_2(&VAR_17->vconst_heap, VAR_5))
    {
        FUNC_0("Failed to initialize vertex shader constant heap\n");
        goto fail;
    }

    if (!FUNC_2(&VAR_17->pconst_heap, VAR_4))
    {
        FUNC_0("Failed to initialize pixel shader constant heap\n");
        goto fail;
    }

    FUNC_16(&VAR_17->program_lookup, VAR_7);

    VAR_17->next_constant_version = 1;
    VAR_17->vertex_pipe = VAR_10;
    VAR_17->fragment_pipe = VAR_11;
    VAR_11->get_caps(VAR_13, &VAR_14);
    VAR_17->ffp_proj_control = VAR_14.wined3d_caps & VAR_2;
    VAR_17->legacy_lighting = VAR_9->wined3d->flags & VAR_3;

    VAR_9->vertex_priv = VAR_15;
    VAR_9->fragment_priv = VAR_16;
    VAR_9->shader_priv = VAR_17;

    return VAR_6;

fail:
    FUNC_1(&VAR_17->pconst_heap);
    FUNC_1(&VAR_17->vconst_heap);
    FUNC_5(VAR_17->stack);
    FUNC_7(&VAR_17->shader_buffer);
    VAR_11->free_private(VAR_9);
    VAR_10->vp_free(VAR_9);
    FUNC_5(VAR_17);
    return VAR_1;
}
