
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int glsl_varyings; } ;
struct wined3d_gl_info {struct wined3d_format* formats; TYPE_1__ limits; scalar_t__* supported; } ;
struct wined3d_format {int glInternal; } ;
typedef enum wined3d_pci_vendor { ____Placeholder_wined3d_pci_vendor } wined3d_pci_vendor ;
typedef enum wined3d_format_id { ____Placeholder_wined3d_format_id } wined3d_format_id ;
struct TYPE_4__ {scalar_t__ offscreen_rendering_mode; } ;
typedef scalar_t__ BOOL ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 unsigned int FUNC_0 (int const*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (char*,...) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (char*) ;
 int VAR_6 ;



 size_t VAR_7 ;
 scalar_t__ FUNC_3 (struct wined3d_gl_info*,int ) ;
 int FUNC_4 (int const) ;
 int FUNC_5 (struct wined3d_format*,int ) ;
 unsigned int FUNC_6 (int const) ;
 TYPE_2__ VAR_8 ;

__attribute__((used)) static void FUNC_7(struct wined3d_gl_info *VAR_9, enum wined3d_pci_vendor VAR_10)
{
    struct wined3d_format *VAR_11;
    unsigned int VAR_12, VAR_13;
    static const enum wined3d_format_id VAR_14[] =
    {
        128,
        129,
        130,
    };
    BOOL VAR_15;

    if (VAR_9->supported[VAR_0])

        return;

    if (VAR_8.offscreen_rendering_mode != VAR_4
            || !VAR_9->supported[VAR_7])
    {
        FUNC_2("No FBO support, or no FBO ORM, guessing filter info from GL caps\n");
        if (VAR_10 == VAR_3 && VAR_9->supported[VAR_1])
        {
            FUNC_1("Nvidia card with texture_float support: Assuming float16 blending\n");
            VAR_15 = VAR_5;
        }
        else if (VAR_9->limits.glsl_varyings > 44)
        {
            FUNC_1("More than 44 GLSL varyings - assuming d3d10 card with float16 blending\n");
            VAR_15 = VAR_5;
        }
        else
        {
            FUNC_1("Assuming no float16 blending\n");
            VAR_15 = VAR_2;
        }

        if (VAR_15)
        {
            for (VAR_13 = 0; VAR_13 < FUNC_0(VAR_14); ++VAR_13)
            {
                VAR_12 = FUNC_6(VAR_14[VAR_13]);
                FUNC_5(&VAR_9->formats[VAR_12], VAR_6);
            }
        }
        return;
    }

    for (VAR_13 = 0; VAR_13 < FUNC_0(VAR_14); ++VAR_13)
    {
        VAR_12 = FUNC_6(VAR_14[VAR_13]);
        VAR_11 = &VAR_9->formats[VAR_12];
        if (!VAR_11->glInternal) continue;

        VAR_15 = FUNC_3(VAR_9, VAR_9->formats[VAR_12].glInternal);
        if (VAR_15)
        {
            FUNC_1("Format %s supports filtering\n", FUNC_4(VAR_14[VAR_13]));
            FUNC_5(VAR_11, VAR_6);
        }
        else
        {
            FUNC_1("Format %s does not support filtering\n", FUNC_4(VAR_14[VAR_13]));
        }
    }
}
