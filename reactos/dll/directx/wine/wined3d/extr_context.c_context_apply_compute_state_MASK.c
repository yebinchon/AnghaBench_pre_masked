
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wined3d_state {int * unordered_access_view; int * shader; } ;
struct TYPE_4__ {scalar_t__ combined_samplers; scalar_t__ graphics_samplers; } ;
struct wined3d_gl_info {TYPE_2__ limits; } ;
struct wined3d_device {int shader_priv; TYPE_1__* shader_backend; } ;
struct wined3d_context {unsigned int* dirty_compute_states; unsigned int shader_update_mask; int update_shader_resource_bindings; int update_unordered_access_view_bindings; int last_was_blit; scalar_t__ update_compute_unordered_access_view_bindings; scalar_t__ update_compute_shader_resource_bindings; struct wined3d_gl_info* gl_info; struct StateEntry* state_table; } ;
struct StateEntry {int (* apply ) (struct wined3d_context*,struct wined3d_state const*,unsigned int) ;} ;
struct TYPE_3__ {int (* shader_select_compute ) (int ,struct wined3d_context*,struct wined3d_state const*) ;} ;


 unsigned int FUNC_0 (unsigned int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_1 (struct wined3d_context*,int ,int ) ;
 int FUNC_2 (struct wined3d_context*,struct wined3d_state const*,unsigned int) ;
 int FUNC_3 (struct wined3d_context*,int ,int ) ;
 int FUNC_4 (struct wined3d_context*,int ) ;
 int FUNC_5 (struct wined3d_context*,struct wined3d_state const*,unsigned int) ;
 int FUNC_6 (struct wined3d_context*,int ,int ) ;
 int FUNC_7 (unsigned int*,int ,int) ;
 int FUNC_8 (struct wined3d_context*,struct wined3d_state const*,unsigned int) ;
 int FUNC_9 (int ,struct wined3d_context*,struct wined3d_state const*) ;
 unsigned int FUNC_10 (unsigned int*) ;

__attribute__((used)) static void FUNC_11(struct wined3d_context *VAR_7,
        const struct wined3d_device *VAR_8, const struct wined3d_state *VAR_9)
{
    const struct StateEntry *VAR_10 = VAR_7->state_table;
    const struct wined3d_gl_info *VAR_11 = VAR_7->gl_info;
    unsigned int VAR_12, VAR_13;

    FUNC_5(VAR_7, VAR_9, 1u << VAR_6);
    FUNC_6(VAR_7, VAR_9->shader[VAR_6],
            VAR_9->unordered_access_view[VAR_5]);

    for (VAR_13 = 0, VAR_12 = VAR_3; VAR_13 < FUNC_0(VAR_7->dirty_compute_states); ++VAR_13)
    {
        unsigned int VAR_14 = VAR_7->dirty_compute_states[VAR_13];
        while (VAR_14)
        {
            unsigned int VAR_15 = VAR_12 + FUNC_10(&VAR_14);
            VAR_10[VAR_15].apply(VAR_7, VAR_9, VAR_15);
        }
        VAR_12 += sizeof(*VAR_7->dirty_compute_states) * VAR_0;
    }
    FUNC_7(VAR_7->dirty_compute_states, 0, sizeof(*VAR_7->dirty_compute_states));

    if (VAR_7->shader_update_mask & (1u << VAR_6))
    {
        VAR_8->shader_backend->shader_select_compute(VAR_8->shader_priv, VAR_7, VAR_9);
        VAR_7->shader_update_mask &= ~(1u << VAR_6);
    }

    if (VAR_7->update_compute_shader_resource_bindings)
    {
        FUNC_2(VAR_7, VAR_9, VAR_6);
        VAR_7->update_compute_shader_resource_bindings = 0;
        if (VAR_11->limits.combined_samplers == VAR_11->limits.graphics_samplers)
            VAR_7->update_shader_resource_bindings = 1;
    }

    if (VAR_7->update_compute_unordered_access_view_bindings)
    {
        FUNC_3(VAR_7,
                VAR_9->shader[VAR_6],
                VAR_9->unordered_access_view[VAR_5]);
        VAR_7->update_compute_unordered_access_view_bindings = 0;
        VAR_7->update_unordered_access_view_bindings = 1;
    }
    FUNC_1(VAR_7, VAR_2, 0);
    FUNC_4(VAR_7, VAR_4);

    VAR_7->last_was_blit = VAR_1;
}
