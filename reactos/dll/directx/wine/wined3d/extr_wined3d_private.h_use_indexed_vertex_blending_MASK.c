
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_stream_info {int use_map; } ;
struct wined3d_state {scalar_t__* render_states; } ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static inline BOOL FUNC_0(const struct wined3d_state *VAR_7, const struct wined3d_stream_info *VAR_8)
{
    if (!VAR_7->render_states[VAR_4])
        return VAR_0;

    if (VAR_7->render_states[VAR_5] == VAR_6)
        return VAR_0;

    if (!(VAR_8->use_map & (1 << VAR_2)) || !(VAR_8->use_map & (1 << VAR_3)))
        return VAR_0;

    return VAR_1;
}
