
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int p_glFogCoorddvEXT; int p_glFogCoorddEXT; int p_glFogCoordfvEXT; int p_glFogCoordfEXT; int p_glMultiTexCoord4svARB; int p_glMultiTexCoord2svARB; int p_glMultiTexCoord4fvARB; int p_glMultiTexCoord4fARB; int p_glMultiTexCoord3fvARB; int p_glMultiTexCoord3fARB; int p_glMultiTexCoord2fvARB; int p_glMultiTexCoord2fARB; int p_glMultiTexCoord1fvARB; int p_glMultiTexCoord1fARB; int p_glClientActiveTextureARB; int p_glActiveTexture; } ;
struct TYPE_4__ {int p_glColor4ub; int p_glColor3fv; int p_glColor3f; int p_glColor4fv; int p_glColor4f; int p_glVertex3fv; int p_glVertex3f; int p_glVertex4fv; int p_glVertex4f; int p_glFogfv; int p_glFogf; int p_glFogiv; int p_glFogi; int p_glGetDoublev; int p_glGetFloatv; int p_glGetIntegerv; } ;
struct TYPE_5__ {TYPE_3__ ext; TYPE_1__ gl; } ;
struct wined3d_gl_info {void** supported; TYPE_2__ gl_ops; } ;
typedef enum wined3d_gl_extension { ____Placeholder_wined3d_gl_extension } wined3d_gl_extension ;


 size_t VAR_0 ;
 size_t VAR_1 ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 void* VAR_2 ;
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
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;

void FUNC_2(struct wined3d_gl_info *VAR_50, enum wined3d_gl_extension VAR_51)
{
    switch (VAR_51)
    {
        case 129:
            if (VAR_50->supported[129])
                return;
            if (VAR_50->gl_ops.ext.p_glActiveTexture == VAR_16)
            {
                FUNC_0("ARB_multitexture emulation hooks already applied.\n");
                return;
            }
            FUNC_1("Applying GL_ARB_multitexture emulation hooks.\n");
            VAR_50->gl_ops.ext.p_glActiveTexture = VAR_16;
            VAR_50->gl_ops.ext.p_glClientActiveTextureARB = VAR_17;
            VAR_50->gl_ops.ext.p_glMultiTexCoord1fARB = VAR_36;
            VAR_50->gl_ops.ext.p_glMultiTexCoord1fvARB = VAR_37;
            VAR_50->gl_ops.ext.p_glMultiTexCoord2fARB = VAR_38;
            VAR_50->gl_ops.ext.p_glMultiTexCoord2fvARB = VAR_39;
            VAR_50->gl_ops.ext.p_glMultiTexCoord3fARB = VAR_41;
            VAR_50->gl_ops.ext.p_glMultiTexCoord3fvARB = VAR_42;
            VAR_50->gl_ops.ext.p_glMultiTexCoord4fARB = VAR_43;
            VAR_50->gl_ops.ext.p_glMultiTexCoord4fvARB = VAR_44;
            VAR_50->gl_ops.ext.p_glMultiTexCoord2svARB = VAR_40;
            VAR_50->gl_ops.ext.p_glMultiTexCoord4svARB = VAR_45;
            VAR_15 = VAR_50->gl_ops.gl.p_glGetIntegerv;
            VAR_50->gl_ops.gl.p_glGetIntegerv = VAR_35;
            VAR_14 = VAR_50->gl_ops.gl.p_glGetFloatv;
            VAR_50->gl_ops.gl.p_glGetFloatv = VAR_34;
            VAR_13 = VAR_50->gl_ops.gl.p_glGetDoublev;
            VAR_50->gl_ops.gl.p_glGetDoublev = VAR_33;
            VAR_50->supported[129] = VAR_2;
            return;

        case 128:
            if (VAR_50->supported[128])
                return;
            if (VAR_50->gl_ops.gl.p_glFogi == VAR_31)
            {
                FUNC_0("EXT_fog_coord emulation hooks already applied.\n");
                return;
            }
            FUNC_1("Applying GL_ARB_fog_coord emulation hooks\n");





            if (VAR_50->supported[VAR_0])
            {
                FUNC_0("GL implementation supports GL_ARB_fragment_program but not GL_EXT_fog_coord\n");
                FUNC_0("The fog coord emulation will most likely fail\n");
            }
            else if (VAR_50->supported[VAR_1])
            {
                FUNC_0("GL implementation supports GL_ARB_fragment_shader but not GL_EXT_fog_coord\n");
                FUNC_0("The fog coord emulation will most likely fail\n");
            }

            VAR_10 = VAR_50->gl_ops.gl.p_glFogi;
            VAR_50->gl_ops.gl.p_glFogi = VAR_31;
            VAR_11 = VAR_50->gl_ops.gl.p_glFogiv;
            VAR_50->gl_ops.gl.p_glFogiv = VAR_32;
            VAR_8 = VAR_50->gl_ops.gl.p_glFogf;
            VAR_50->gl_ops.gl.p_glFogf = VAR_29;
            VAR_9 = VAR_50->gl_ops.gl.p_glFogfv;
            VAR_50->gl_ops.gl.p_glFogfv = VAR_30;
            VAR_7 = VAR_4;
            VAR_4 = VAR_24;
            VAR_6 = VAR_3;
            VAR_3 = VAR_23;

            VAR_12 = VAR_50->gl_ops.gl.p_glVertex4f;
            VAR_50->gl_ops.gl.p_glVertex4f = VAR_48;
            VAR_50->gl_ops.gl.p_glVertex4fv = VAR_49;
            VAR_50->gl_ops.gl.p_glVertex3f = VAR_46;
            VAR_50->gl_ops.gl.p_glVertex3fv = VAR_47;

            VAR_5 = VAR_50->gl_ops.gl.p_glColor4f;
            VAR_50->gl_ops.gl.p_glColor4f = VAR_20;
            VAR_50->gl_ops.gl.p_glColor4fv = VAR_21;
            VAR_50->gl_ops.gl.p_glColor3f = VAR_18;
            VAR_50->gl_ops.gl.p_glColor3fv = VAR_19;
            VAR_50->gl_ops.gl.p_glColor4ub = VAR_22;

            VAR_50->gl_ops.ext.p_glFogCoordfEXT = VAR_27;
            VAR_50->gl_ops.ext.p_glFogCoordfvEXT = VAR_28;
            VAR_50->gl_ops.ext.p_glFogCoorddEXT = VAR_25;
            VAR_50->gl_ops.ext.p_glFogCoorddvEXT = VAR_26;
            VAR_50->supported[128] = VAR_2;
            return;

        default:
            FUNC_0("Extension %u emulation not supported.\n", VAR_51);
    }
}
