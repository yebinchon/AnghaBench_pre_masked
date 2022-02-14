
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_state {scalar_t__* render_states; } ;
struct wined3d_context {int fog_source; scalar_t__ last_was_rhw; } ;
typedef enum fogsource { ____Placeholder_fogsource } fogsource ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (size_t) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,struct wined3d_context*,struct wined3d_state const*,scalar_t__) ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (struct wined3d_context*,struct wined3d_state const*,scalar_t__) ;
 int FUNC_4 (struct wined3d_context*,int ) ;
 int FUNC_5 (struct wined3d_context*,struct wined3d_state const*,int ) ;
 scalar_t__ FUNC_6 (struct wined3d_state const*) ;

__attribute__((used)) static void FUNC_7(struct wined3d_context *VAR_10, const struct wined3d_state *VAR_11, DWORD VAR_12)
{
    enum fogsource VAR_13;
    DWORD VAR_14 = VAR_11->render_states[VAR_6];
    DWORD VAR_15 = VAR_11->render_states[VAR_5];

    FUNC_2("context %p, state %p, state_id %#x.\n", VAR_10, VAR_11, VAR_12);

    if (!FUNC_4(VAR_10, FUNC_1(VAR_9)))
        FUNC_3(VAR_10, VAR_11, VAR_12);

    if (!VAR_11->render_states[VAR_4])
        return;

    if (VAR_11->render_states[VAR_7] == VAR_3)
    {
        if (FUNC_6(VAR_11))
        {
            VAR_13 = VAR_2;
        }
        else
        {
            if (VAR_11->render_states[VAR_8] == VAR_3 || VAR_10->last_was_rhw)
                VAR_13 = VAR_0;
            else
                VAR_13 = VAR_1;
        }
    }
    else
    {
        VAR_13 = VAR_1;
    }

    if (VAR_13 != VAR_10->fog_source || VAR_14 == VAR_15)
    {
        VAR_10->fog_source = VAR_13;
        FUNC_5(VAR_10, VAR_11, FUNC_0(VAR_6));
    }
}
