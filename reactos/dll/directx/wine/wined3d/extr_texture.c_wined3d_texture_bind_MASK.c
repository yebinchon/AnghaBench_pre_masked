
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct wined3d_format* format; } ;
struct wined3d_texture {int flags; scalar_t__ target; int level_count; TYPE_1__ resource; } ;
struct TYPE_7__ {int (* p_glTexParameteriv ) (scalar_t__,int ,scalar_t__*) ;int (* p_glTexParameteri ) (scalar_t__,int ,int ) ;int (* p_glGenTextures ) (int,int *) ;} ;
struct TYPE_8__ {TYPE_3__ gl; } ;
struct wined3d_gl_info {TYPE_4__ gl_ops; scalar_t__* supported; } ;
struct color_fixup_desc {size_t x_source; size_t y_source; size_t z_source; size_t w_source; } ;
struct wined3d_format {struct color_fixup_desc color_fixup; } ;
struct wined3d_context {struct wined3d_gl_info* gl_info; } ;
struct TYPE_6__ {float lod_bias; float min_lod; float max_lod; int max_anisotropy; void* mip_filter; void* min_filter; void* mag_filter; void* address_v; void* address_u; void* srgb_decode; int comparison_func; void* compare; int border_color; void* address_w; } ;
struct gl_texture {TYPE_2__ sampler_desc; int name; scalar_t__ base_level; } ;
typedef scalar_t__ GLint ;
typedef scalar_t__ GLenum ;
typedef void* BOOL ;


 size_t VAR_0 ;
 int FUNC_0 (char*) ;
 size_t VAR_1 ;
 void* VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;

 int VAR_5 ;
 int VAR_6 ;


 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;

 int FUNC_1 (char*,struct wined3d_texture*,...) ;
 void* VAR_16 ;
 int VAR_17 ;
 size_t VAR_18 ;
 void* VAR_19 ;
 void* VAR_20 ;
 void* VAR_21 ;
 void* VAR_22 ;
 void* VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 scalar_t__ FUNC_2 (struct wined3d_gl_info const*,struct wined3d_format const*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct wined3d_context*,scalar_t__,int ) ;
 int FUNC_5 (struct color_fixup_desc const) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (struct wined3d_context*,struct wined3d_texture*) ;
 int FUNC_8 (int,int *) ;
 int FUNC_9 (scalar_t__,int ,int ) ;
 int FUNC_10 (scalar_t__,int ,scalar_t__*) ;
 int FUNC_11 (scalar_t__,int ,int ) ;
 int FUNC_12 (scalar_t__,int ,int ) ;
 int FUNC_13 (scalar_t__,int ,int ) ;
 int FUNC_14 (scalar_t__,int ,int ) ;
 int FUNC_15 (scalar_t__,int ,int ) ;
 int FUNC_16 (scalar_t__,int ,int ) ;
 int FUNC_17 (scalar_t__,int ,int ) ;
 int FUNC_18 (scalar_t__,int ,int ) ;
 struct gl_texture* FUNC_19 (struct wined3d_texture*,void*) ;
 int FUNC_20 (struct wined3d_texture*) ;

void FUNC_21(struct wined3d_texture *VAR_26,
        struct wined3d_context *VAR_27, BOOL VAR_28)
{
    const struct wined3d_gl_info *VAR_29 = VAR_27->gl_info;
    const struct wined3d_format *VAR_30 = VAR_26->resource.format;
    const struct color_fixup_desc VAR_31 = VAR_30->color_fixup;
    struct gl_texture *VAR_32;
    GLenum VAR_33;

    FUNC_1("texture %p, context %p, srgb %#x.\n", VAR_26, VAR_27, VAR_28);

    if (!FUNC_7(VAR_27, VAR_26))
        VAR_28 = VAR_2;


    if (VAR_28)
        VAR_26->flags |= VAR_25;
    else
        VAR_26->flags &= ~VAR_25;

    VAR_32 = FUNC_19(VAR_26, VAR_28);
    VAR_33 = VAR_26->target;

    if (VAR_32->name)
    {
        FUNC_4(VAR_27, VAR_33, VAR_32->name);
        return;
    }

    VAR_29->gl_ops.gl.p_glGenTextures(1, &VAR_32->name);
    FUNC_3("glGenTextures");
    FUNC_1("Generated texture %d.\n", VAR_32->name);

