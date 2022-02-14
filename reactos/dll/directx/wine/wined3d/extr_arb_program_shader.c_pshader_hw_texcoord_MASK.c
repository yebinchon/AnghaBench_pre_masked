
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct wined3d_string_buffer {int dummy; } ;
struct wined3d_shader_instruction {struct wined3d_shader_dst_param* dst; int * src; TYPE_3__* ctx; } ;
struct TYPE_10__ {TYPE_4__* idx; } ;
struct wined3d_shader_dst_param {TYPE_5__ reg; } ;
struct TYPE_9__ {char* offset; } ;
struct TYPE_8__ {TYPE_2__* reg_maps; struct wined3d_string_buffer* buffer; } ;
struct TYPE_6__ {int major; int minor; } ;
struct TYPE_7__ {TYPE_1__ shader_version; } ;
typedef char* DWORD ;


 char* FUNC_0 (int,int) ;
 int FUNC_1 (struct wined3d_string_buffer*,char*,char*,char*) ;
 int FUNC_2 (struct wined3d_shader_instruction const*,struct wined3d_shader_dst_param*,char*) ;
 int FUNC_3 (struct wined3d_shader_instruction const*,int *,int ,char*) ;

__attribute__((used)) static void FUNC_4(const struct wined3d_shader_instruction *VAR_0)
{
    const struct wined3d_shader_dst_param *VAR_1 = &VAR_0->dst[0];
    struct wined3d_string_buffer *VAR_2 = VAR_0->ctx->buffer;
    DWORD VAR_3 = FUNC_0(VAR_0->ctx->reg_maps->shader_version.major,
            VAR_0->ctx->reg_maps->shader_version.minor);
    char VAR_4[50];

    if (VAR_3 < FUNC_0(1,4))
    {
        DWORD VAR_5 = VAR_1->reg.idx[0].offset;

        FUNC_2(VAR_0, &VAR_0->dst[0], VAR_4);
        FUNC_1(VAR_2, "MOV_SAT %s, fragment.texcoord[%u];\n", VAR_4, VAR_5);
    } else {
        char VAR_6[40];

        FUNC_3(VAR_0, &VAR_0->src[0], 0, VAR_6);
        FUNC_2(VAR_0, &VAR_0->dst[0], VAR_4);
        FUNC_1(VAR_2, "MOV %s, %s;\n", VAR_4, VAR_6);
    }
}
