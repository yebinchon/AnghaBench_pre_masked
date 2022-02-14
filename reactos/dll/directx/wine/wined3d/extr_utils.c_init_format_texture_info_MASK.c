
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct wined3d_gl_info {scalar_t__* supported; } ;
struct TYPE_11__ {int numerator; int denominator; } ;
struct wined3d_format {int* flags; scalar_t__ glInternal; scalar_t__ glGammaInternal; scalar_t__ id; int download; int upload; int conv_byte_count; TYPE_3__ height_scale; int color_fixup; int glType; int glFormat; int rtInternal; } ;
struct TYPE_12__ {int wined3d_creation_flags; } ;
struct wined3d_adapter {TYPE_4__ d3d_info; TYPE_2__* shader_backend; TYPE_1__* fragment_pipe; } ;
struct shader_caps {int wined3d_caps; } ;
struct fragment_caps {int wined3d_caps; } ;
struct TYPE_13__ {size_t extension; scalar_t__ gl_internal; scalar_t__ gl_srgb_internal; int flags; scalar_t__ base_format_id; int srgb_format_id; int download; int upload; int conv_byte_count; int gl_type; int gl_format; int gl_rt_internal; int id; } ;
struct TYPE_10__ {int (* shader_get_caps ) (struct wined3d_gl_info*,struct shader_caps*) ;} ;
struct TYPE_9__ {int (* get_caps ) (struct wined3d_gl_info*,struct fragment_caps*) ;} ;
typedef int BOOL ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 unsigned int FUNC_0 (TYPE_5__*) ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
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
 size_t VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 size_t VAR_20 ;
 size_t VAR_21 ;
 size_t VAR_22 ;
 size_t VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_1 (struct wined3d_format*,struct wined3d_format*) ;
 int FUNC_2 (struct wined3d_format*,int) ;
 int FUNC_3 (struct wined3d_format*,int) ;
 TYPE_5__* VAR_26 ;
 TYPE_5__* VAR_27 ;
 struct wined3d_format* FUNC_4 (struct wined3d_gl_info*,int ) ;
 int FUNC_5 (struct wined3d_adapter*,struct wined3d_format*,TYPE_5__*,struct wined3d_gl_info*,int,int) ;
 int FUNC_6 (struct wined3d_gl_info*,struct fragment_caps*) ;
 int FUNC_7 (struct wined3d_gl_info*,struct shader_caps*) ;

__attribute__((used)) static BOOL FUNC_8(struct wined3d_adapter *VAR_28, struct wined3d_gl_info *VAR_29)
{
    struct wined3d_format *VAR_30, *VAR_31;
    struct fragment_caps VAR_32;
    struct shader_caps VAR_33;
    unsigned int VAR_34, VAR_35;
    BOOL VAR_36;

    VAR_28->fragment_pipe->get_caps(VAR_29, &VAR_32);
    VAR_28->shader_backend->shader_get_caps(VAR_29, &VAR_33);
    VAR_36 = (VAR_32.wined3d_caps & VAR_16)
            && (VAR_33.wined3d_caps & VAR_24);

    for (VAR_34 = 0; VAR_34 < FUNC_0(VAR_27); ++VAR_34)
    {
        if (!(VAR_30 = FUNC_4(VAR_29, VAR_27[VAR_34].id)))
            return VAR_7;

        if (!VAR_29->supported[VAR_27[VAR_34].extension])
            continue;



        if (!VAR_29->supported[VAR_1]
                && (VAR_30->flags[VAR_20] & VAR_10))
            continue;


        if (!VAR_29->supported[VAR_5]
                && (VAR_30->flags[VAR_20] & VAR_11))
            continue;

        VAR_30->glInternal = VAR_27[VAR_34].gl_internal;
        VAR_30->glGammaInternal = VAR_27[VAR_34].gl_srgb_internal;
        VAR_30->rtInternal = VAR_27[VAR_34].gl_rt_internal;
        VAR_30->glFormat = VAR_27[VAR_34].gl_format;
        VAR_30->glType = VAR_27[VAR_34].gl_type;
        VAR_30->color_fixup = VAR_3;
        VAR_30->height_scale.numerator = 1;
        VAR_30->height_scale.denominator = 1;

        VAR_30->flags[VAR_19] |= VAR_27[VAR_34].flags;
        VAR_30->flags[VAR_20] |= VAR_27[VAR_34].flags;
        VAR_30->flags[VAR_17] |= VAR_27[VAR_34].flags;



        if (VAR_29->supported[VAR_4]
                && !(VAR_27[VAR_34].flags & (VAR_9 | VAR_14)))
            VAR_30->flags[VAR_21] |= VAR_27[VAR_34].flags;

        if (VAR_29->supported[VAR_0])
            VAR_30->flags[VAR_22] |= VAR_27[VAR_34].flags;

        if (VAR_29->supported[VAR_2])
            VAR_30->flags[VAR_23] |= VAR_27[VAR_34].flags;

        VAR_30->flags[VAR_18] |= VAR_27[VAR_34].flags;
        VAR_30->flags[VAR_18] &= ~VAR_15;

        if (VAR_30->glGammaInternal != VAR_30->glInternal
                && !(VAR_28->d3d_info.wined3d_creation_flags & VAR_25))
        {
            VAR_30->glGammaInternal = VAR_30->glInternal;
            FUNC_2(VAR_30, VAR_12 | VAR_13);
        }

        FUNC_5(VAR_28, VAR_30, &VAR_27[VAR_34], VAR_29, VAR_36, VAR_7);


        VAR_30->conv_byte_count = VAR_27[VAR_34].conv_byte_count;
        VAR_30->upload = VAR_27[VAR_34].upload;
        VAR_30->download = VAR_27[VAR_34].download;

        VAR_31 = ((void*)0);
        for (VAR_35 = 0; VAR_35 < FUNC_0(VAR_26); ++VAR_35)
        {
            if (VAR_26[VAR_35].base_format_id == VAR_30->id)
            {
                if (!(VAR_31 = FUNC_4(VAR_29, VAR_26[VAR_35].srgb_format_id)))
                    return VAR_7;
                break;
            }
        }
        if (!VAR_31)
            continue;

        FUNC_1(VAR_31, VAR_30);

        if (VAR_29->supported[VAR_6]
                && !(VAR_28->d3d_info.wined3d_creation_flags & VAR_25))
        {
            VAR_31->glInternal = VAR_27[VAR_34].gl_srgb_internal;
            VAR_31->glGammaInternal = VAR_27[VAR_34].gl_srgb_internal;
            FUNC_3(VAR_31, VAR_12 | VAR_13);
            FUNC_5(VAR_28, VAR_31, &VAR_27[VAR_34], VAR_29, VAR_36, VAR_8);
        }
    }

    return VAR_8;
}
