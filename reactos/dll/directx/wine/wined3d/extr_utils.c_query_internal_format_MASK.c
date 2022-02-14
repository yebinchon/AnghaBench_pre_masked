
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int samples; int * samplers; } ;
struct wined3d_gl_info {int quirks; TYPE_1__ limits; scalar_t__* supported; } ;
struct wined3d_format_texture_info {int flags; } ;
struct wined3d_format {scalar_t__ glInternal; scalar_t__ glGammaInternal; int* flags; scalar_t__ id; unsigned int multisample_types; } ;
struct wined3d_adapter {int dummy; } ;
struct TYPE_4__ {scalar_t__ offscreen_rendering_mode; } ;
typedef unsigned int GLint ;
typedef int GLenum ;
typedef scalar_t__ BOOL ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 size_t VAR_27 ;
 size_t VAR_28 ;
 size_t VAR_29 ;
 size_t VAR_30 ;
 size_t VAR_31 ;
 size_t VAR_32 ;
 int VAR_33 ;
 size_t VAR_34 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct wined3d_format*,int) ;
 int FUNC_3 (struct wined3d_format*,int) ;
 int FUNC_4 (int ,scalar_t__,int ,unsigned int,unsigned int*) ;
 unsigned int FUNC_5 (unsigned int,int) ;
 int FUNC_6 (struct wined3d_gl_info*,struct wined3d_format*,scalar_t__,int ,int,char*) ;
 int FUNC_7 (struct wined3d_format*) ;
 unsigned int FUNC_8 (unsigned int) ;
 TYPE_2__ VAR_35 ;

__attribute__((used)) static void FUNC_9(struct wined3d_adapter *VAR_36,
        struct wined3d_format *VAR_37, const struct wined3d_format_texture_info *VAR_38,
        struct wined3d_gl_info *VAR_39, BOOL VAR_40, BOOL VAR_41)
{
    GLint VAR_42, VAR_43[VAR_15];
    unsigned int VAR_44, VAR_45;
    GLenum VAR_46;

    if (VAR_39->supported[VAR_2])
    {
        FUNC_6(VAR_39, VAR_37, VAR_37->glInternal, VAR_14,
                VAR_24, "vertex texture usage");
        FUNC_6(VAR_39, VAR_37, VAR_37->glInternal, VAR_7,
                VAR_18, "filtering");

        if (VAR_41 || VAR_37->glGammaInternal != VAR_37->glInternal)
        {
            FUNC_6(VAR_39, VAR_37, VAR_37->glGammaInternal, VAR_11,
                    VAR_20, "sRGB read");

            if (VAR_40)
                FUNC_6(VAR_39, VAR_37, VAR_37->glGammaInternal, VAR_12,
                        VAR_21, "sRGB write");
            else
                FUNC_2(VAR_37, VAR_21);

            if (!(VAR_37->flags[VAR_29] & (VAR_20 | VAR_21)))
                VAR_37->glGammaInternal = VAR_37->glInternal;
            else if (VAR_35.offscreen_rendering_mode != VAR_16
                    && VAR_39->supported[VAR_6])
                VAR_37->glInternal = VAR_37->glGammaInternal;
        }
    }
    else
    {
        if (!VAR_39->limits.samplers[VAR_34])
            FUNC_2(VAR_37, VAR_24);

        if (!(VAR_39->quirks & VAR_33))
            FUNC_3(VAR_37, VAR_18);
        else if (VAR_37->id != VAR_25 && VAR_37->id != VAR_26)
            FUNC_2(VAR_37, VAR_24);

        if (VAR_41 || VAR_37->glGammaInternal != VAR_37->glInternal)
        {

            if (!VAR_39->supported[VAR_5])
            {
                VAR_37->glGammaInternal = VAR_37->glInternal;
                FUNC_2(VAR_37, VAR_20 | VAR_21);
            }
            else if (VAR_35.offscreen_rendering_mode != VAR_16
                    && VAR_39->supported[VAR_6])
            {
                VAR_37->glInternal = VAR_37->glGammaInternal;
            }
        }

        if ((VAR_37->flags[VAR_29] & VAR_21) && !VAR_40)
            FUNC_2(VAR_37, VAR_21);

        if (!VAR_39->supported[VAR_0]
                && VAR_38->flags & (VAR_17 | VAR_22))
        {
            VAR_37->flags[VAR_28] &= ~VAR_23;
            VAR_37->flags[VAR_29] &= ~VAR_23;
            VAR_37->flags[VAR_30] &= ~VAR_23;
            VAR_37->flags[VAR_31] &= ~VAR_23;
            VAR_37->flags[VAR_32] &= ~VAR_23;
        }
    }

    FUNC_7(VAR_37);

    if (VAR_37->glInternal && VAR_37->flags[VAR_27]
            & (VAR_19 | VAR_17 | VAR_22))
    {
        if (VAR_39->supported[VAR_1])
        {
            VAR_46 = VAR_39->supported[VAR_3] ? VAR_13 : VAR_9;
            VAR_42 = 0;
            FUNC_0(FUNC_4(VAR_46, VAR_37->glInternal,
                    VAR_8, 1, &VAR_42));
            VAR_42 = FUNC_5(VAR_42, VAR_15);
            FUNC_0(FUNC_4(VAR_46, VAR_37->glInternal,
                    VAR_10, VAR_42, VAR_43));
            FUNC_1("query sample counts");
            for (VAR_44 = 0; VAR_44 < VAR_42; ++VAR_44)
            {
                if (VAR_43[VAR_44] > sizeof(VAR_37->multisample_types) * VAR_4)
                    continue;
                VAR_37->multisample_types |= 1u << (VAR_43[VAR_44] - 1);
            }
        }
        else
        {



                VAR_45 = FUNC_8(FUNC_5(VAR_39->limits.samples,
                        sizeof(VAR_37->multisample_types) * VAR_4));
                for (VAR_44 = 1; VAR_44 <= VAR_45; ++VAR_44)
                    VAR_37->multisample_types |= 1u << ((1u << VAR_44) - 1);



        }
    }
}
