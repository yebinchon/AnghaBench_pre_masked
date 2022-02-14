
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_state {scalar_t__* render_states; } ;
struct TYPE_2__ {scalar_t__ position_transformed; } ;
struct wined3d_context {unsigned int shader_update_mask; int fog_source; int constant_update_mask; TYPE_1__ stream_info; } ;
typedef enum fogsource { ____Placeholder_fogsource } fogsource ;
typedef scalar_t__ DWORD ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 unsigned int VAR_10 ;
 scalar_t__ FUNC_0 (struct wined3d_state const*) ;

__attribute__((used)) static void FUNC_1(struct wined3d_context *VAR_11,
        const struct wined3d_state *VAR_12, DWORD VAR_13)
{
    BOOL VAR_14 = FUNC_0(VAR_12);
    enum fogsource VAR_15;
    DWORD VAR_16 = VAR_12->render_states[VAR_6];
    DWORD VAR_17 = VAR_12->render_states[VAR_5];

    VAR_11->shader_update_mask |= 1u << VAR_10;

    if (!VAR_12->render_states[VAR_4])
        return;

    if (VAR_12->render_states[VAR_7] == VAR_3)
    {
        if (VAR_14)
            VAR_15 = VAR_2;
        else if (VAR_12->render_states[VAR_8] == VAR_3 || VAR_11->stream_info.position_transformed)
            VAR_15 = VAR_0;
        else
            VAR_15 = VAR_1;
    }
    else
    {
        VAR_15 = VAR_1;
    }

    if (VAR_15 != VAR_11->fog_source || VAR_16 == VAR_17)
    {
        VAR_11->fog_source = VAR_15;
        VAR_11->constant_update_mask |= VAR_9;
    }
}
