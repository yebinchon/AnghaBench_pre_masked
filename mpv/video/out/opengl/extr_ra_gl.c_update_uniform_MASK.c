
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ra_tex_gl {int texture; int target; int internal_format; } ;
struct TYPE_6__ {int storage_dst; int render_src; } ;
struct ra_tex {TYPE_2__ params; struct ra_tex_gl* priv; } ;
struct ra_renderpass_input_val {size_t index; float* data; } ;
struct ra_renderpass_input {int type; int dim_v; int dim_m; scalar_t__ binding; } ;
struct ra_renderpass_gl {size_t num_uniform_loc; int * uniform_loc; } ;
struct TYPE_5__ {struct ra_renderpass_input* inputs; } ;
struct ra_renderpass {TYPE_1__ params; struct ra_renderpass_gl* priv; } ;
struct ra_buf_gl {int target; int buffer; } ;
struct ra_buf {struct ra_buf_gl* priv; } ;
struct ra {int dummy; } ;
struct TYPE_7__ {int (* MemoryBarrier ) (int ) ;int (* BindBufferBase ) (int ,scalar_t__,int ) ;int (* BindTexture ) (int ,int ) ;int (* ActiveTexture ) (scalar_t__) ;int (* BindImageTexture ) (scalar_t__,int ,int ,int ,int ,int ,int ) ;int (* UniformMatrix3fv ) (int ,int,int ,float*) ;int (* UniformMatrix2fv ) (int ,int,int ,float*) ;int (* Uniform4f ) (int ,float,float,float,float) ;int (* Uniform3f ) (int ,float,float,float) ;int (* Uniform2f ) (int ,float,float) ;int (* Uniform1f ) (int ,float) ;int (* Uniform1i ) (int ,int) ;} ;
typedef int GLint ;
typedef TYPE_3__ GL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;






 int FUNC_0 () ;
 int FUNC_1 (int) ;
 TYPE_3__* FUNC_2 (struct ra*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,scalar_t__,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,float) ;
 int FUNC_8 (int ,float,float) ;
 int FUNC_9 (int ,float,float,float) ;
 int FUNC_10 (int ,float,float,float,float) ;
 int FUNC_11 (int ,int,int ,float*) ;
 int FUNC_12 (int ,int,int ,float*) ;
 int FUNC_13 (scalar_t__,int ,int ,int ,int ,int ,int ) ;
 int FUNC_14 (scalar_t__) ;

__attribute__((used)) static void FUNC_15(struct ra *VAR_3, struct ra_renderpass *VAR_4,
                           struct ra_renderpass_input_val *VAR_5)
{
    GL *VAR_6 = FUNC_2(VAR_3);
    struct ra_renderpass_gl *VAR_7 = VAR_4->priv;

    struct ra_renderpass_input *VAR_8 = &VAR_4->params.inputs[VAR_5->index];
    FUNC_1(VAR_5->index >= 0 && VAR_5->index < VAR_7->num_uniform_loc);
    GLint VAR_9 = VAR_7->uniform_loc[VAR_5->index];

    switch (VAR_8->type) {
    case 129: {
        FUNC_1(VAR_8->dim_v * VAR_8->dim_m == 1);
        if (VAR_9 < 0)
            break;
        VAR_6->Uniform1i(VAR_9, *(int *)VAR_5->data);
        break;
    }
    case 131: {
        float *VAR_10 = VAR_5->data;
        if (VAR_9 < 0)
            break;
        if (VAR_8->dim_m == 1) {
            switch (VAR_8->dim_v) {
            case 1: VAR_6->Uniform1f(VAR_9, VAR_10[0]); break;
            case 2: VAR_6->Uniform2f(VAR_9, VAR_10[0], VAR_10[1]); break;
            case 3: VAR_6->Uniform3f(VAR_9, VAR_10[0], VAR_10[1], VAR_10[2]); break;
            case 4: VAR_6->Uniform4f(VAR_9, VAR_10[0], VAR_10[1], VAR_10[2], VAR_10[3]); break;
            default: FUNC_0();
            }
        } else if (VAR_8->dim_v == 2 && VAR_8->dim_m == 2) {
            VAR_6->UniformMatrix2fv(VAR_9, 1, VAR_0, VAR_10);
        } else if (VAR_8->dim_v == 3 && VAR_8->dim_m == 3) {
            VAR_6->UniformMatrix3fv(VAR_9, 1, VAR_0, VAR_10);
        } else {
            FUNC_0();
        }
        break;
    }
    case 130: {
        struct ra_tex *VAR_11 = *(struct ra_tex **)VAR_5->data;
        struct ra_tex_gl *VAR_12 = VAR_11->priv;
        FUNC_1(VAR_11->params.storage_dst);
        VAR_6->BindImageTexture(VAR_8->binding, VAR_12->texture, 0, VAR_0, 0,
                             VAR_2, VAR_12->internal_format);
        break;
    }
    case 128: {
        struct ra_tex *VAR_13 = *(struct ra_tex **)VAR_5->data;
        struct ra_tex_gl *VAR_14 = VAR_13->priv;
        FUNC_1(VAR_13->params.render_src);
        VAR_6->ActiveTexture(VAR_1 + VAR_8->binding);
        VAR_6->BindTexture(VAR_14->target, VAR_14->texture);
        break;
    }
    case 133:
    case 132: {
        struct ra_buf *VAR_15 = *(struct ra_buf **)VAR_5->data;
        struct ra_buf_gl *VAR_16 = VAR_15->priv;
        VAR_6->BindBufferBase(VAR_16->target, VAR_8->binding, VAR_16->buffer);

        if (VAR_8->type == 132)
            VAR_6->MemoryBarrier(VAR_16->target);
        break;
    }
    default:
        FUNC_0();
    }
}
