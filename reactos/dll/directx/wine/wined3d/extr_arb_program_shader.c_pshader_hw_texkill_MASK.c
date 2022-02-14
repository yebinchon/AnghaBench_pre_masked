
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
struct wined3d_shader_instruction {TYPE_3__* ctx; struct wined3d_shader_dst_param* dst; } ;
struct TYPE_10__ {TYPE_4__* idx; } ;
struct wined3d_shader_dst_param {int write_mask; TYPE_5__ reg; } ;
struct TYPE_9__ {int offset; } ;
struct TYPE_8__ {TYPE_2__* reg_maps; struct wined3d_string_buffer* buffer; } ;
struct TYPE_6__ {int major; int minor; } ;
struct TYPE_7__ {TYPE_1__ shader_version; } ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct wined3d_string_buffer*,char*,...) ;
 int FUNC_1 (struct wined3d_shader_instruction const*,struct wined3d_shader_dst_param const*,char*) ;
 int FUNC_2 (struct wined3d_shader_instruction const*,TYPE_5__*,char*,int *) ;
 int FUNC_3 (char*,char*,int) ;

__attribute__((used)) static void FUNC_4(const struct wined3d_shader_instruction *VAR_5)
{
    const struct wined3d_shader_dst_param *VAR_6 = &VAR_5->dst[0];
    struct wined3d_string_buffer *VAR_7 = VAR_5->ctx->buffer;
    char VAR_8[40];




    FUNC_1(VAR_5, VAR_6, VAR_8);

    if (VAR_5->ctx->reg_maps->shader_version.major >= 2)
    {
        const char *VAR_9 = "TA";
        BOOL VAR_10;

        FUNC_2(VAR_5, &VAR_6->reg, VAR_8, &VAR_10);
        if(VAR_6->write_mask == VAR_4)
        {
            VAR_9 = VAR_8;
        }
        else
        {




            char VAR_11 = '0', VAR_12 = '0', VAR_13 = '0', VAR_14 = '0';
            if(VAR_6->write_mask & VAR_0) VAR_11 = 'x';
            if(VAR_6->write_mask & VAR_1) VAR_12 = 'y';
            if(VAR_6->write_mask & VAR_2) VAR_13 = 'z';
            if(VAR_6->write_mask & VAR_3) VAR_14 = 'w';
            FUNC_0(VAR_7, "SWZ TA, %s, %c, %c, %c, %c;\n", VAR_8, VAR_11, VAR_12, VAR_13, VAR_14);
        }
        FUNC_0(VAR_7, "KIL %s;\n", VAR_9);
    }
    else
    {






        if (VAR_5->ctx->reg_maps->shader_version.minor <= 3)
            FUNC_3(VAR_8, "fragment.texcoord[%u]", VAR_6->reg.idx[0].offset);
        else
            FUNC_1(VAR_5, VAR_6, VAR_8);
        FUNC_0(VAR_7, "SWZ TA, %s, x, y, z, 1;\n", VAR_8);
        FUNC_0(VAR_7, "KIL TA;\n");
    }
}
