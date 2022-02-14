
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int usage; struct wined3d_device* device; } ;
struct wined3d_texture {unsigned int level_count; TYPE_4__ resource; TYPE_1__* sub_resources; } ;
struct wined3d_surface {struct wined3d_texture* container; } ;
struct wined3d_device {TYPE_5__* blitter; } ;
struct wined3d_context {int dummy; } ;
struct TYPE_10__ {TYPE_2__* ops; } ;
struct TYPE_8__ {scalar_t__ offscreen_rendering_mode; } ;
struct TYPE_7__ {int (* blitter_blit ) (TYPE_5__*,int ,struct wined3d_context*,struct wined3d_surface*,int ,int *,struct wined3d_surface*,int ,int *,int *,int ) ;} ;
struct TYPE_6__ {int locations; } ;
typedef int RECT ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *,int ,int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct wined3d_context* FUNC_3 (struct wined3d_device*,struct wined3d_texture*,unsigned int) ;
 struct wined3d_surface* FUNC_4 (struct wined3d_context*) ;
 int FUNC_5 (struct wined3d_context*,struct wined3d_surface*) ;
 int FUNC_6 (TYPE_5__*,int ,struct wined3d_context*,struct wined3d_surface*,int ,int *,struct wined3d_surface*,int ,int *,int *,int ) ;
 unsigned int FUNC_7 (struct wined3d_surface*) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (TYPE_4__*) ;
 TYPE_3__ VAR_8 ;
 int FUNC_10 (struct wined3d_texture*,unsigned int) ;
 int FUNC_11 (struct wined3d_texture*,unsigned int) ;
 int FUNC_12 (struct wined3d_texture*,unsigned int,struct wined3d_context*,int ) ;

__attribute__((used)) static BOOL FUNC_13(struct wined3d_surface *VAR_9,
        struct wined3d_context *VAR_10)
{
    unsigned int VAR_11 = FUNC_7(VAR_9);
    struct wined3d_texture *VAR_12 = VAR_9->container;
    struct wined3d_surface *VAR_13 = ((void*)0);
    struct wined3d_device *VAR_14;
    unsigned int VAR_15;
    RECT VAR_16;

    if (VAR_12->resource.usage & VAR_3)
    {
        DWORD VAR_17 = VAR_12->sub_resources[VAR_11].locations;
        FUNC_1("Unimplemented copy from %s for depth/stencil buffers.\n",
                FUNC_8(VAR_17));
        return VAR_0;
    }

    if (VAR_8.offscreen_rendering_mode == VAR_1
            && FUNC_9(&VAR_12->resource))
    {
        FUNC_0("Trying to load offscreen surface into WINED3D_LOCATION_DRAWABLE.\n");
        return VAR_0;
    }

    VAR_14 = VAR_12->resource.device;
    VAR_13 = FUNC_4(VAR_10);
    if (VAR_13 != VAR_9)
        VAR_10 = FUNC_3(VAR_14, VAR_12, VAR_11);
    else
        VAR_13 = ((void*)0);

    VAR_15 = VAR_11 % VAR_12->level_count;
    FUNC_2(&VAR_16, 0, 0, FUNC_11(VAR_12, VAR_15),
            FUNC_10(VAR_12, VAR_15));
    FUNC_12(VAR_12, VAR_11, VAR_10, VAR_6);
    VAR_14->blitter->ops->blitter_blit(VAR_14->blitter, VAR_4, VAR_10,
            VAR_9, VAR_6, &VAR_16,
            VAR_9, VAR_5, &VAR_16,
            ((void*)0), VAR_7);

    if (VAR_13)
        FUNC_5(VAR_10, VAR_13);

    return VAR_2;
}
