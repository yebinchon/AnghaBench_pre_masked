
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int (* glDeleteFramebuffers ) (int,int *) ;int (* glBindFramebuffer ) (int ,int ) ;int (* glGenFramebuffers ) (int,int *) ;} ;
struct TYPE_7__ {int (* p_glReadBuffer ) (int ) ;int (* p_glDrawBuffer ) (int ) ;} ;
struct TYPE_6__ {int (* p_glGetInternalformativ ) (int ,scalar_t__,int ,int,scalar_t__*) ;} ;
struct TYPE_8__ {TYPE_2__ gl; TYPE_1__ ext; } ;
struct wined3d_gl_info {unsigned int format_count; TYPE_4__ fbo_ops; struct wined3d_format* formats; TYPE_3__ gl_ops; scalar_t__* supported; } ;
struct wined3d_format {scalar_t__ rtInternal; scalar_t__ glInternal; int* flags; scalar_t__ glGammaInternal; int id; } ;
struct wined3d_caps_gl_ctx {struct wined3d_gl_info* gl_info; } ;
struct TYPE_10__ {scalar_t__ offscreen_rendering_mode; } ;
typedef int GLuint ;
typedef scalar_t__ GLint ;
typedef scalar_t__ GLenum ;
typedef scalar_t__ BOOL ;


 size_t VAR_0 ;
 unsigned int FUNC_0 (int*) ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (char*,int ,...) ;
 scalar_t__ VAR_9 ;
 int FUNC_3 (char*,int ,unsigned int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 size_t VAR_16 ;
 int FUNC_4 (struct wined3d_caps_gl_ctx*,struct wined3d_format*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct wined3d_format*,int) ;
 int FUNC_7 (int ,scalar_t__,int ,int,scalar_t__*) ;
 int FUNC_8 (int ,scalar_t__,int ,int,scalar_t__*) ;
 int FUNC_9 (int ,scalar_t__,int ,int,scalar_t__*) ;
 int FUNC_10 (int ,scalar_t__,int ,int,scalar_t__*) ;
 int FUNC_11 (int,int *) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int,int *) ;
 int FUNC_16 (unsigned int) ;
 TYPE_5__ VAR_17 ;