    if (!VAR_32->name)
    {
        FUNC_0("Failed to generate a texture name.\n");
        return;
    }



    VAR_32->sampler_desc.address_u = VAR_20;
    VAR_32->sampler_desc.address_v = VAR_20;
    VAR_32->sampler_desc.address_w = VAR_20;
    FUNC_6(VAR_32->sampler_desc.border_color, 0, sizeof(VAR_32->sampler_desc.border_color));
    VAR_32->sampler_desc.mag_filter = VAR_21;
    VAR_32->sampler_desc.min_filter = VAR_23;
    VAR_32->sampler_desc.mip_filter = VAR_21;
    VAR_32->sampler_desc.lod_bias = 0.0f;
    VAR_32->sampler_desc.min_lod = -1000.0f;
    VAR_32->sampler_desc.max_lod = 1000.0f;
    VAR_32->sampler_desc.max_anisotropy = 1;
    VAR_32->sampler_desc.compare = VAR_2;
    VAR_32->sampler_desc.comparison_func = VAR_17;
    if (VAR_27->gl_info->supported[VAR_1])
        VAR_32->sampler_desc.srgb_decode = VAR_16;
    else
        VAR_32->sampler_desc.srgb_decode = VAR_28;
    VAR_32->base_level = 0;
    FUNC_20(VAR_26);

    FUNC_4(VAR_27, VAR_33, VAR_32->name);







    if (VAR_33 != VAR_11)
    {
        FUNC_1("Setting GL_TEXTURE_MAX_LEVEL to %u.\n", VAR_26->level_count - 1);
        VAR_29->gl_ops.gl.p_glTexParameteri(VAR_33, VAR_9, VAR_26->level_count - 1);
        FUNC_3("glTexParameteri(target, GL_TEXTURE_MAX_LEVEL, texture->level_count)");
    }

    if (VAR_33 == VAR_7)
    {

        VAR_29->gl_ops.gl.p_glTexParameteri(VAR_33, VAR_14, VAR_3);
        VAR_29->gl_ops.gl.p_glTexParameteri(VAR_33, VAR_15, VAR_3);
        VAR_29->gl_ops.gl.p_glTexParameteri(VAR_33, VAR_13, VAR_3);
    }

    if (VAR_26->flags & VAR_24)
    {
        VAR_29->gl_ops.gl.p_glTexParameteri(VAR_33, VAR_14, VAR_3);
        VAR_29->gl_ops.gl.p_glTexParameteri(VAR_33, VAR_15, VAR_3);
        VAR_29->gl_ops.gl.p_glTexParameteri(VAR_33, VAR_10, VAR_6);
        VAR_29->gl_ops.gl.p_glTexParameteri(VAR_33, VAR_8, VAR_6);
        FUNC_3("glTexParameteri");
        VAR_32->sampler_desc.address_u = VAR_19;
        VAR_32->sampler_desc.address_v = VAR_19;
        VAR_32->sampler_desc.mag_filter = VAR_23;
        VAR_32->sampler_desc.min_filter = VAR_23;
        VAR_32->sampler_desc.mip_filter = VAR_22;
    }

    if (VAR_29->supported[VAR_18] && VAR_29->supported[VAR_0])
    {
        VAR_29->gl_ops.gl.p_glTexParameteri(VAR_33, VAR_4, VAR_5);
        FUNC_3("glTexParameteri(GL_DEPTH_TEXTURE_MODE_ARB, GL_INTENSITY)");
    }

    if (!FUNC_5(VAR_31) && FUNC_2(VAR_29, VAR_30))
    {
        static const GLenum VAR_34[] =
        {
            128,
            130,
            129,
            131,
            132,
            133,
        };
        struct
        {
            GLint x, y, z, w;
        }
        VAR_35;

        VAR_35.x = VAR_34[VAR_31.x_source];
        VAR_35.y = VAR_34[VAR_31.y_source];
        VAR_35.z = VAR_34[VAR_31.z_source];
        VAR_35.w = VAR_34[VAR_31.w_source];
        VAR_29->gl_ops.gl.p_glTexParameteriv(VAR_33, VAR_12, &VAR_35.x);
        FUNC_3("glTexParameteriv(GL_TEXTURE_SWIZZLE_RGBA)");
    }
}
