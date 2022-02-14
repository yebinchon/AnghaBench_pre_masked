
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ (* p_glGetError ) () ;int (* p_glTexParameteri ) (int ,int ,int ) ;int (* p_glTexImage2D ) (int ,int ,int ,int,int,int ,int ,int ,int *) ;int (* p_glBindTexture ) (int ,int ) ;int (* p_glGenTextures ) (int,int *) ;int (* p_glTexImage1D ) (int ,int ,int ,int,int ,int ,int ,int *) ;} ;
struct TYPE_6__ {TYPE_2__ gl; } ;
struct TYPE_4__ {int (* glFramebufferRenderbuffer ) (int ,int ,int ,int ) ;int (* glRenderbufferStorage ) (int ,int ,int,int) ;int (* glBindRenderbuffer ) (int ,int ) ;int (* glGenRenderbuffers ) (int,int *) ;int (* glFramebufferTexture2D ) (int ,int ,int ,int ,int ) ;int (* glFramebufferTexture3D ) (int ,int ,int ,int ,int ,int ) ;int (* glFramebufferTexture1D ) (int ,int ,int ,int ,int ) ;} ;
struct wined3d_gl_info {TYPE_3__ gl_ops; TYPE_1__ fbo_ops; } ;
typedef enum wined3d_gl_resource_type { ____Placeholder_wined3d_gl_resource_type } wined3d_gl_resource_type ;
typedef int GLuint ;
typedef int GLenum ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
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
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 int FUNC_1 (int ,int ,int ,int,int,int,int ,int ,int ,int *) ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (int ,int ,int ,int,int,int ,int ,int ,int *) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int ,int ,int ,int ) ;
 int FUNC_7 (int ,int ,int ,int ,int ) ;
 int FUNC_8 (int,int *) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (int ,int ,int ) ;
 int FUNC_12 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_15 (int,int *) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (int ,int ,int ,int,int,int ,int ,int ,int *) ;
 int FUNC_18 (int ,int ,int ,int,int,int ,int ,int ,int *) ;
 int FUNC_19 (int ,int ,int ,int,int,int ,int ,int ,int *) ;
 int FUNC_20 (int ,int ,int ,int,int,int ,int ,int ,int *) ;
 int FUNC_21 (int ,int ,int ,int,int,int ,int ,int ,int *) ;
 int FUNC_22 (int ,int ,int ,int,int,int ,int ,int ,int *) ;
 int FUNC_23 (int ,int ,int ) ;
 int FUNC_24 (int ,int ,int ,int,int ,int ,int ,int *) ;
 int FUNC_25 (int ,int ,int ) ;
 int FUNC_26 (int ,int ,int ,int ,int ) ;
 int FUNC_27 (int ,int ,int ,int ,int ) ;
 int FUNC_28 (int,int *) ;
 int FUNC_29 (int ,int ) ;
 int FUNC_30 (int ,int ,int,int) ;
 int FUNC_31 (int ,int ,int ,int ) ;
 int FUNC_32 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_33 () ;
 int FUNC_34 (int ,int ,int ) ;
 int FUNC_35 (int ,int ,int ) ;
 int FUNC_36 (int ,int ,int ,int ,int ) ;
 int FUNC_37 (int ,int ,int ,int ,int ) ;
 int FUNC_38 (int,int *) ;
 int FUNC_39 (int ,int ) ;
 int FUNC_40 (int) ;

__attribute__((used)) static void FUNC_41(const struct wined3d_gl_info *VAR_19, unsigned int VAR_20,
        enum wined3d_gl_resource_type VAR_21, GLuint *VAR_22, GLenum VAR_23, GLenum VAR_24, GLenum VAR_25)
{
    GLenum VAR_26 = VAR_20 & VAR_17 ?
            VAR_1 : VAR_0;

