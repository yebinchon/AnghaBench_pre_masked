
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_state {int** texture_states; } ;
struct wined3d_context {unsigned int fixed_function_usage_map; size_t lowest_disabled_stage; } ;
typedef enum wined3d_texture_op { ____Placeholder_wined3d_texture_op } wined3d_texture_op ;
typedef size_t UINT ;
typedef scalar_t__ DWORD ;


 size_t VAR_0 ;
 int FUNC_0 (size_t,size_t) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 int FUNC_1 (struct wined3d_context*,int ) ;

__attribute__((used)) static void FUNC_2(struct wined3d_context *VAR_18,
        const struct wined3d_state *VAR_19)
{
    UINT VAR_20, VAR_21, VAR_22;

    VAR_18->fixed_function_usage_map = 0;
    for (VAR_20 = 0; VAR_20 < VAR_0; ++VAR_20)
    {
        enum wined3d_texture_op VAR_23 = VAR_19->texture_states[VAR_20][VAR_17];
        enum wined3d_texture_op VAR_24 = VAR_19->texture_states[VAR_20][VAR_13];
        DWORD VAR_25 = VAR_19->texture_states[VAR_20][VAR_15] & VAR_1;
        DWORD VAR_26 = VAR_19->texture_states[VAR_20][VAR_16] & VAR_1;
        DWORD VAR_27 = VAR_19->texture_states[VAR_20][VAR_14] & VAR_1;
        DWORD VAR_28 = VAR_19->texture_states[VAR_20][VAR_11] & VAR_1;
        DWORD VAR_29 = VAR_19->texture_states[VAR_20][VAR_12] & VAR_1;
        DWORD VAR_30 = VAR_19->texture_states[VAR_20][VAR_10] & VAR_1;


        if (VAR_23 == VAR_5)
            break;

        if (((VAR_25 == VAR_2) && VAR_23 != VAR_9)
                || ((VAR_26 == VAR_2) && VAR_23 != VAR_8)
                || ((VAR_27 == VAR_2)
                    && (VAR_23 == VAR_7 || VAR_23 == VAR_6))
                || ((VAR_28 == VAR_2) && VAR_24 != VAR_9)
                || ((VAR_29 == VAR_2) && VAR_24 != VAR_8)
                || ((VAR_30 == VAR_2)
                    && (VAR_24 == VAR_7 || VAR_24 == VAR_6)))
            VAR_18->fixed_function_usage_map |= (1u << VAR_20);

        if ((VAR_23 == VAR_3 || VAR_23 == VAR_4)
                && VAR_20 < VAR_0 - 1)
            VAR_18->fixed_function_usage_map |= (1u << (VAR_20 + 1));
    }

    if (VAR_20 < VAR_18->lowest_disabled_stage)
    {
        VAR_21 = VAR_20;
        VAR_22 = VAR_18->lowest_disabled_stage;
    }
    else
    {
        VAR_21 = VAR_18->lowest_disabled_stage;
        VAR_22 = VAR_20;
    }

    VAR_18->lowest_disabled_stage = VAR_20;
    for (VAR_20 = VAR_21 + 1; VAR_20 < VAR_22; ++VAR_20)
    {
        FUNC_1(VAR_18, FUNC_0(VAR_20, VAR_17));
    }
}
