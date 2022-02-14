
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ (* p_glGetError ) () ;int (* p_glDisable ) (int ) ;int (* p_glDeleteTextures ) (int,int *) ;int (* p_glGetTexImage ) (int ,int ,int ,int ,int*) ;int (* p_glBindTexture ) (int ,int ) ;int (* p_glEnd ) () ;int (* p_glVertex2f ) (float,float) ;int (* p_glTexCoord2f ) (double,double) ;int (* p_glBegin ) (int ) ;int (* p_glClear ) (int ) ;int (* p_glClearColor ) (int ,int,int ,int ) ;int (* p_glLoadIdentity ) () ;int (* p_glMatrixMode ) (int ) ;int (* p_glViewport ) (int ,int ,int,int) ;int (* p_glDrawBuffer ) (int ) ;int (* p_glEnable ) (int ) ;int (* p_glTexParameteri ) (int ,int ,int ) ;int (* p_glTexImage2D ) (int ,int ,int ,int,int,int ,int ,int ,int const*) ;int (* p_glGenTextures ) (int,int *) ;} ;
struct TYPE_6__ {TYPE_2__ gl; } ;
struct TYPE_4__ {int (* glDeleteFramebuffers ) (int,int *) ;int (* glBindFramebuffer ) (int ,int ) ;int (* glFramebufferTexture2D ) (int ,int ,int ,int ,int ) ;int (* glGenFramebuffers ) (int,int *) ;} ;
struct wined3d_gl_info {TYPE_3__ gl_ops; TYPE_1__ fbo_ops; } ;
typedef int readback ;
typedef int GLuint ;
typedef int GLenum ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_1 (char*,int,int) ;
 int VAR_22 ;
 scalar_t__ FUNC_2 (int,int,int) ;
 int FUNC_3 (int*,int,int) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int,int *) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ,int ,int,int,int ,int ,int ,int const*) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (int ,int ,int ) ;
 int FUNC_12 (int ,int ,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int,int *) ;
 int FUNC_15 (int,int *) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (int ,int ,int ,int ,int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ,int ,int,int) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int ) ;
 int FUNC_22 () ;
 int FUNC_23 (int ) ;
 int FUNC_24 () ;
 int FUNC_25 (int ,int,int ,int ) ;
 int FUNC_26 (int ,int ) ;
 int FUNC_27 (int ) ;
 int FUNC_28 (int ) ;
 int FUNC_29 (double,double) ;
 int FUNC_30 (float,float) ;
 int FUNC_31 (double,double) ;
 int FUNC_32 (float,float) ;
 int FUNC_33 (double,double) ;
 int FUNC_34 (float,float) ;
 int FUNC_35 (double,double) ;
 int FUNC_36 (float,float) ;
 int FUNC_37 (int ,int ,int ,int,int,int ,int ,int ,int*) ;
 int FUNC_38 () ;
 int FUNC_39 (int ,int ) ;
 int FUNC_40 (int ,int ,int ,int ,int*) ;
 int FUNC_41 (int ,int ) ;
 int FUNC_42 (int,int *) ;
 int FUNC_43 (int,int *) ;
 int FUNC_44 (int,int *) ;
 int FUNC_45 (int ) ;
 scalar_t__ FUNC_46 () ;
 int FUNC_47 (int ,int ,int ) ;
 int FUNC_48 (int ,int ,int ) ;
 int FUNC_49 (int ,int ,int ) ;
 int FUNC_50 (int ,int ,int ) ;
 int FUNC_51 (int ,int ,int ) ;

