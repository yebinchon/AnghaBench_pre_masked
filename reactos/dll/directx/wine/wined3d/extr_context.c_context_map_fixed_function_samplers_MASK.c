
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_state {int dummy; } ;
struct TYPE_2__ {scalar_t__ ffp_textures; scalar_t__ ffp_blend_stages; } ;
struct wined3d_d3d_info {TYPE_1__ limits; } ;
struct wined3d_context {int fixed_function_usage_map; scalar_t__ lowest_disabled_stage; unsigned int* tex_unit_map; struct wined3d_d3d_info* d3d_info; } ;
typedef int WORD ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (struct wined3d_context*,int ) ;
 int FUNC_2 (struct wined3d_context*,unsigned int) ;
 int FUNC_3 (struct wined3d_context*,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_4(struct wined3d_context *VAR_0,
        const struct wined3d_state *VAR_1)
{
    const struct wined3d_d3d_info *VAR_2 = VAR_0->d3d_info;
    unsigned int VAR_3, VAR_4;
    WORD VAR_5;

    VAR_5 = VAR_0->fixed_function_usage_map;

    if (VAR_2->limits.ffp_textures == VAR_2->limits.ffp_blend_stages
            || VAR_0->lowest_disabled_stage <= VAR_2->limits.ffp_textures)
    {
        for (VAR_3 = 0; VAR_5; VAR_5 >>= 1, ++VAR_3)
        {
            if (!(VAR_5 & 1))
                continue;

            if (VAR_0->tex_unit_map[VAR_3] != VAR_3)
            {
                FUNC_3(VAR_0, VAR_3, VAR_3);
                FUNC_1(VAR_0, FUNC_0(VAR_3));
                FUNC_2(VAR_0, VAR_3);
            }
        }
        return;
    }


    VAR_4 = 0;
    for (VAR_3 = 0; VAR_5; VAR_5 >>= 1, ++VAR_3)
    {
        if (!(VAR_5 & 1))
            continue;

        if (VAR_0->tex_unit_map[VAR_3] != VAR_4)
        {
            FUNC_3(VAR_0, VAR_3, VAR_4);
            FUNC_1(VAR_0, FUNC_0(VAR_3));
            FUNC_2(VAR_0, VAR_3);
        }

        ++VAR_4;
    }
}
