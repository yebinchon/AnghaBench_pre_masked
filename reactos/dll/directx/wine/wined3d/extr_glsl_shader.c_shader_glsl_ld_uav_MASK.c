
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct wined3d_shader_version {int type; } ;
struct wined3d_shader_reg_maps {TYPE_6__* uav_resource_info; struct wined3d_shader_version shader_version; } ;
struct wined3d_shader_instruction {TYPE_3__* ctx; TYPE_4__* src; int * dst; } ;
struct glsl_src_param {int param_str; } ;
typedef enum wined3d_shader_resource_type { ____Placeholder_wined3d_shader_resource_type } wined3d_shader_resource_type ;
typedef enum wined3d_data_type { ____Placeholder_wined3d_data_type } wined3d_data_type ;
struct TYPE_12__ {int type; int data_type; unsigned int coord_size; } ;
struct TYPE_9__ {TYPE_1__* idx; } ;
struct TYPE_11__ {TYPE_2__ reg; } ;
struct TYPE_10__ {int buffer; struct wined3d_shader_reg_maps* reg_maps; } ;
struct TYPE_8__ {unsigned int offset; } ;
typedef unsigned int DWORD ;


 int FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_6__* VAR_2 ;
 int FUNC_2 (int ,char*,int ,unsigned int,int ,char*) ;
 int FUNC_3 (struct wined3d_shader_instruction const*,TYPE_4__*,unsigned int,struct glsl_src_param*) ;
 unsigned int FUNC_4 (int ,struct wined3d_shader_instruction const*,int *,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_4__*,int ,unsigned int,char*) ;

__attribute__((used)) static void FUNC_7(const struct wined3d_shader_instruction *VAR_3)
{
    const struct wined3d_shader_reg_maps *VAR_4 = VAR_3->ctx->reg_maps;
    const struct wined3d_shader_version *VAR_5 = &VAR_4->shader_version;
    enum wined3d_shader_resource_type VAR_6;
    struct glsl_src_param VAR_7;
    enum wined3d_data_type VAR_8;
    DWORD VAR_9, VAR_10;
    unsigned int VAR_11;
    char VAR_12[6];

    VAR_11 = VAR_3->src[1].reg.idx[0].offset;
    if (VAR_11 >= FUNC_0(VAR_4->uav_resource_info))
    {
        FUNC_1("Invalid UAV index %u.\n", VAR_11);
        return;
    }
    VAR_6 = VAR_4->uav_resource_info[VAR_11].type;
    if (VAR_6 >= FUNC_0(VAR_2))
    {
        FUNC_1("Unexpected resource type %#x.\n", VAR_6);
        VAR_6 = VAR_1;
    }
    VAR_8 = VAR_4->uav_resource_info[VAR_11].data_type;
    VAR_9 = (1u << VAR_2[VAR_6].coord_size) - 1;

    VAR_10 = FUNC_4(VAR_3->ctx->buffer, VAR_3, &VAR_3->dst[0], VAR_8);
    FUNC_6(&VAR_3->src[1], VAR_0, VAR_10, VAR_12);

    FUNC_3(VAR_3, &VAR_3->src[0], VAR_9, &VAR_7);
    FUNC_2(VAR_3->ctx->buffer, "imageLoad(%s_image%u, %s)%s);\n",
            FUNC_5(VAR_5->type), VAR_11, VAR_7.param_str, VAR_12);
}
