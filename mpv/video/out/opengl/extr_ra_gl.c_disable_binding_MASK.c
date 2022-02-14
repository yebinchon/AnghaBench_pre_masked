
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ra_tex_gl {int internal_format; int target; } ;
struct TYPE_6__ {int render_src; } ;
struct ra_tex {TYPE_2__ params; struct ra_tex_gl* priv; } ;
struct ra_renderpass_input_val {size_t index; scalar_t__ data; } ;
struct ra_renderpass_input {int type; scalar_t__ binding; } ;
struct TYPE_5__ {struct ra_renderpass_input* inputs; } ;
struct ra_renderpass {TYPE_1__ params; } ;
struct ra {int dummy; } ;
struct TYPE_7__ {int (* BindBufferBase ) (int ,scalar_t__,int ) ;int (* BindImageTexture ) (scalar_t__,int ,int ,int ,int ,int ,int ) ;int (* BindTexture ) (int ,int ) ;int (* ActiveTexture ) (scalar_t__) ;} ;
typedef TYPE_3__ GL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;



 int FUNC_0 (int ) ;
 TYPE_3__* FUNC_1 (struct ra*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (scalar_t__,int ,int ,int ,int ,int ,int ) ;
 int FUNC_5 (int ,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_6(struct ra *VAR_4, struct ra_renderpass *VAR_5,
                           struct ra_renderpass_input_val *VAR_6)
{
    GL *VAR_7 = FUNC_1(VAR_4);

    struct ra_renderpass_input *VAR_8 = &VAR_5->params.inputs[VAR_6->index];

    switch (VAR_8->type) {
    case 129:
    case 128: {
        struct ra_tex *VAR_9 = *(struct ra_tex **)VAR_6->data;
        struct ra_tex_gl *VAR_10 = VAR_9->priv;
        FUNC_0(VAR_9->params.render_src);
        if (VAR_8->type == 128) {
            VAR_7->ActiveTexture(VAR_2 + VAR_8->binding);
            VAR_7->BindTexture(VAR_10->target, 0);
        } else {
            VAR_7->BindImageTexture(VAR_8->binding, 0, 0, VAR_0, 0,
                                 VAR_3, VAR_10->internal_format);
        }
        break;
    }
    case 130:
        VAR_7->BindBufferBase(VAR_1, VAR_8->binding, 0);
        break;
    }
}
