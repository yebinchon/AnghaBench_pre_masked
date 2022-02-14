
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wined3d_resource {int access; struct wined3d_format* format; } ;
struct wined3d_format {scalar_t__ id; int* flags; int color_fixup; } ;
struct wined3d_context {TYPE_2__* d3d_info; TYPE_1__* gl_info; } ;
typedef enum wined3d_blit_op { ____Placeholder_wined3d_blit_op } wined3d_blit_op ;
typedef enum complex_fixup { ____Placeholder_complex_fixup } complex_fixup ;
struct TYPE_6__ {scalar_t__ offscreen_rendering_mode; } ;
struct TYPE_5__ {int shader_color_key; } ;
struct TYPE_4__ {int * supported; } ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 size_t VAR_0 ;





 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*,...) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;



 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 TYPE_3__ VAR_14 ;

__attribute__((used)) static BOOL FUNC_8(enum wined3d_blit_op VAR_15, const struct wined3d_context *VAR_16,
        const struct wined3d_resource *VAR_17, DWORD VAR_18,
        const struct wined3d_resource *VAR_19, DWORD VAR_20)
{
    const struct wined3d_format *VAR_21 = VAR_17->format;
    const struct wined3d_format *VAR_22 = VAR_19->format;
    enum complex_fixup VAR_23;
    BOOL VAR_24;

    if (!VAR_16->gl_info->supported[VAR_0])
        return VAR_1;

    if (VAR_15 == VAR_8 && VAR_22->id == VAR_21->id)
    {
        if (VAR_22->flags[VAR_9] & (VAR_5 | VAR_6))
            VAR_15 = VAR_7;
        else
            VAR_15 = 130;
    }

    switch (VAR_15)
    {
        case 128:
            if (!VAR_16->d3d_info->shader_color_key)
            {

                FUNC_1("Color keying not supported with converted textures.\n");
                return VAR_1;
            }
        case 129:
        case 130:
            break;

        default:
            FUNC_1("Unsupported blit_op=%d\n", VAR_15);
            return VAR_1;
    }

    VAR_24 = VAR_21 && (VAR_21->flags[VAR_9] & VAR_4)
            && !(VAR_22->flags[VAR_9] & VAR_4);
    if (!VAR_24 && !(VAR_17->access & VAR_19->access & VAR_11))
        return VAR_1;

    VAR_23 = FUNC_5(VAR_21->color_fixup);
    if (FUNC_2(VAR_13) && FUNC_2(VAR_12))
    {
        FUNC_1("Checking support for fixup:\n");
        FUNC_4(VAR_21->color_fixup);
    }

    if (!FUNC_7(VAR_22->color_fixup)
            && (VAR_22->id != VAR_21->id || VAR_20 != VAR_10))
    {
        FUNC_1("Destination fixups are not supported\n");
        return VAR_1;
    }

    if (FUNC_7(VAR_21->color_fixup))
    {
        FUNC_1("[OK]\n");
        return VAR_3;
    }


    if (!FUNC_6(VAR_21->color_fixup))
    {
        if (VAR_14.offscreen_rendering_mode == VAR_2)
        {
            FUNC_3("Claiming fixup support because of ORM_BACKBUFFER.\n");
            return VAR_3;
        }

        FUNC_1("[FAILED]\n");
        return VAR_1;
    }

    switch(VAR_23)
    {
        case 132:
        case 133:
        case 131:
        case 135:
        case 134:
            FUNC_1("[OK]\n");
            return VAR_3;

        default:
            FUNC_0("Unsupported YUV fixup %#x\n", VAR_23);
            FUNC_1("[FAILED]\n");
            return VAR_1;
    }
}
