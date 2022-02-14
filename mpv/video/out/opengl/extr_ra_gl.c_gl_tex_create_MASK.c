
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct ra_tex_params {int dimensions; int initial_data; int d; int h; int w; scalar_t__ src_repeat; scalar_t__ src_linear; TYPE_1__* format; } ;
struct ra_tex_gl {int own_objects; int texture; int fbo; int target; int type; int format; int internal_format; } ;
struct TYPE_9__ {TYPE_2__* format; scalar_t__ downloadable; scalar_t__ blit_dst; scalar_t__ blit_src; scalar_t__ render_dst; } ;
struct ra_tex {TYPE_3__ params; struct ra_tex_gl* priv; } ;
struct ra {int log; } ;
struct TYPE_10__ {int mpgl_caps; scalar_t__ (* CheckFramebufferStatus ) (int ) ;int (* BindFramebuffer ) (int ,int ) ;int (* FramebufferTexture2D ) (int ,int ,int ,int ,int ) ;int (* GenFramebuffers ) (int,int *) ;int (* BindTexture ) (int ,int ) ;int (* PixelStorei ) (int ,int) ;int (* TexImage3D ) (int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;int (* TexImage2D ) (int ,int ,int ,int ,int ,int ,int ,int ,int ) ;int (* TexImage1D ) (int ,int ,int ,int ,int ,int ,int ,int ) ;int (* TexParameteri ) (int ,int ,int ) ;int (* GenTextures ) (int,int *) ;} ;
struct TYPE_8__ {int renderable; } ;
struct TYPE_7__ {int dummy_format; } ;
typedef int GLint ;
typedef scalar_t__ GLenum ;
typedef TYPE_4__ GL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct ra*,char*,...) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_4__*,int ,char*) ;
 struct ra_tex* FUNC_3 (struct ra*,struct ra_tex_params const*) ;
 TYPE_4__* FUNC_4 (struct ra*) ;
 int FUNC_5 (struct ra*,struct ra_tex**) ;
 int FUNC_6 (int,int *) ;
 int FUNC_7 (int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_8 (int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int,int *) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_14 (int ) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (int ,int ,int ) ;
 int FUNC_18 (int ,int ,int ) ;
 int FUNC_19 (int ,int ,int ) ;
 int FUNC_20 (int ,int ,int ) ;
 int FUNC_21 (int ,int ,int ) ;
 int FUNC_22 (int ,int) ;
 int FUNC_23 (int ,int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static struct ra_tex *FUNC_24(struct ra *VAR_15,
                                    const struct ra_tex_params *VAR_16)
{
    GL *VAR_17 = FUNC_4(VAR_15);
    FUNC_1(!VAR_16->format->dummy_format);

    struct ra_tex *VAR_18 = FUNC_3(VAR_15, VAR_16);
    if (!VAR_18)
        return ((void*)0);
    struct ra_tex_gl *VAR_19 = VAR_18->priv;

    VAR_19->own_objects = 1;

    VAR_17->GenTextures(1, &VAR_19->texture);
    VAR_17->BindTexture(VAR_19->target, VAR_19->texture);

    GLint VAR_20 = VAR_16->src_linear ? VAR_4 : VAR_5;
    GLint VAR_21 = VAR_16->src_repeat ? VAR_6 : VAR_0;
    VAR_17->TexParameteri(VAR_19->target, VAR_9, VAR_20);
    VAR_17->TexParameteri(VAR_19->target, VAR_8, VAR_20);
    VAR_17->TexParameteri(VAR_19->target, VAR_11, VAR_21);
    if (VAR_16->dimensions > 1)
        VAR_17->TexParameteri(VAR_19->target, VAR_12, VAR_21);
    if (VAR_16->dimensions > 2)
        VAR_17->TexParameteri(VAR_19->target, VAR_10, VAR_21);

    VAR_17->PixelStorei(VAR_13, 1);
    switch (VAR_16->dimensions) {
    case 1:
        VAR_17->TexImage1D(VAR_19->target, 0, VAR_19->internal_format, VAR_16->w,
                       0, VAR_19->format, VAR_19->type, VAR_16->initial_data);
        break;
    case 2:
        VAR_17->TexImage2D(VAR_19->target, 0, VAR_19->internal_format, VAR_16->w,
                       VAR_16->h, 0, VAR_19->format, VAR_19->type,
                       VAR_16->initial_data);
        break;
    case 3:
        VAR_17->TexImage3D(VAR_19->target, 0, VAR_19->internal_format, VAR_16->w,
                       VAR_16->h, VAR_16->d, 0, VAR_19->format, VAR_19->type,
                       VAR_16->initial_data);
        break;
    }
    VAR_17->PixelStorei(VAR_13, 4);

    VAR_17->BindTexture(VAR_19->target, 0);

    FUNC_2(VAR_17, VAR_15->log, "after creating texture");



    if (VAR_18->params.render_dst || VAR_18->params.blit_src ||
        VAR_18->params.blit_dst || VAR_18->params.downloadable)
    {
        if (!VAR_18->params.format->renderable) {
            FUNC_0(VAR_15, "Trying to create renderable texture with unsupported "
                   "format.\n");
            FUNC_5(VAR_15, &VAR_18);
            return ((void*)0);
        }

        FUNC_1(VAR_17->mpgl_caps & VAR_14);

        VAR_17->GenFramebuffers(1, &VAR_19->fbo);
        VAR_17->BindFramebuffer(VAR_2, VAR_19->fbo);
        VAR_17->FramebufferTexture2D(VAR_2, VAR_1,
                                 VAR_7, VAR_19->texture, 0);
        GLenum VAR_22 = VAR_17->CheckFramebufferStatus(VAR_2);
        VAR_17->BindFramebuffer(VAR_2, 0);

        if (VAR_22 != VAR_3) {
            FUNC_0(VAR_15, "Error: framebuffer completeness check failed (error=%d).\n",
                   (int)VAR_22);
            FUNC_5(VAR_15, &VAR_18);
            return ((void*)0);
        }


        FUNC_2(VAR_17, VAR_15->log, "after creating framebuffer");
    }

    return VAR_18;
}
