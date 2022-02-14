
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct wined3d_state {int * unordered_access_view; int * shader; scalar_t__ index_buffer; TYPE_1__* streams; struct wined3d_fb_state* fb; } ;
struct TYPE_11__ {scalar_t__ combined_samplers; scalar_t__ graphics_samplers; int buffers; } ;
struct wined3d_gl_info {TYPE_5__ limits; int * supported; } ;
struct wined3d_fb_state {int depth_stencil; int render_targets; } ;
struct wined3d_device {int shader_priv; TYPE_4__* shader_backend; } ;
struct TYPE_9__ {int use_map; scalar_t__ all_vbo; TYPE_2__* elements; } ;
struct wined3d_context {unsigned int numDirtyEntries; int* dirtyArray; unsigned int* isStateDirty; unsigned int shader_update_mask; int update_compute_shader_resource_bindings; int update_compute_unordered_access_view_bindings; int last_was_blit; scalar_t__ update_unordered_access_view_bindings; scalar_t__ update_shader_resource_bindings; scalar_t__ constant_update_mask; TYPE_3__ stream_info; struct wined3d_gl_info* gl_info; struct StateEntry* state_table; } ;
struct StateEntry {int (* apply ) (struct wined3d_context*,struct wined3d_state const*,int) ;} ;
typedef int WORD ;
struct TYPE_12__ {scalar_t__ offscreen_rendering_mode; } ;
struct TYPE_10__ {int (* shader_load_constants ) (int ,struct wined3d_context*,struct wined3d_state const*) ;int (* shader_select ) (int ,struct wined3d_context*,struct wined3d_state const*) ;} ;
struct TYPE_8__ {size_t stream_idx; } ;
struct TYPE_7__ {scalar_t__ buffer; } ;
typedef int DWORD ;
typedef unsigned int BYTE ;
typedef int BOOL ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 size_t VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (struct wined3d_context*,struct wined3d_state const*,unsigned int) ;
 int FUNC_3 (struct wined3d_context*,int ,int ) ;
 int FUNC_4 (struct wined3d_context*,int ) ;
 int FUNC_5 (struct wined3d_context*,struct wined3d_state const*,unsigned int) ;
 int FUNC_6 (struct wined3d_context*,struct wined3d_state const*) ;
 int FUNC_7 (struct wined3d_context*,int ,int ) ;
 int FUNC_8 (struct wined3d_context*,struct wined3d_state const*) ;
 int FUNC_9 (struct wined3d_context*,int ) ;
 int FUNC_10 (struct wined3d_context*,struct wined3d_state const*) ;
 int FUNC_11 (struct wined3d_context*,struct wined3d_state const*) ;
 int FUNC_12 (struct wined3d_context*,int ) ;
 int FUNC_13 (int ,int ,int ) ;
 scalar_t__ FUNC_14 (struct wined3d_context*,int ) ;
 int FUNC_15 (struct wined3d_context*,struct wined3d_state const*,int) ;
 int FUNC_16 (int ,struct wined3d_context*,struct wined3d_state const*) ;
 int FUNC_17 (int ,struct wined3d_context*,struct wined3d_state const*) ;
 int FUNC_18 (scalar_t__,struct wined3d_context*,struct wined3d_state const*) ;
 int FUNC_19 (scalar_t__,struct wined3d_context*) ;
 TYPE_6__ VAR_14 ;

