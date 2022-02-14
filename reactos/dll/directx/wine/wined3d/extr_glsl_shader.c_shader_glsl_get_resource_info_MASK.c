
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wined3d_shader_resource_info {int dummy; } ;
struct wined3d_shader_register {scalar_t__ type; TYPE_1__* idx; } ;
struct wined3d_shader_reg_maps {struct wined3d_shader_resource_info const* uav_resource_info; struct wined3d_shader_resource_info const* resource_info; } ;
struct wined3d_shader_instruction {TYPE_2__* ctx; } ;
struct TYPE_4__ {struct wined3d_shader_reg_maps* reg_maps; } ;
struct TYPE_3__ {unsigned int offset; } ;


 unsigned int FUNC_0 (struct wined3d_shader_resource_info const*) ;
 int FUNC_1 (char*,unsigned int) ;
 int FUNC_2 (char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static const struct wined3d_shader_resource_info *FUNC_3(
        const struct wined3d_shader_instruction *VAR_2, const struct wined3d_shader_register *VAR_3)
{
    const struct wined3d_shader_reg_maps *VAR_4 = VAR_2->ctx->reg_maps;
    unsigned int VAR_5 = VAR_3->idx[0].offset;

    if (VAR_3->type == VAR_0)
    {
        if (VAR_5 >= FUNC_0(VAR_4->resource_info))
        {
            FUNC_1("Invalid resource index %u.\n", VAR_5);
            return ((void*)0);
        }
        return &VAR_4->resource_info[VAR_5];
    }

    if (VAR_3->type == VAR_1)
    {
        if (VAR_5 >= FUNC_0(VAR_4->uav_resource_info))
        {
            FUNC_1("Invalid UAV index %u.\n", VAR_5);
            return ((void*)0);
        }
        return &VAR_4->uav_resource_info[VAR_5];
    }

    FUNC_2("Unhandled register type %#x.\n", VAR_3->type);
    return ((void*)0);
}
