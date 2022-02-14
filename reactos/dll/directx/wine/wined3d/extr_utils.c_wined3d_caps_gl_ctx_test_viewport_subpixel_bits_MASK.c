
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int (* glBindFramebuffer ) (int ,int ) ;int (* glDeleteFramebuffers ) (int,int *) ;int (* glFramebufferTexture2D ) (int ,int ,int ,int ,int ) ;int (* glGenFramebuffers ) (int,int *) ;} ;
struct TYPE_4__ {int (* p_glDeleteTextures ) (int,int *) ;int (* p_glGetTexImage ) (int ,int ,int ,int ,int*) ;int (* p_glBindTexture ) (int ,int ) ;int (* p_glClear ) (int ) ;int (* p_glClearColor ) (float,float,float,float) ;int (* p_glTexImage2D ) (int ,int ,int ,unsigned int,int,int ,int ,int ,int *) ;int (* p_glTexParameteri ) (int ,int ,int ) ;int (* p_glGenTextures ) (int,int *) ;} ;
struct TYPE_5__ {TYPE_1__ gl; } ;
struct wined3d_gl_info {TYPE_3__ fbo_ops; TYPE_2__ gl_ops; } ;
struct wined3d_color {float member_0; float member_1; float member_2; float member_3; } ;
struct wined3d_caps_gl_ctx {struct wined3d_gl_info* gl_info; } ;
typedef int GLuint ;
typedef int DWORD ;
typedef int BOOL ;


 unsigned int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (char*,int,int,int,int) ;
 int VAR_9 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct wined3d_caps_gl_ctx*,int *,struct wined3d_color const*) ;
 int FUNC_5 (int ,float const,float const,float,float) ;
 int FUNC_6 (int,int *) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ,int ,int ,int*) ;
 int FUNC_9 (int,int *) ;
 int FUNC_10 (int,int *) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,int ,int ) ;
 int FUNC_14 (int ,int ,int ,unsigned int,int,int ,int ,int ,int *) ;
 int FUNC_15 (int,int *) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (int ,int ,int ,int ,int ) ;
 int FUNC_18 (float,float,float,float) ;
 int FUNC_19 (int ) ;

BOOL FUNC_20(struct wined3d_caps_gl_ctx *VAR_10)
{
    static const struct wined3d_color VAR_11 = {1.0f, 0.0f, 0.0f, 1.0f};
    const struct wined3d_gl_info *VAR_12 = VAR_10->gl_info;
    static const float VAR_13 = -63.0f / 128.0f;
    GLuint VAR_14, VAR_15;
    DWORD VAR_16[4];
    unsigned int VAR_17;

    VAR_12->gl_ops.gl.p_glGenTextures(1, &VAR_14);
    VAR_12->gl_ops.gl.p_glBindTexture(VAR_6, VAR_14);
    VAR_12->gl_ops.gl.p_glTexParameteri(VAR_6, VAR_7, 0);
    VAR_12->gl_ops.gl.p_glTexImage2D(VAR_6, 0, VAR_5, FUNC_0(VAR_16), 1, 0,
            VAR_1, VAR_8, ((void*)0));
    VAR_12->fbo_ops.glGenFramebuffers(1, &VAR_15);
    VAR_12->fbo_ops.glBindFramebuffer(VAR_4, VAR_15);
    VAR_12->fbo_ops.glFramebufferTexture2D(VAR_4, VAR_2,
            VAR_6, VAR_14, 0);
    FUNC_3("create resources");

    VAR_12->gl_ops.gl.p_glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    VAR_12->gl_ops.gl.p_glClear(VAR_3);
    FUNC_1(FUNC_5(0, VAR_13, VAR_13, 4.0f, 1.0f));
    FUNC_4(VAR_10, ((void*)0), &VAR_11);
    FUNC_3("draw");

    VAR_12->gl_ops.gl.p_glBindTexture(VAR_6, VAR_14);
    VAR_12->gl_ops.gl.p_glGetTexImage(VAR_6, 0,
            VAR_1, VAR_8, VAR_16);
    FUNC_3("readback");

    FUNC_2("Readback colors are 0x%08x, 0x%08x, 0x%08x, 0x%08x.\n",
            VAR_16[0], VAR_16[1], VAR_16[2], VAR_16[3]);

    VAR_12->gl_ops.gl.p_glDeleteTextures(1, &VAR_14);
    VAR_12->fbo_ops.glDeleteFramebuffers(1, &VAR_15);
    VAR_12->fbo_ops.glBindFramebuffer(VAR_4, 0);
    FUNC_3("delete resources");

    for (VAR_17 = 0; VAR_17 < FUNC_0(VAR_16); ++VAR_17)
    {
        if (VAR_16[VAR_17] != 0xffff0000)
            return VAR_0;
    }
    return VAR_9;
}
