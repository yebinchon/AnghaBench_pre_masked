
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wined3d_resource {int access; int usage; struct wined3d_format* format; } ;
struct TYPE_3__ {int glBlitFramebuffer; } ;
struct wined3d_gl_info {TYPE_1__ fbo_ops; } ;
struct wined3d_format {int* flags; int color_fixup; int id; } ;
typedef enum wined3d_blit_op { ____Placeholder_wined3d_blit_op } wined3d_blit_op ;
struct TYPE_4__ {scalar_t__ offscreen_rendering_mode; } ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;


 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 TYPE_2__ VAR_10 ;

__attribute__((used)) static BOOL FUNC_3(enum wined3d_blit_op VAR_11, const struct wined3d_gl_info *VAR_12,
        const struct wined3d_resource *VAR_13, DWORD VAR_14,
        const struct wined3d_resource *VAR_15, DWORD VAR_16)
{
    const struct wined3d_format *VAR_17 = VAR_13->format;
    const struct wined3d_format *VAR_18 = VAR_15->format;

    if ((VAR_10.offscreen_rendering_mode != VAR_1) || !VAR_12->fbo_ops.glBlitFramebuffer)
        return VAR_0;


    if (!(VAR_13->access & VAR_15->access & VAR_9))
        return VAR_0;

    switch (VAR_11)
    {
        case 129:
            if (!((VAR_17->flags[VAR_7] & VAR_4)
                    || (VAR_13->usage & VAR_6)))
                return VAR_0;
            if (!((VAR_18->flags[VAR_7] & VAR_4)
                    || (VAR_15->usage & VAR_6)))
                return VAR_0;
            if ((VAR_17->id != VAR_18->id || VAR_16 == VAR_8)
                    && (!FUNC_1(VAR_17->color_fixup) || !FUNC_1(VAR_18->color_fixup)))
                return VAR_0;
            break;

        case 128:
            if (!(VAR_17->flags[VAR_7] & (VAR_3 | VAR_5)))
                return VAR_0;
            if (!(VAR_18->flags[VAR_7] & (VAR_3 | VAR_5)))
                return VAR_0;



            if (FUNC_0(VAR_17->color_fixup) || FUNC_0(VAR_18->color_fixup)
                    || FUNC_2(VAR_17->color_fixup) || FUNC_2(VAR_18->color_fixup))
                return VAR_0;
            break;

        default:
            return VAR_0;
    }

    return VAR_2;
}
