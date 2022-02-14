
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wined3d_surface {TYPE_1__* container; } ;
struct wined3d_resource {int format_flags; TYPE_2__* format; struct wined3d_device* device; } ;
struct wined3d_device {int dummy; } ;
struct wined3d_context {int gl_info; } ;
struct wined3d_color_key {int dummy; } ;
struct wined3d_blitter {TYPE_3__* ops; struct wined3d_blitter* next; } ;
typedef enum wined3d_texture_filter_type { ____Placeholder_wined3d_texture_filter_type } wined3d_texture_filter_type ;
typedef enum wined3d_blit_op { ____Placeholder_wined3d_blit_op } wined3d_blit_op ;
struct TYPE_6__ {int (* blitter_blit ) (struct wined3d_blitter*,int,struct wined3d_context*,struct wined3d_surface*,int ,int const*,struct wined3d_surface*,int ,int const*,struct wined3d_color_key const*,int) ;} ;
struct TYPE_5__ {scalar_t__ id; } ;
struct TYPE_4__ {struct wined3d_resource resource; } ;
typedef int RECT ;
typedef int DWORD ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int,int ,struct wined3d_resource*,int ,struct wined3d_resource*,int ) ;
 int FUNC_3 (struct wined3d_blitter*,int,struct wined3d_context*,struct wined3d_surface*,int ,int const*,struct wined3d_surface*,int ,int const*,struct wined3d_color_key const*,int) ;
 int FUNC_4 (struct wined3d_device*,struct wined3d_context*,int,struct wined3d_surface*,int ,int const*,struct wined3d_surface*,int ,int const*) ;
 int FUNC_5 (struct wined3d_device*,struct wined3d_surface*,int ,int const*,struct wined3d_surface*,int ,int const*) ;

__attribute__((used)) static DWORD FUNC_6(struct wined3d_blitter *VAR_5, enum wined3d_blit_op VAR_6,
        struct wined3d_context *VAR_7, struct wined3d_surface *VAR_8, DWORD VAR_9,
        const RECT *VAR_10, struct wined3d_surface *VAR_11, DWORD VAR_12, const RECT *VAR_13,
        const struct wined3d_color_key *VAR_14, enum wined3d_texture_filter_type VAR_15)
{
    struct wined3d_resource *VAR_16 = &VAR_8->container->resource;
    struct wined3d_resource *VAR_17 = &VAR_11->container->resource;
    struct wined3d_device *VAR_18 = VAR_17->device;
    enum wined3d_blit_op VAR_19 = VAR_6;
    struct wined3d_blitter *VAR_20;

    if (VAR_19 == VAR_4 && VAR_17->format->id == VAR_16->format->id)
    {
        if (VAR_17->format_flags & (VAR_0 | VAR_1))
            VAR_19 = VAR_3;
        else
            VAR_19 = VAR_2;
    }

    if (!FUNC_2(VAR_19, VAR_7->gl_info,
            VAR_16, VAR_9, VAR_17, VAR_12))
    {
        if ((VAR_20 = VAR_5->next))
            return VAR_20->ops->blitter_blit(VAR_20, VAR_6, VAR_7, VAR_8, VAR_9,
                    VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15);
    }

    if (VAR_19 == VAR_2)
    {
        FUNC_1("Colour blit.\n");
        FUNC_4(VAR_18, VAR_7, VAR_15, VAR_8, VAR_9,
                VAR_10, VAR_11, VAR_12, VAR_13);
        return VAR_12;
    }

    if (VAR_19 == VAR_3)
    {
        FUNC_1("Depth/stencil blit.\n");
        FUNC_5(VAR_18, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13);
        return VAR_12;
    }

    FUNC_0("This blitter does not implement blit op %#x.\n", VAR_19);
    return VAR_12;
}
