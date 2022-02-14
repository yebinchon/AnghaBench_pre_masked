
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct wined3d_shader_version {int type; } ;
struct wined3d_shader_reg_maps {TYPE_5__* uav_resource_info; struct wined3d_shader_version shader_version; } ;
struct wined3d_shader_instruction {TYPE_4__* ctx; int * src; TYPE_3__* dst; } ;
struct glsl_src_param {int param_str; } ;
typedef enum wined3d_shader_resource_type { ____Placeholder_wined3d_shader_resource_type } wined3d_shader_resource_type ;
typedef enum wined3d_data_type { ____Placeholder_wined3d_data_type } wined3d_data_type ;
struct TYPE_11__ {int type; int data_type; unsigned int coord_size; } ;
struct TYPE_10__ {int buffer; struct wined3d_shader_reg_maps* reg_maps; } ;
struct TYPE_8__ {TYPE_1__* idx; } ;
struct TYPE_9__ {TYPE_2__ reg; } ;
struct TYPE_7__ {unsigned int offset; } ;
typedef unsigned int DWORD ;


 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (char*,int) ;
 int VAR_0 ;
 TYPE_5__* VAR_1 ;
 int FUNC_2 (int ,char*,int ,unsigned int,int ,int ) ;
 int FUNC_3 (struct wined3d_shader_instruction const*,int *,unsigned int,struct glsl_src_param*) ;
 int FUNC_4 (struct wined3d_shader_instruction const*,int *,int ,struct glsl_src_param*,int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(const struct wined3d_shader_instruction *VAR_2)
{
    const struct wined3d_shader_reg_maps *VAR_3 = VAR_2->ctx->reg_maps;
    const struct wined3d_shader_version *VAR_4 = &VAR_3->shader_version;
    struct glsl_src_param VAR_5, VAR_6;
    enum wined3d_shader_resource_type VAR_7;
    enum wined3d_data_type VAR_8;
    unsigned int VAR_9;
    DWORD VAR_10;

    VAR_9 = VAR_2->dst[0].reg.idx[0].offset;
    if (VAR_9 >= FUNC_0(VAR_3->uav_resource_info))
    {
        FUNC_1("Invalid UAV index %u.\n", VAR_9);
        return;
    }
    VAR_7 = VAR_3->uav_resource_info[VAR_9].type;
    if (VAR_7 >= FUNC_0(VAR_1))
    {
        FUNC_1("Unexpected resource type %#x.\n", VAR_7);
        return;
    }
    VAR_8 = VAR_3->uav_resource_info[VAR_9].data_type;
    VAR_10 = (1u << VAR_1[VAR_7].coord_size) - 1;

    FUNC_3(VAR_2, &VAR_2->src[0], VAR_10, &VAR_5);
    FUNC_4(VAR_2, &VAR_2->src[1], VAR_0, &VAR_6, VAR_8);
    FUNC_2(VAR_2->ctx->buffer, "imageStore(%s_image%u, %s, %s);\n",
            FUNC_5(VAR_4->type), VAR_9,
            VAR_5.param_str, VAR_6.param_str);
}
