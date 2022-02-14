
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wined3d_texture_sub_resource {int locations; int map_count; } ;
struct TYPE_4__ {int map_binding; } ;
struct wined3d_texture {int flags; scalar_t__ update_map_binding; TYPE_3__* swapchain; TYPE_1__ resource; } ;
struct wined3d_resource {int map_count; struct wined3d_device* device; } ;
struct wined3d_device {scalar_t__ d3d_initialized; } ;
struct wined3d_context {int dummy; } ;
struct wined3d_bo_address {int dummy; } ;
struct TYPE_6__ {TYPE_2__* swapchain_ops; struct wined3d_texture* front_buffer; } ;
struct TYPE_5__ {int (* swapchain_frontbuffer_updated ) (TYPE_3__*) ;} ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,struct wined3d_resource*,unsigned int) ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct wined3d_context* FUNC_2 (struct wined3d_device*,int *,int ) ;
 int FUNC_3 (struct wined3d_context*) ;
 int FUNC_4 (struct wined3d_context*,struct wined3d_bo_address*,int ) ;
 int FUNC_5 (TYPE_3__*) ;
 struct wined3d_texture* FUNC_6 (struct wined3d_resource*) ;
 int FUNC_7 (struct wined3d_texture*,unsigned int,struct wined3d_bo_address*,int ) ;
 struct wined3d_texture_sub_resource* FUNC_8 (struct wined3d_texture*,unsigned int) ;
 int FUNC_9 (struct wined3d_texture*) ;

__attribute__((used)) static HRESULT FUNC_10(struct wined3d_resource *VAR_7, unsigned int VAR_8)
{
    struct wined3d_texture_sub_resource *VAR_9;
    struct wined3d_device *VAR_10 = VAR_7->device;
    struct wined3d_context *VAR_11 = ((void*)0);
    struct wined3d_texture *VAR_12;
    struct wined3d_bo_address VAR_13;

    FUNC_0("resource %p, sub_resource_idx %u.\n", VAR_7, VAR_8);

    VAR_12 = FUNC_6(VAR_7);
    if (!(VAR_9 = FUNC_8(VAR_12, VAR_8)))
        return VAR_0;

    if (!VAR_9->map_count)
    {
        FUNC_1("Trying to unmap unmapped sub-resource.\n");
        if (VAR_12->flags & VAR_5)
            return VAR_4;
        return VAR_6;
    }

    if (VAR_10->d3d_initialized)
        VAR_11 = FUNC_2(VAR_10, ((void*)0), 0);

    FUNC_7(VAR_12, VAR_8, &VAR_13, VAR_12->resource.map_binding);
    FUNC_4(VAR_11, &VAR_13, VAR_1);

    if (VAR_11)
        FUNC_3(VAR_11);

    if (VAR_12->swapchain && VAR_12->swapchain->front_buffer == VAR_12)
    {
        if (!(VAR_9->locations & (VAR_2 | VAR_3)))
            VAR_12->swapchain->swapchain_ops->swapchain_frontbuffer_updated(VAR_12->swapchain);
    }

    --VAR_9->map_count;
    if (!--VAR_7->map_count && VAR_12->update_map_binding)
        FUNC_9(VAR_12);

    return VAR_4;
}
