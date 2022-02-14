
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct wined3d_vec3 {float member_0; float member_1; float member_2; } ;
struct TYPE_6__ {int (* p_glDisable ) (int ) ;int (* p_glDeleteTextures ) (int,int *) ;int (* p_glGetTexImage ) (int ,int ,int ,int ,int*) ;int (* p_glBindTexture ) (int ,int ) ;int (* p_glPolygonOffset ) (float,float) ;int (* p_glClear ) (int) ;int (* p_glViewport ) (int ,int ,int,int) ;int (* p_glEnable ) (int ) ;int (* p_glClearDepth ) (float) ;int (* p_glClearColor ) (float,float,float,float) ;int (* p_glTexImage2D ) (int ,int ,int ,int,int,int ,int ,int ,int ) ;int (* p_glTexParameteri ) (int ,int ,int ) ;int (* p_glGenTextures ) (int,int *) ;} ;
struct TYPE_7__ {TYPE_2__ gl; } ;
struct TYPE_5__ {int (* glBindFramebuffer ) (int ,int ) ;int (* glDeleteFramebuffers ) (int,int *) ;int (* glDeleteRenderbuffers ) (int,int *) ;int (* glFramebufferRenderbuffer ) (int ,int ,int ,int ) ;int (* glFramebufferTexture2D ) (int ,int ,int ,int ,int ) ;int (* glGenFramebuffers ) (int,int *) ;int (* glRenderbufferStorage ) (int ,int ,int,int) ;int (* glBindRenderbuffer ) (int ,int ) ;int (* glGenRenderbuffers ) (int,int *) ;} ;
struct wined3d_gl_info {TYPE_3__ gl_ops; TYPE_1__ fbo_ops; } ;
struct wined3d_color {float member_0; float member_1; float member_2; float member_3; } ;
struct wined3d_caps_gl_ctx {struct wined3d_gl_info* gl_info; } ;
struct TYPE_8__ {scalar_t__ offscreen_rendering_mode; } ;
typedef int GLuint ;
typedef int GLenum ;
typedef int DWORD ;


 int FUNC_0 (char*,unsigned int) ;
 int FUNC_1 (char*,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_2 (char*,unsigned int,unsigned int,...) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct wined3d_caps_gl_ctx*,struct wined3d_vec3 const*,struct wined3d_color const*) ;
 int FUNC_5 (int,int *) ;
 int FUNC_6 (int ,int ,int ,int ,int ) ;
 int FUNC_7 (int ,int ,int ,int ) ;
 int FUNC_8 (float,float,float,float) ;
 int FUNC_9 (float) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int ,int,int) ;
 int FUNC_13 (int) ;
 int FUNC_14 (float,float) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (int ,int ,int ,int ,int*) ;
 int FUNC_18 (int,int *) ;
 int FUNC_19 (int,int *) ;
 int FUNC_20 (int,int *) ;
 int FUNC_21 (int ,int ) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (int ,int ,int ) ;
 int FUNC_25 (int ,int ,int ,int,int,int ,int ,int ,int ) ;
 int FUNC_26 (int,int *) ;
 int FUNC_27 (int ,int ) ;
 int FUNC_28 (int ,int ,int,int) ;
 int FUNC_29 (int,int *) ;
 int FUNC_30 (int ,int ) ;
 TYPE_4__ VAR_14 ;

