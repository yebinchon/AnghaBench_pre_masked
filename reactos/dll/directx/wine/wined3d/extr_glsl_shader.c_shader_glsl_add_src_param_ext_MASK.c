
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wined3d_string_buffer {int buffer; } ;
struct TYPE_4__ {int type; } ;
struct wined3d_shader_src_param {int modifiers; TYPE_2__ reg; } ;
struct wined3d_shader_instruction {TYPE_1__* ctx; } ;
struct shader_glsl_ctx_priv {int string_buffers; } ;
struct glsl_src_param {char* reg_name; char* param_str; } ;
typedef enum wined3d_data_type { ____Placeholder_wined3d_data_type } wined3d_data_type ;
struct TYPE_3__ {struct shader_glsl_ctx_priv* backend_data; } ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,char*,char*) ;
 int FUNC_1 (TYPE_2__*,int,char*,int *,struct wined3d_shader_instruction const*) ;
 int FUNC_2 (struct wined3d_shader_src_param const*,int ,int ,char*) ;
 int FUNC_3 (struct wined3d_string_buffer*,char*,int,int) ;
 struct wined3d_string_buffer* FUNC_4 (int ) ;
 int FUNC_5 (int ,struct wined3d_string_buffer*) ;

__attribute__((used)) static void FUNC_6(const struct wined3d_shader_instruction *VAR_3,
        const struct wined3d_shader_src_param *VAR_4, DWORD VAR_5, struct glsl_src_param *VAR_6,
        enum wined3d_data_type VAR_7)
{
    struct shader_glsl_ctx_priv *VAR_8 = VAR_3->ctx->backend_data;
    struct wined3d_string_buffer *VAR_9 = FUNC_4(VAR_8->string_buffers);
    enum wined3d_data_type VAR_10;
    BOOL VAR_11 = VAR_0;
    char VAR_12[6];

    VAR_6->reg_name[0] = '\0';
    VAR_6->param_str[0] = '\0';
    VAR_12[0] = '\0';

    FUNC_1(&VAR_4->reg, VAR_7, VAR_6->reg_name, &VAR_11, VAR_3);
    FUNC_2(VAR_4, VAR_11, VAR_5, VAR_12);

    switch (VAR_4->reg.type)
    {
        case 135:
            VAR_10 = VAR_7;
            break;
        case 137:
        case 136:
        case 134:
        case 133:
        case 132:
        case 131:
        case 130:
        case 129:
        case 128:
            VAR_10 = VAR_2;
            break;
        default:
            VAR_10 = VAR_1;
            break;
    }

    FUNC_3(VAR_9, VAR_6->reg_name, VAR_7, VAR_10);
    FUNC_0(VAR_4->modifiers, VAR_9->buffer, VAR_12, VAR_6->param_str);

    FUNC_5(VAR_8->string_buffers, VAR_9);
}