    switch (VAR_21)
    {
        case 132:
            VAR_19->gl_ops.gl.p_glGenTextures(1, VAR_22);
            VAR_19->gl_ops.gl.p_glBindTexture(VAR_6, *VAR_22);
            VAR_19->gl_ops.gl.p_glTexImage1D(VAR_6, 0, VAR_23, 16, 0, VAR_24, VAR_25, ((void*)0));
            VAR_19->gl_ops.gl.p_glTexParameteri(VAR_6, VAR_16, VAR_3);
            VAR_19->gl_ops.gl.p_glTexParameteri(VAR_6, VAR_15, VAR_3);

            VAR_19->fbo_ops.glFramebufferTexture1D(VAR_2, VAR_26, VAR_6,
                    *VAR_22, 0);
            if (VAR_20 & VAR_18)
                VAR_19->fbo_ops.glFramebufferTexture1D(VAR_2, VAR_5, VAR_6,
                        *VAR_22, 0);
            break;

        case 131:
        case 128:
            VAR_19->gl_ops.gl.p_glGenTextures(1, VAR_22);
            VAR_19->gl_ops.gl.p_glBindTexture(FUNC_40(VAR_21), *VAR_22);
            VAR_19->gl_ops.gl.p_glTexImage2D(FUNC_40(VAR_21), 0, VAR_23, 16, 16, 0,
                    VAR_24, VAR_25, ((void*)0));
            VAR_19->gl_ops.gl.p_glTexParameteri(FUNC_40(VAR_21), VAR_16, VAR_3);
            VAR_19->gl_ops.gl.p_glTexParameteri(FUNC_40(VAR_21), VAR_15, VAR_3);

            VAR_19->fbo_ops.glFramebufferTexture2D(VAR_2, VAR_26,
                    FUNC_40(VAR_21), *VAR_22, 0);
            if (VAR_20 & VAR_18)
                VAR_19->fbo_ops.glFramebufferTexture2D(VAR_2, VAR_5,
                        FUNC_40(VAR_21), *VAR_22, 0);
            break;

        case 130:
            VAR_19->gl_ops.gl.p_glGenTextures(1, VAR_22);
            VAR_19->gl_ops.gl.p_glBindTexture(VAR_7, *VAR_22);
            FUNC_0(FUNC_1(VAR_7, 0, VAR_23, 16, 16, 16, 0, VAR_24, VAR_25, ((void*)0)));
            VAR_19->gl_ops.gl.p_glTexParameteri(VAR_7, VAR_16, VAR_3);
            VAR_19->gl_ops.gl.p_glTexParameteri(VAR_7, VAR_15, VAR_3);

            VAR_19->fbo_ops.glFramebufferTexture3D(VAR_2, VAR_26,
                    VAR_7, *VAR_22, 0, 0);
            if (VAR_20 & VAR_18)
                VAR_19->fbo_ops.glFramebufferTexture3D(VAR_2, VAR_5,
                        VAR_7, *VAR_22, 0, 0);
            break;

        case 129:
            VAR_19->gl_ops.gl.p_glGenTextures(1, VAR_22);
            VAR_19->gl_ops.gl.p_glBindTexture(VAR_8, *VAR_22);
            VAR_19->gl_ops.gl.p_glTexImage2D(VAR_12, 0, VAR_23, 16, 16, 0,
                    VAR_24, VAR_25, ((void*)0));
            VAR_19->gl_ops.gl.p_glTexImage2D(VAR_9, 0, VAR_23, 16, 16, 0,
                    VAR_24, VAR_25, ((void*)0));
            VAR_19->gl_ops.gl.p_glTexImage2D(VAR_13, 0, VAR_23, 16, 16, 0,
                    VAR_24, VAR_25, ((void*)0));
            VAR_19->gl_ops.gl.p_glTexImage2D(VAR_10, 0, VAR_23, 16, 16, 0,
                    VAR_24, VAR_25, ((void*)0));
            VAR_19->gl_ops.gl.p_glTexImage2D(VAR_14, 0, VAR_23, 16, 16, 0,
                    VAR_24, VAR_25, ((void*)0));
            VAR_19->gl_ops.gl.p_glTexImage2D(VAR_11, 0, VAR_23, 16, 16, 0,
                    VAR_24, VAR_25, ((void*)0));
            VAR_19->gl_ops.gl.p_glTexParameteri(VAR_8, VAR_16, VAR_3);
            VAR_19->gl_ops.gl.p_glTexParameteri(VAR_8, VAR_15, VAR_3);

            VAR_19->fbo_ops.glFramebufferTexture2D(VAR_2, VAR_26,
                    VAR_12, *VAR_22, 0);
            if (VAR_20 & VAR_18)
                VAR_19->fbo_ops.glFramebufferTexture2D(VAR_2, VAR_5,
                        VAR_12, *VAR_22, 0);
            break;

        case 133:
            VAR_19->fbo_ops.glGenRenderbuffers(1, VAR_22);
            VAR_19->fbo_ops.glBindRenderbuffer(VAR_4, *VAR_22);
            VAR_19->fbo_ops.glRenderbufferStorage(VAR_4, VAR_23, 16, 16);
            VAR_19->fbo_ops.glFramebufferRenderbuffer(VAR_2, VAR_26, VAR_4,
                    *VAR_22);
            if (VAR_20 & VAR_18)
                VAR_19->fbo_ops.glFramebufferRenderbuffer(VAR_2, VAR_5, VAR_4,
                        *VAR_22);
            break;

        case 135:
        case 134:
            break;
    }






    while (VAR_19->gl_ops.gl.p_glGetError());
}
