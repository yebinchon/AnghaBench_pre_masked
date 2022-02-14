
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wined3d_resource {int access; int usage; struct wined3d_format* format; } ;
struct wined3d_format {int* flags; scalar_t__ id; int color_fixup; } ;
struct wined3d_context {TYPE_2__* gl_info; TYPE_1__* d3d_info; } ;
typedef enum wined3d_blit_op { ____Placeholder_wined3d_blit_op } wined3d_blit_op ;
struct TYPE_6__ {int offscreen_rendering_mode; } ;
struct TYPE_5__ {int * supported; } ;
struct TYPE_4__ {int shader_color_key; } ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;



 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 TYPE_3__ VAR_14 ;

__attribute__((used)) static BOOL FUNC_5(enum wined3d_blit_op VAR_15, const struct wined3d_context *VAR_16,
        const struct wined3d_resource *VAR_17, DWORD VAR_18,
        const struct wined3d_resource *VAR_19, DWORD VAR_20)
{
    const struct wined3d_format *VAR_21 = VAR_17->format;
    const struct wined3d_format *VAR_22 = VAR_19->format;
    BOOL VAR_23;

    VAR_23 = VAR_21 && (VAR_21->flags[VAR_10] & VAR_3)
            && !(VAR_22->flags[VAR_10] & VAR_3);
    if (!VAR_23 && !(VAR_17->access & VAR_19->access & VAR_12))
    {
        FUNC_0("Source or destination resource is not GPU accessible.\n");
        return VAR_0;
    }

    if (VAR_15 == VAR_8 && VAR_22->id == VAR_21->id)
    {
        if (VAR_22->flags[VAR_10] & (VAR_4 | VAR_5))
            VAR_15 = VAR_7;
        else
            VAR_15 = 130;
    }

    switch (VAR_15)
    {
        case 128:
            if (VAR_16->d3d_info->shader_color_key)
            {
                FUNC_0("Color keying requires converted textures.\n");
                return VAR_0;
            }
        case 130:
        case 129:
            if (!VAR_16->gl_info->supported[VAR_9])
                return VAR_0;

            if (FUNC_1(VAR_13))
            {
                FUNC_0("Checking support for fixup:\n");
                FUNC_3(VAR_21->color_fixup);
            }


            if (!FUNC_4(VAR_21->color_fixup)
                    || !FUNC_4(VAR_22->color_fixup))
            {
                if (VAR_14.offscreen_rendering_mode == VAR_1
                        && VAR_22->id == VAR_21->id && VAR_20 == VAR_11)
                {
                    FUNC_2("Claiming fixup support because of ORM_BACKBUFFER.\n");
                }
                else
                {
                    FUNC_0("Fixups are not supported.\n");
                    return VAR_0;
                }
            }

            if (!(VAR_19->usage & VAR_6))
            {
                FUNC_0("Can only blit to render targets.\n");
                return VAR_0;
            }
            return VAR_2;

        default:
            FUNC_0("Unsupported blit operation %#x.\n", VAR_15);
            return VAR_0;
    }
}