__attribute__((used)) static float FUNC_31(struct wined3d_caps_gl_ctx *VAR_15, GLenum VAR_16)
{
    const struct wined3d_gl_info *VAR_17 = VAR_15->gl_info;
    static const struct wined3d_color VAR_18 = {0.0f, 0.0f, 1.0f, 1.0f};
    GLuint VAR_19, VAR_20, VAR_21;
    unsigned int VAR_22 = 0, VAR_23 = 32, VAR_24;
    DWORD VAR_25[256];
    static const struct wined3d_vec3 VAR_26[] =
    {
        {-1.0f, -1.0f, -1.0f},
        { 1.0f, -1.0f, 0.0f},
        {-1.0f, 1.0f, -1.0f},
        { 1.0f, 1.0f, 0.0f},
    };



    unsigned int VAR_27 = 23;

    if (VAR_14.offscreen_rendering_mode != VAR_13)
    {
        FUNC_1("No FBOs, assuming polyoffset scale of 2^%u.\n", VAR_27);
        return (float)(1u << VAR_27);
    }

    VAR_17->gl_ops.gl.p_glGenTextures(1, &VAR_20);
    VAR_17->gl_ops.gl.p_glBindTexture(VAR_10, VAR_20);
    VAR_17->gl_ops.gl.p_glTexParameteri(VAR_10, VAR_11, 0);
    VAR_17->gl_ops.gl.p_glTexImage2D(VAR_10, 0, VAR_9, 256, 1, 0, VAR_0, VAR_12, 0);

    VAR_17->fbo_ops.glGenRenderbuffers(1, &VAR_21);
    VAR_17->fbo_ops.glBindRenderbuffer(VAR_8, VAR_21);
    VAR_17->fbo_ops.glRenderbufferStorage(VAR_8, VAR_16, 256, 1);

    VAR_17->fbo_ops.glGenFramebuffers(1, &VAR_19);
    VAR_17->fbo_ops.glBindFramebuffer(VAR_6, VAR_19);
    VAR_17->fbo_ops.glFramebufferTexture2D(VAR_6, VAR_1, VAR_10, VAR_20, 0);
    VAR_17->fbo_ops.glFramebufferRenderbuffer(VAR_6, VAR_3, VAR_8, VAR_21);
    FUNC_3("Setup framebuffer");

    VAR_17->gl_ops.gl.p_glClearColor(0.0f, 0.0f, 0.5f, 0.0f);
    VAR_17->gl_ops.gl.p_glClearDepth(0.5f);
    VAR_17->gl_ops.gl.p_glEnable(VAR_5);
    VAR_17->gl_ops.gl.p_glEnable(VAR_7);
    VAR_17->gl_ops.gl.p_glViewport(0, 0, 256, 1);
    FUNC_3("Misc parameters");

    for (;;)
    {
        if (VAR_23 - VAR_22 <= 1)
        {
            FUNC_0("PolygonOffset scale factor detection failed, using fallback value 2^%u.\n", VAR_27);
            VAR_24 = VAR_27;
            break;
        }
        VAR_24 = (VAR_22 + VAR_23) / 2;

        VAR_17->gl_ops.gl.p_glClear(VAR_2 | VAR_4);


        VAR_17->gl_ops.gl.p_glPolygonOffset(0.0f, (float)(1u << VAR_24) * 0.25f);
        FUNC_4(VAR_15, VAR_26, &VAR_18);
        FUNC_3("Test draw");


        VAR_17->gl_ops.gl.p_glBindTexture(VAR_10, VAR_20);
        VAR_17->gl_ops.gl.p_glGetTexImage(VAR_10, 0, VAR_0, VAR_12, VAR_25);
        FUNC_3("readback");

        FUNC_2("low %02u, high %02u, cur %2u, 0=0x%08x, 125=0x%08x, 131=0x%08x, 255=0x%08x\n",
                VAR_22, VAR_23, VAR_24, VAR_25[0], VAR_25[125], VAR_25[131], VAR_25[255]);

        if ((VAR_25[125] & 0xff) < 0xa0)
            VAR_23 = VAR_24;
        else if ((VAR_25[131] & 0xff) > 0xa0)
            VAR_22 = VAR_24;
        else
        {
            FUNC_2("Found scale factor 2^%u for format %x.\n", VAR_24, VAR_16);
            break;
        }
    }

    VAR_17->gl_ops.gl.p_glDeleteTextures(1, &VAR_20);
    VAR_17->fbo_ops.glDeleteRenderbuffers(1, &VAR_21);
    VAR_17->fbo_ops.glDeleteFramebuffers(1, &VAR_19);
    VAR_17->fbo_ops.glBindFramebuffer(VAR_6, 0);
    FUNC_3("Delete framebuffer");

    VAR_17->gl_ops.gl.p_glDisable(VAR_5);
    VAR_17->gl_ops.gl.p_glDisable(VAR_7);
    return (float)(1u << VAR_24);
}
