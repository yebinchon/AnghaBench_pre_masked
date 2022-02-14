
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct wined3d_string_buffer {int buffer; } ;
struct wined3d_shader_version {int type; } ;
struct wined3d_shader_reg_maps {unsigned int tgsm_count; TYPE_6__* uav_resource_info; TYPE_3__* tgsm; struct wined3d_shader_version shader_version; } ;
struct wined3d_shader_instruction {int handler_idx; int src_count; int * src; TYPE_5__* dst; TYPE_4__* ctx; } ;
struct shader_glsl_ctx_priv {int string_buffers; } ;
struct glsl_src_param {int param_str; } ;
typedef enum wined3d_shader_resource_type { ____Placeholder_wined3d_shader_resource_type } wined3d_shader_resource_type ;
typedef enum wined3d_data_type { ____Placeholder_wined3d_data_type } wined3d_data_type ;
struct TYPE_13__ {int type; int data_type; unsigned int coord_size; unsigned int stride; int flags; } ;
struct TYPE_9__ {scalar_t__ type; TYPE_1__* idx; } ;
struct TYPE_12__ {TYPE_2__ reg; } ;
struct TYPE_11__ {struct wined3d_string_buffer* buffer; struct shader_glsl_ctx_priv* backend_data; struct wined3d_shader_reg_maps* reg_maps; } ;
struct TYPE_10__ {unsigned int stride; } ;
struct TYPE_8__ {unsigned int offset; } ;
typedef int DWORD ;
typedef size_t BOOL ;


 int FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_6__* VAR_6 ;
 int FUNC_3 (struct wined3d_string_buffer*,char*,...) ;
 int FUNC_4 (struct wined3d_shader_instruction const*,int *,int,struct glsl_src_param*) ;
 int FUNC_5 (struct wined3d_shader_instruction const*,int *,int,struct glsl_src_param*,int) ;
 int FUNC_6 (struct wined3d_string_buffer*,struct wined3d_shader_instruction const*,TYPE_5__*,int) ;
 int FUNC_7 (int ) ;
 struct wined3d_string_buffer* FUNC_8 (int ) ;
 int FUNC_9 (int ,struct wined3d_string_buffer*) ;
 int FUNC_10 (struct wined3d_string_buffer*,char*,int ,...) ;

