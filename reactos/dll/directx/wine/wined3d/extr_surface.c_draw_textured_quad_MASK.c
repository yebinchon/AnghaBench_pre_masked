
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {int srgb_decode; int mip_filter; void* min_filter; void* mag_filter; } ;
struct TYPE_14__ {TYPE_4__ sampler_desc; int name; } ;
struct wined3d_texture {TYPE_5__ texture_rgb; } ;
struct TYPE_11__ {int (* p_glEnd ) () ;int (* p_glVertex2i ) (int ,int ) ;int (* p_glTexCoord3fv ) (int *) ;int (* p_glBegin ) (int ) ;int (* p_glTexEnvi ) (int ,int ,int ) ;int (* p_glTexParameteri ) (int ,int ,int ) ;int (* p_glEnable ) (int ) ;} ;
struct TYPE_12__ {TYPE_2__ gl; } ;
struct wined3d_gl_info {TYPE_3__ gl_ops; scalar_t__* supported; } ;
struct wined3d_context {struct wined3d_gl_info* gl_info; } ;
struct blt_info {int bind_target; TYPE_1__* texcoords; } ;
typedef enum wined3d_texture_filter_type { ____Placeholder_wined3d_texture_filter_type } wined3d_texture_filter_type ;
struct TYPE_15__ {int bottom; int right; int left; int top; } ;
struct TYPE_10__ {int x; } ;
typedef TYPE_6__ RECT ;


 size_t VAR_0 ;
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
 void* VAR_14 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct wined3d_context*,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 () ;
 int FUNC_11 (int ,int ,int ) ;
 int FUNC_12 (int ,int ,int ) ;
 int FUNC_13 (int ,int ,int ) ;
 int FUNC_14 (int ,int ,int ) ;
 int FUNC_15 (int ,int ,int ) ;
 int FUNC_16 (int ,int ,int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (struct wined3d_texture*,unsigned int,TYPE_6__ const*,struct blt_info*) ;
 int FUNC_20 (int) ;
 int FUNC_21 (int,int ) ;

void FUNC_22(struct wined3d_texture *VAR_15, unsigned int VAR_16,
        struct wined3d_context *VAR_17, const RECT *VAR_18, const RECT *VAR_19,
        enum wined3d_texture_filter_type VAR_20)
{
    const struct wined3d_gl_info *VAR_21 = VAR_17->gl_info;
    struct blt_info VAR_22;

    FUNC_19(VAR_15, VAR_16, VAR_18, &VAR_22);

    VAR_21->gl_ops.gl.p_glEnable(VAR_22.bind_target);
    FUNC_0("glEnable(bind_target)");

    FUNC_1(VAR_17, VAR_22.bind_target, VAR_15->texture_rgb.name);


    VAR_21->gl_ops.gl.p_glTexParameteri(VAR_22.bind_target, VAR_7, FUNC_20(VAR_20));
    FUNC_0("glTexParameteri");
    VAR_21->gl_ops.gl.p_glTexParameteri(VAR_22.bind_target, VAR_8,
            FUNC_21(VAR_20, VAR_13));
    FUNC_0("glTexParameteri");
    VAR_21->gl_ops.gl.p_glTexParameteri(VAR_22.bind_target, VAR_10, VAR_2);
    VAR_21->gl_ops.gl.p_glTexParameteri(VAR_22.bind_target, VAR_11, VAR_2);
    if (VAR_17->gl_info->supported[VAR_0])
        VAR_21->gl_ops.gl.p_glTexParameteri(VAR_22.bind_target, VAR_9, VAR_4);
    VAR_21->gl_ops.gl.p_glTexEnvi(VAR_5, VAR_6, VAR_3);
    FUNC_0("glTexEnvi");


    VAR_21->gl_ops.gl.p_glBegin(VAR_12);
    VAR_21->gl_ops.gl.p_glTexCoord3fv(&VAR_22.texcoords[0].x);
    VAR_21->gl_ops.gl.p_glVertex2i(VAR_19->left, VAR_19->top);

    VAR_21->gl_ops.gl.p_glTexCoord3fv(&VAR_22.texcoords[1].x);
    VAR_21->gl_ops.gl.p_glVertex2i(VAR_19->right, VAR_19->top);

    VAR_21->gl_ops.gl.p_glTexCoord3fv(&VAR_22.texcoords[2].x);
    VAR_21->gl_ops.gl.p_glVertex2i(VAR_19->left, VAR_19->bottom);

    VAR_21->gl_ops.gl.p_glTexCoord3fv(&VAR_22.texcoords[3].x);
    VAR_21->gl_ops.gl.p_glVertex2i(VAR_19->right, VAR_19->bottom);
    VAR_21->gl_ops.gl.p_glEnd();


    FUNC_1(VAR_17, VAR_22.bind_target, 0);



    VAR_15->texture_rgb.sampler_desc.mag_filter = VAR_14;
    VAR_15->texture_rgb.sampler_desc.min_filter = VAR_14;
    VAR_15->texture_rgb.sampler_desc.mip_filter = VAR_13;
    VAR_15->texture_rgb.sampler_desc.srgb_decode = VAR_1;
}