__attribute__((used)) static BOOL FUNC_20(struct wined3d_context *VAR_15,
        const struct wined3d_device *VAR_16, const struct wined3d_state *VAR_17)
{
    const struct StateEntry *VAR_18 = VAR_15->state_table;
    const struct wined3d_gl_info *VAR_19 = VAR_15->gl_info;
    const struct wined3d_fb_state *VAR_20 = VAR_17->fb;
    unsigned int VAR_21;
    WORD VAR_22;

    if (!FUNC_13(VAR_19->limits.buffers, VAR_20->render_targets, VAR_20->depth_stencil))
    {
        if (!VAR_19->supported[VAR_0])
        {
            FUNC_0("OpenGL implementation does not support framebuffers with no attachments.\n");
            return VAR_2;
        }

        FUNC_9(VAR_15, VAR_8);
    }

    if (VAR_14.offscreen_rendering_mode == VAR_4 && FUNC_14(VAR_15, VAR_5))
    {
        FUNC_12(VAR_15, VAR_20->depth_stencil);
    }




    FUNC_11(VAR_15, VAR_17);
    FUNC_8(VAR_15, VAR_17);
    FUNC_5(VAR_15, VAR_17, ~(1u << VAR_10));
    FUNC_7(VAR_15, VAR_17->shader[VAR_12],
            VAR_17->unordered_access_view[VAR_9]);
    FUNC_6(VAR_15, VAR_17);




    if (FUNC_14(VAR_15, VAR_7) || FUNC_14(VAR_15, VAR_6)
            || FUNC_14(VAR_15, FUNC_1(VAR_13)))
    {
        FUNC_10(VAR_15, VAR_17);
    }
    else
    {
        for (VAR_21 = 0, VAR_22 = VAR_15->stream_info.use_map; VAR_22; VAR_22 >>= 1, ++VAR_21)
        {
            if (VAR_22 & 1)
                FUNC_18(VAR_17->streams[VAR_15->stream_info.elements[VAR_21].stream_idx].buffer,
                        VAR_15, VAR_17);
        }

        if (FUNC_14(VAR_15, VAR_6))
            FUNC_10(VAR_15, VAR_17);
    }
    if (VAR_17->index_buffer)
    {
        if (VAR_15->stream_info.all_vbo)
            FUNC_18(VAR_17->index_buffer, VAR_15, VAR_17);
        else
            FUNC_19(VAR_17->index_buffer, VAR_15);
    }

    for (VAR_21 = 0; VAR_21 < VAR_15->numDirtyEntries; ++VAR_21)
    {
        DWORD VAR_23 = VAR_15->dirtyArray[VAR_21];
        DWORD VAR_24 = VAR_23 / (sizeof(*VAR_15->isStateDirty) * VAR_1);
        BYTE VAR_25 = VAR_23 & ((sizeof(*VAR_15->isStateDirty) * VAR_1) - 1);
        VAR_15->isStateDirty[VAR_24] &= ~(1u << VAR_25);
        VAR_18[VAR_23].apply(VAR_15, VAR_17, VAR_23);
    }

    if (VAR_15->shader_update_mask & ~(1u << VAR_10))
    {
        VAR_16->shader_backend->shader_select(VAR_16->shader_priv, VAR_15, VAR_17);
        VAR_15->shader_update_mask &= 1u << VAR_10;
    }

    if (VAR_15->constant_update_mask)
    {
        VAR_16->shader_backend->shader_load_constants(VAR_16->shader_priv, VAR_15, VAR_17);
        VAR_15->constant_update_mask = 0;
    }

    if (VAR_15->update_shader_resource_bindings)
    {
        for (VAR_21 = 0; VAR_21 < VAR_11; ++VAR_21)
            FUNC_2(VAR_15, VAR_17, VAR_21);
        VAR_15->update_shader_resource_bindings = 0;
        if (VAR_19->limits.combined_samplers == VAR_19->limits.graphics_samplers)
            VAR_15->update_compute_shader_resource_bindings = 1;
    }

    if (VAR_15->update_unordered_access_view_bindings)
    {
        FUNC_3(VAR_15,
                VAR_17->shader[VAR_12],
                VAR_17->unordered_access_view[VAR_9]);
        VAR_15->update_unordered_access_view_bindings = 0;
        VAR_15->update_compute_unordered_access_view_bindings = 1;
    }

    if (VAR_14.offscreen_rendering_mode == VAR_4)
    {
        FUNC_4(VAR_15, VAR_3);
    }

    VAR_15->numDirtyEntries = 0;
    VAR_15->last_was_blit = VAR_2;

    return VAR_8;
}