__attribute__((used)) static void FUNC_11(const struct wined3d_shader_instruction *VAR_7)
{
    const BOOL VAR_8 = 137 <= VAR_7->handler_idx
            && VAR_7->handler_idx <= 128;
    const struct wined3d_shader_reg_maps *VAR_9 = VAR_7->ctx->reg_maps;
    const struct wined3d_shader_version *VAR_10 = &VAR_9->shader_version;
    struct shader_glsl_ctx_priv *VAR_11 = VAR_7->ctx->backend_data;
    struct glsl_src_param VAR_12, VAR_13, VAR_14, VAR_15;
    struct wined3d_string_buffer *VAR_16 = VAR_7->ctx->buffer;
    enum wined3d_shader_resource_type VAR_17;
    struct wined3d_string_buffer *VAR_18;
    enum wined3d_data_type VAR_19;
    unsigned int VAR_20, VAR_21;
    const char *VAR_22, *VAR_23;
    DWORD VAR_24;
    BOOL VAR_25;

    VAR_20 = VAR_7->dst[VAR_8].reg.idx[0].offset;
    VAR_25 = VAR_7->dst[VAR_8].reg.type == VAR_0;
    if (VAR_25)
    {
        if (VAR_20 >= VAR_9->tgsm_count)
        {
            FUNC_1("Invalid TGSM index %u.\n", VAR_20);
            return;
        }
        VAR_23 = "g";
        VAR_19 = VAR_4;
        VAR_24 = 1;
        VAR_21 = VAR_9->tgsm[VAR_20].stride;
    }
    else
    {
        if (VAR_20 >= FUNC_0(VAR_9->uav_resource_info))
        {
            FUNC_1("Invalid UAV index %u.\n", VAR_20);
            return;
        }
        VAR_17 = VAR_9->uav_resource_info[VAR_20].type;
        if (VAR_17 >= FUNC_0(VAR_6))
        {
            FUNC_1("Unexpected resource type %#x.\n", VAR_17);
            return;
        }
        VAR_23 = "image";
        VAR_19 = VAR_9->uav_resource_info[VAR_20].data_type;
        VAR_24 = (1u << VAR_6[VAR_17].coord_size) - 1;
        VAR_21 = VAR_9->uav_resource_info[VAR_20].stride;
    }

    switch (VAR_7->handler_idx)
    {
        case 146:
        case 137:
            if (VAR_25)
                VAR_22 = "atomicAnd";
            else
                VAR_22 = "imageAtomicAnd";
            break;
        case 145:
        case 136:
            if (VAR_25)
                VAR_22 = "atomicCompSwap";
            else
                VAR_22 = "imageAtomicCompSwap";
            break;
        case 144:
        case 134:
            if (VAR_25)
                VAR_22 = "atomicAdd";
            else
                VAR_22 = "imageAtomicAdd";
            break;
        case 143:
        case 133:
            if (VAR_25)
                VAR_22 = "atomicMax";
            else
                VAR_22 = "imageAtomicMax";
            if (VAR_19 != VAR_3)
            {
                FUNC_2("Unhandled opcode %#x for unsigned integers.\n", VAR_7->handler_idx);
                return;
            }
            break;
        case 142:
        case 132:
            if (VAR_25)
                VAR_22 = "atomicMin";
            else
                VAR_22 = "imageAtomicMin";
            if (VAR_19 != VAR_3)
            {
                FUNC_2("Unhandled opcode %#x for unsigned integers.\n", VAR_7->handler_idx);
                return;
            }
            break;
        case 141:
        case 131:
            if (VAR_25)
                VAR_22 = "atomicOr";
            else
                VAR_22 = "imageAtomicOr";
            break;
        case 140:
        case 130:
            if (VAR_25)
                VAR_22 = "atomicMax";
            else
                VAR_22 = "imageAtomicMax";
            if (VAR_19 != VAR_4)
            {
                FUNC_2("Unhandled opcode %#x for signed integers.\n", VAR_7->handler_idx);
                return;
            }
            break;
        case 139:
        case 129:
            if (VAR_25)
                VAR_22 = "atomicMin";
            else
                VAR_22 = "imageAtomicMin";
            if (VAR_19 != VAR_4)
            {
                FUNC_2("Unhandled opcode %#x for signed integers.\n", VAR_7->handler_idx);
                return;
            }
            break;
        case 138:
        case 128:
            if (VAR_25)
                VAR_22 = "atomicXor";
            else
                VAR_22 = "imageAtomicXor";
            break;
        case 135:
            if (VAR_25)
                VAR_22 = "atomicExchange";
            else
                VAR_22 = "imageAtomicExchange";
            break;
        default:
            FUNC_1("Unhandled opcode %#x.\n", VAR_7->handler_idx);
            return;
    }

    VAR_18 = FUNC_8(VAR_11->string_buffers);
    if (VAR_21)
    {
        FUNC_4(VAR_7, &VAR_7->src[0], VAR_1, &VAR_12);
        FUNC_4(VAR_7, &VAR_7->src[0], VAR_2, &VAR_13);
        FUNC_10(VAR_18, "%s * %u + %s / 4", VAR_12.param_str, VAR_21, VAR_13.param_str);
    }
    else
    {
        FUNC_4(VAR_7, &VAR_7->src[0], VAR_24, &VAR_13);
        FUNC_10(VAR_18, "%s", VAR_13.param_str);
        if (VAR_25 || (VAR_9->uav_resource_info[VAR_20].flags & VAR_5))
            FUNC_3(VAR_18, "/ 4");
    }

    if (VAR_8)
        FUNC_6(VAR_7->ctx->buffer, VAR_7, &VAR_7->dst[0], VAR_19);

    if (VAR_25)
        FUNC_3(VAR_16, "%s(%s_%s%u[%s], ",
                VAR_22, FUNC_7(VAR_10->type), VAR_23, VAR_20, VAR_18->buffer);
    else
        FUNC_3(VAR_16, "%s(%s_%s%u, %s, ",
                VAR_22, FUNC_7(VAR_10->type), VAR_23, VAR_20, VAR_18->buffer);

    FUNC_5(VAR_7, &VAR_7->src[1], VAR_1, &VAR_14, VAR_19);
    FUNC_3(VAR_16, "%s", VAR_14.param_str);
    if (VAR_7->src_count >= 3)
    {
        FUNC_5(VAR_7, &VAR_7->src[2], VAR_1, &VAR_15, VAR_19);
        FUNC_3(VAR_16, ", %s", VAR_15);
    }

    if (VAR_8)
        FUNC_3(VAR_16, ")");
    FUNC_3(VAR_16, ");\n");

    FUNC_9(VAR_11->string_buffers, VAR_18);
}
