
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wined3d_state {TYPE_3__** shader; } ;
struct wined3d_shader_resource_info {scalar_t__ type; } ;
struct TYPE_4__ {unsigned int ffp_blend_stages; } ;
struct wined3d_d3d_info {TYPE_1__ limits; } ;
struct wined3d_context {unsigned int* tex_unit_map; struct wined3d_d3d_info* d3d_info; } ;
struct TYPE_5__ {struct wined3d_shader_resource_info* resource_info; } ;
struct TYPE_6__ {TYPE_2__ reg_maps; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 size_t VAR_1 ;
 int FUNC_1 (struct wined3d_context*,int ) ;
 int FUNC_2 (struct wined3d_context*,unsigned int) ;
 int FUNC_3 (struct wined3d_context*,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_4(struct wined3d_context *VAR_2, const struct wined3d_state *VAR_3)
{
    const struct wined3d_d3d_info *VAR_4 = VAR_2->d3d_info;
    const struct wined3d_shader_resource_info *VAR_5 =
            VAR_3->shader[VAR_1]->reg_maps.resource_info;
    unsigned int VAR_6;

    for (VAR_6 = 0; VAR_6 < VAR_0; ++VAR_6)
    {
        if (VAR_5[VAR_6].type && VAR_2->tex_unit_map[VAR_6] != VAR_6)
        {
            FUNC_3(VAR_2, VAR_6, VAR_6);
            FUNC_1(VAR_2, FUNC_0(VAR_6));
            if (VAR_6 < VAR_4->limits.ffp_blend_stages)
                FUNC_2(VAR_2, VAR_6);
        }
    }
}
