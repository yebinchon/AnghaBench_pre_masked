
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct ra_tex_gl {int fbo; } ;
struct TYPE_12__ {int y0; int x0; } ;
struct ra_renderpass_run_params {int num_values; int * values; int * compute_groups; int vertex_count; int vertex_data; TYPE_6__ scissors; TYPE_6__ viewport; TYPE_2__* target; struct ra_renderpass* pass; } ;
struct ra_renderpass_gl {int vao; int program; } ;
struct TYPE_10__ {int type; int blend_dst_alpha; int blend_src_alpha; int blend_dst_rgb; int blend_src_rgb; int enable_blend; int invalidate_target; int target_format; } ;
struct ra_renderpass {TYPE_3__ params; struct ra_renderpass_gl* priv; } ;
struct ra {int dummy; } ;
struct TYPE_11__ {int (* UseProgram ) (int ) ;int (* ActiveTexture ) (int ) ;int (* MemoryBarrier ) (int ) ;int (* DispatchCompute ) (int ,int ,int ) ;int (* BindFramebuffer ) (int ,int ) ;int (* Disable ) (int ) ;int (* Enable ) (int ) ;int (* BlendFuncSeparate ) (int ,int ,int ,int ) ;int (* Scissor ) (int ,int ,int ,int ) ;int (* Viewport ) (int ,int ,int ,int ) ;int (* InvalidateFramebuffer ) (int ,int,int *) ;} ;
struct TYPE_8__ {int render_dst; int format; } ;
struct TYPE_9__ {TYPE_1__ params; struct ra_tex_gl* priv; } ;
typedef int GLenum ;
typedef TYPE_4__ GL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ra*,struct ra_renderpass*,int *) ;
 int FUNC_3 (int *,int ,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_6__) ;
 int FUNC_6 (TYPE_6__) ;
 TYPE_4__* FUNC_7 (struct ra*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,int ,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 (int ,int,int *) ;
 int FUNC_19 (int ,int ,int ,int ) ;
 int FUNC_20 (int ,int ,int ,int ) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int ,int ,int ,int ) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (struct ra*,struct ra_renderpass*,int *) ;

__attribute__((used)) static void FUNC_25(struct ra *VAR_8,
                              const struct ra_renderpass_run_params *VAR_9)
{
    GL *VAR_10 = FUNC_7(VAR_8);
    struct ra_renderpass *VAR_11 = VAR_9->pass;
    struct ra_renderpass_gl *VAR_12 = VAR_11->priv;

    VAR_10->UseProgram(VAR_12->program);

    for (int VAR_13 = 0; VAR_13 < VAR_9->num_values; VAR_13++)
        FUNC_24(VAR_8, VAR_11, &VAR_9->values[VAR_13]);
    VAR_10->ActiveTexture(VAR_5);

    switch (VAR_11->params.type) {
    case 128: {
        struct ra_tex_gl *VAR_14 = VAR_9->target->priv;
        FUNC_1(VAR_9->target->params.render_dst);
        FUNC_1(VAR_9->target->params.format == VAR_11->params.target_format);
        VAR_10->BindFramebuffer(VAR_3, VAR_14->fbo);
        if (VAR_11->params.invalidate_target && VAR_10->InvalidateFramebuffer) {
            GLenum VAR_15 = VAR_14->fbo ? VAR_2 : VAR_1;
            VAR_10->InvalidateFramebuffer(VAR_3, 1, &VAR_15);
        }
        VAR_10->Viewport(VAR_9->viewport.x0, VAR_9->viewport.y0,
                     FUNC_6(VAR_9->viewport),
                     FUNC_5(VAR_9->viewport));
        VAR_10->Scissor(VAR_9->scissors.x0, VAR_9->scissors.y0,
                    FUNC_6(VAR_9->scissors),
                    FUNC_5(VAR_9->scissors));
        VAR_10->Enable(VAR_4);
        if (VAR_11->params.enable_blend) {
            VAR_10->BlendFuncSeparate(FUNC_4(VAR_11->params.blend_src_rgb),
                                  FUNC_4(VAR_11->params.blend_dst_rgb),
                                  FUNC_4(VAR_11->params.blend_src_alpha),
                                  FUNC_4(VAR_11->params.blend_dst_alpha));
            VAR_10->Enable(VAR_0);
        }
        FUNC_3(&VAR_12->vao, VAR_7, VAR_9->vertex_data,
                         VAR_9->vertex_count);
        VAR_10->Disable(VAR_4);
        VAR_10->Disable(VAR_0);
        VAR_10->BindFramebuffer(VAR_3, 0);
        break;
    }
    case 129: {
        VAR_10->DispatchCompute(VAR_9->compute_groups[0],
                            VAR_9->compute_groups[1],
                            VAR_9->compute_groups[2]);

        VAR_10->MemoryBarrier(VAR_6);
        break;
    }
    default: FUNC_0();
    }

    for (int VAR_16 = 0; VAR_16 < VAR_9->num_values; VAR_16++)
        FUNC_2(VAR_8, VAR_11, &VAR_9->values[VAR_16]);
    VAR_10->ActiveTexture(VAR_5);

    VAR_10->UseProgram(0);
}