__attribute__((used)) static BOOL FUNC_52(const struct wined3d_gl_info *VAR_23, GLenum VAR_24)
{
    static const DWORD VAR_25[] = {0x00000000, 0xffffffff};
    GLuint VAR_26, VAR_27, VAR_28;
    DWORD VAR_29[16 * 1];
    BOOL VAR_30 = VAR_0;
    while (VAR_23->gl_ops.gl.p_glGetError());

    VAR_23->gl_ops.gl.p_glGenTextures(1, &VAR_28);
    VAR_23->gl_ops.gl.p_glBindTexture(VAR_13, VAR_28);
    FUNC_3(VAR_29, 0x7e, sizeof(VAR_29));
    VAR_23->gl_ops.gl.p_glTexImage2D(VAR_13, 0, VAR_12, 16, 1, 0,
            VAR_11, VAR_20, VAR_29);
    VAR_23->gl_ops.gl.p_glTexParameteri(VAR_13, VAR_15, VAR_9);
    VAR_23->gl_ops.gl.p_glTexParameteri(VAR_13, VAR_14, VAR_9);
    VAR_23->gl_ops.gl.p_glTexParameteri(VAR_13, VAR_17, VAR_2);
    VAR_23->gl_ops.gl.p_glTexParameteri(VAR_13, VAR_18, VAR_2);
    VAR_23->gl_ops.gl.p_glTexParameteri(VAR_13, VAR_16, VAR_2);

    VAR_23->gl_ops.gl.p_glGenTextures(1, &VAR_26);
    VAR_23->gl_ops.gl.p_glBindTexture(VAR_13, VAR_26);
    VAR_23->gl_ops.gl.p_glTexImage2D(VAR_13, 0, VAR_24, 2, 1, 0,
            VAR_1, VAR_21, VAR_25);
    VAR_23->gl_ops.gl.p_glTexParameteri(VAR_13, VAR_15, VAR_7);
    VAR_23->gl_ops.gl.p_glTexParameteri(VAR_13, VAR_14, VAR_7);
    VAR_23->gl_ops.gl.p_glTexParameteri(VAR_13, VAR_17, VAR_2);
    VAR_23->gl_ops.gl.p_glTexParameteri(VAR_13, VAR_18, VAR_2);
    VAR_23->gl_ops.gl.p_glTexParameteri(VAR_13, VAR_16, VAR_2);
    VAR_23->gl_ops.gl.p_glEnable(VAR_13);

    VAR_23->fbo_ops.glGenFramebuffers(1, &VAR_27);
    VAR_23->fbo_ops.glBindFramebuffer(VAR_5, VAR_27);
    VAR_23->fbo_ops.glFramebufferTexture2D(VAR_5, VAR_3, VAR_13, VAR_28, 0);
    VAR_23->gl_ops.gl.p_glDrawBuffer(VAR_3);

    VAR_23->gl_ops.gl.p_glViewport(0, 0, 16, 1);
    VAR_23->gl_ops.gl.p_glDisable(VAR_6);
    VAR_23->gl_ops.gl.p_glMatrixMode(VAR_8);
    VAR_23->gl_ops.gl.p_glLoadIdentity();
    VAR_23->gl_ops.gl.p_glMatrixMode(VAR_10);
    VAR_23->gl_ops.gl.p_glLoadIdentity();

    VAR_23->gl_ops.gl.p_glClearColor(0, 1, 0, 0);
    VAR_23->gl_ops.gl.p_glClear(VAR_4);

    VAR_23->gl_ops.gl.p_glBegin(VAR_19);
    VAR_23->gl_ops.gl.p_glTexCoord2f(0.0, 0.0);
    VAR_23->gl_ops.gl.p_glVertex2f(-1.0f, -1.0f);
    VAR_23->gl_ops.gl.p_glTexCoord2f(1.0, 0.0);
    VAR_23->gl_ops.gl.p_glVertex2f(1.0f, -1.0f);
    VAR_23->gl_ops.gl.p_glTexCoord2f(0.0, 1.0);
    VAR_23->gl_ops.gl.p_glVertex2f(-1.0f, 1.0f);
    VAR_23->gl_ops.gl.p_glTexCoord2f(1.0, 1.0);
    VAR_23->gl_ops.gl.p_glVertex2f(1.0f, 1.0f);
    VAR_23->gl_ops.gl.p_glEnd();

    VAR_23->gl_ops.gl.p_glBindTexture(VAR_13, VAR_28);
    FUNC_3(VAR_29, 0x7f, sizeof(VAR_29));
    VAR_23->gl_ops.gl.p_glGetTexImage(VAR_13, 0, VAR_1, VAR_21, VAR_29);
    if (FUNC_2(VAR_29[6], 0xffffffff, 5) || FUNC_2(VAR_29[6], 0x00000000, 5)
            || FUNC_2(VAR_29[9], 0xffffffff, 5) || FUNC_2(VAR_29[9], 0x00000000, 5))
    {
        FUNC_1("Read back colors 0x%08x and 0x%08x close to unfiltered color, assuming no filtering\n",
              VAR_29[6], VAR_29[9]);
        VAR_30 = VAR_0;
    }
    else
    {
        FUNC_1("Read back colors are 0x%08x and 0x%08x, assuming texture is filtered\n",
              VAR_29[6], VAR_29[9]);
        VAR_30 = VAR_22;
    }

    VAR_23->fbo_ops.glBindFramebuffer(VAR_5, 0);
    VAR_23->fbo_ops.glDeleteFramebuffers(1, &VAR_27);
    VAR_23->gl_ops.gl.p_glDeleteTextures(1, &VAR_26);
    VAR_23->gl_ops.gl.p_glDeleteTextures(1, &VAR_28);
    VAR_23->gl_ops.gl.p_glDisable(VAR_13);

    if (VAR_23->gl_ops.gl.p_glGetError())
    {
        FUNC_0("Error during filtering test for format %x, returning no filtering\n", VAR_24);
        VAR_30 = VAR_0;
    }

    return VAR_30;
}