__attribute__((used)) static void FUNC_17(struct wined3d_caps_gl_ctx *VAR_18)
{
    const struct wined3d_gl_info *VAR_19 = VAR_18->gl_info;
    unsigned int VAR_20, VAR_21;
    GLuint VAR_22;

    if (VAR_19->supported[VAR_0])
    {
        for (VAR_20 = 0; VAR_20 < VAR_19->format_count; ++VAR_20)
        {
            GLint VAR_23;
            struct wined3d_format *VAR_24 = &VAR_19->formats[VAR_20];
            BOOL VAR_25 = VAR_2, VAR_26 = VAR_2;
            GLenum VAR_27 = VAR_24->rtInternal;

            if (!VAR_24->glInternal)
                continue;

            for (VAR_21 = 0; VAR_21 < FUNC_0(VAR_24->flags); ++VAR_21)
            {
                VAR_19->gl_ops.ext.p_glGetInternalformativ(FUNC_16(VAR_21),
                        VAR_24->glInternal, VAR_6, 1, &VAR_23);
                if (VAR_23 == VAR_7)
                {
                    FUNC_2("Format %s is supported as FBO color attachment, resource type %u.\n",
                            FUNC_5(VAR_24->id), VAR_21);
                    VAR_24->flags[VAR_21] |= VAR_11;
                    VAR_24->rtInternal = VAR_24->glInternal;
                    VAR_26 = VAR_9;

                    VAR_19->gl_ops.ext.p_glGetInternalformativ(FUNC_16(VAR_21),
                            VAR_24->glInternal, VAR_5, 1, &VAR_23);
                    if (VAR_23 == VAR_7)
                    {
                        FUNC_2("Format %s supports post-pixelshader blending, resource type %u.\n",
                                    FUNC_5(VAR_24->id), VAR_21);
                        VAR_24->flags[VAR_21] |= VAR_13;
                    }
                    else
                    {
                        FUNC_2("Format %s doesn't support post-pixelshader blending, resource typed %u.\n",
                                FUNC_5(VAR_24->id), VAR_21);
                        VAR_24->flags[VAR_21] &= ~VAR_13;
                    }
                }
                else
                {
                    if (!VAR_27)
                    {
                        if (VAR_24->flags[VAR_21] & VAR_14)
                        {
                            FUNC_3("Format %s with rendertarget flag is not supported as FBO color attachment"
                                    " and no fallback specified, resource type %u.\n",
                                    FUNC_5(VAR_24->id), VAR_21);
                            VAR_24->flags[VAR_21] &= ~VAR_14;
                        }
                        else
                            FUNC_2("Format %s is not supported as FBO color attachment,"
                            " resource type %u.\n", FUNC_5(VAR_24->id), VAR_21);
                        VAR_24->rtInternal = VAR_24->glInternal;
                    }
                    else
                    {
                        VAR_19->gl_ops.ext.p_glGetInternalformativ(FUNC_16(VAR_21),
                                VAR_27, VAR_6, 1, &VAR_23);
                        if (VAR_23 == VAR_7)
                        {
                            FUNC_2("Format %s rtInternal format is supported as FBO color attachment,"
                                    " resource type %u.\n", FUNC_5(VAR_24->id), VAR_21);
                            VAR_25 = VAR_9;
                        }
                        else
                        {
                            FUNC_3("Format %s rtInternal format is not supported as FBO color attachment,"
                                    " resource type %u.\n", FUNC_5(VAR_24->id), VAR_21);
                            VAR_24->flags[VAR_21] &= ~VAR_14;
                        }
                    }
                }

                if (VAR_24->glInternal != VAR_24->glGammaInternal)
                {
                    VAR_19->gl_ops.ext.p_glGetInternalformativ(FUNC_16(VAR_21),
                            VAR_24->glGammaInternal, VAR_6, 1, &VAR_23);
                    if (VAR_23 == VAR_7)
                    {
                        FUNC_2("Format %s's sRGB format is FBO attachable, resource type %u.\n",
                                FUNC_5(VAR_24->id), VAR_21);
                        VAR_24->flags[VAR_21] |= VAR_12;
                        if (VAR_19->supported[VAR_1])
                            VAR_24->glInternal = VAR_24->glGammaInternal;
                    }
                    else
                    {
                        FUNC_3("Format %s's sRGB format is not FBO attachable, resource type %u.\n",
                                FUNC_5(VAR_24->id), VAR_21);
                        FUNC_6(VAR_24, VAR_15);
                    }
                }
                else if (VAR_24->flags[VAR_21] & VAR_11)
                    VAR_24->flags[VAR_21] |= VAR_12;
            }

            if (VAR_25 && VAR_26)
            {
                FUNC_1("Format %s needs different render target formats for different resource types.\n",
                        FUNC_5(VAR_24->id));
                FUNC_6(VAR_24, VAR_14 | VAR_11
                        | VAR_12 | VAR_13);
            }
        }
        return;
    }

    if (VAR_17.offscreen_rendering_mode == VAR_8)
    {
        VAR_19->fbo_ops.glGenFramebuffers(1, &VAR_22);
        VAR_19->fbo_ops.glBindFramebuffer(VAR_4, VAR_22);
        VAR_19->gl_ops.gl.p_glDrawBuffer(VAR_3);
        VAR_19->gl_ops.gl.p_glReadBuffer(VAR_3);
    }

    for (VAR_20 = 0; VAR_20 < VAR_19->format_count; ++VAR_20)
    {
        struct wined3d_format *VAR_28 = &VAR_19->formats[VAR_20];

        if (!VAR_28->glInternal) continue;

        if (VAR_28->flags[VAR_16] & VAR_10)
        {
            FUNC_2("Skipping format %s because it's a compressed format.\n",
                    FUNC_5(VAR_28->id));
            continue;
        }

        if (VAR_17.offscreen_rendering_mode == VAR_8)
        {
            FUNC_2("Checking if format %s is supported as FBO color attachment...\n", FUNC_5(VAR_28->id));
            FUNC_4(VAR_18, VAR_28);
        }
        else
        {
            VAR_28->rtInternal = VAR_28->glInternal;
        }
    }

    if (VAR_17.offscreen_rendering_mode == VAR_8)
        VAR_19->fbo_ops.glDeleteFramebuffers(1, &VAR_22);
}
