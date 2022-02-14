
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wined3d_state {TYPE_3__** shader; } ;
struct wined3d_shader_resource_info {scalar_t__ type; } ;
struct TYPE_4__ {int graphics_samplers; } ;
struct wined3d_gl_info {TYPE_1__ limits; } ;
struct wined3d_context {int* tex_unit_map; struct wined3d_gl_info* gl_info; } ;
struct TYPE_5__ {struct wined3d_shader_resource_info* resource_info; } ;
struct TYPE_6__ {TYPE_2__ reg_maps; } ;
typedef size_t DWORD ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (size_t) ;
 int FUNC_1 (char*,int) ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct wined3d_context*,int ) ;
 int FUNC_3 (struct wined3d_context*,size_t,int) ;
 scalar_t__ FUNC_4 (struct wined3d_context*,struct wined3d_shader_resource_info const*,int) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void FUNC_6(struct wined3d_context *VAR_6, BOOL VAR_7, const struct wined3d_state *VAR_8)
{
    const struct wined3d_shader_resource_info *VAR_9 =
            VAR_8->shader[VAR_4]->reg_maps.resource_info;
    const struct wined3d_shader_resource_info *VAR_10 = ((void*)0);
    const struct wined3d_gl_info *VAR_11 = VAR_6->gl_info;
    int VAR_12 = FUNC_5(VAR_0, VAR_11->limits.graphics_samplers) - 1;
    int VAR_13;




    if (VAR_7)
        VAR_10 = VAR_8->shader[VAR_3]->reg_maps.resource_info;

    for (VAR_13 = 0; VAR_13 < VAR_2; ++VAR_13)
    {
        DWORD VAR_14 = VAR_13 + VAR_1;
        if (VAR_9[VAR_13].type)
        {
            while (VAR_12 >= 0)
            {
                if (FUNC_4(VAR_6, VAR_10, VAR_12))
                {
                    if (VAR_6->tex_unit_map[VAR_14] != VAR_12)
                    {
                        FUNC_3(VAR_6, VAR_14, VAR_12);
                        FUNC_2(VAR_6, FUNC_0(VAR_14));
                    }

                    --VAR_12;
                    break;
                }

                --VAR_12;
            }
            if (VAR_6->tex_unit_map[VAR_14] == VAR_5)
                FUNC_1("Couldn't find a free texture unit for vertex sampler %u.\n", VAR_13);
        }
    }
}
