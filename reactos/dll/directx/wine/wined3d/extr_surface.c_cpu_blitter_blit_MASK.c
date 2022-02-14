
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int map_binding; } ;
struct wined3d_texture {TYPE_2__ resource; TYPE_1__* sub_resources; } ;
struct wined3d_surface {struct wined3d_texture* container; } ;
struct wined3d_context {int dummy; } ;
struct wined3d_color_key {int dummy; } ;
struct wined3d_box {int member_5; int member_4; int member_3; int member_2; int member_1; int member_0; } ;
struct wined3d_blt_fx {struct wined3d_color_key src_color_key; } ;
struct wined3d_blitter {int dummy; } ;
typedef int fx ;
typedef enum wined3d_texture_filter_type { ____Placeholder_wined3d_texture_filter_type } wined3d_texture_filter_type ;
typedef enum wined3d_blit_op { ____Placeholder_wined3d_blit_op } wined3d_blit_op ;
struct TYPE_8__ {int bottom; int right; int top; int left; } ;
struct TYPE_6__ {int locations; } ;
typedef TYPE_3__ RECT ;
typedef int DWORD ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*,int) ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct wined3d_blt_fx*,int ,int) ;
 int FUNC_4 (struct wined3d_texture*,unsigned int,struct wined3d_box*,struct wined3d_texture*,unsigned int,struct wined3d_box*,int,struct wined3d_blt_fx*,int) ;
 unsigned int FUNC_5 (struct wined3d_surface*) ;
 int FUNC_6 (struct wined3d_texture*,unsigned int,struct wined3d_context*,int) ;

__attribute__((used)) static DWORD FUNC_7(struct wined3d_blitter *VAR_3, enum wined3d_blit_op VAR_4,
        struct wined3d_context *VAR_5, struct wined3d_surface *VAR_6, DWORD VAR_7,
        const RECT *VAR_8, struct wined3d_surface *VAR_9, DWORD VAR_10, const RECT *VAR_11,
        const struct wined3d_color_key *VAR_12, enum wined3d_texture_filter_type VAR_13)
{
    struct wined3d_box VAR_14 = {VAR_11->left, VAR_11->top, VAR_11->right, VAR_11->bottom, 0, 1};
    struct wined3d_box VAR_15 = {VAR_8->left, VAR_8->top, VAR_8->right, VAR_8->bottom, 0, 1};
    unsigned int VAR_16 = FUNC_5(VAR_9);
    unsigned int VAR_17 = FUNC_5(VAR_6);
    struct wined3d_texture *VAR_18 = VAR_9->container;
    struct wined3d_texture *VAR_19 = VAR_6->container;
    struct wined3d_blt_fx VAR_20;
    DWORD VAR_21 = 0;

    FUNC_3(&VAR_20, 0, sizeof(VAR_20));
    switch (VAR_4)
    {
        case 132:
        case 129:
        case 128:
            break;
        case 131:
            VAR_21 |= VAR_0;
            break;
        case 130:
            VAR_21 |= VAR_2 | VAR_1;
            VAR_20.src_color_key = *VAR_12;
            break;
        default:
            FUNC_2("Unhandled op %#x.\n", VAR_4);
            break;
    }

    if (FUNC_1(FUNC_4(VAR_18, VAR_16, &VAR_14,
            VAR_19, VAR_17, &VAR_15, VAR_21, &VAR_20, VAR_13)))
        FUNC_0("Failed to blit.\n");
    FUNC_6(VAR_18, VAR_16, VAR_5, VAR_10);

    return VAR_10 | (VAR_18->sub_resources[VAR_16].locations
            & VAR_18->resource.map_binding);
}
