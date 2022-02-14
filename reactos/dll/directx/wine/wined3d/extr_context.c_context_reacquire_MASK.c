
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_device {int cs; } ;
struct TYPE_2__ {int sub_resource_idx; scalar_t__ texture; } ;
struct wined3d_context {scalar_t__ tid; TYPE_1__ current_rt; } ;


 int FUNC_0 (char*,struct wined3d_context*,struct wined3d_context*) ;
 scalar_t__ FUNC_1 () ;
 struct wined3d_context* FUNC_2 (struct wined3d_device const*,int *,int ) ;
 int FUNC_3 (struct wined3d_context*,scalar_t__,int ) ;
 int FUNC_4 (int ) ;

struct wined3d_context *FUNC_5(const struct wined3d_device *VAR_0,
        struct wined3d_context *VAR_1)
{
    struct wined3d_context *VAR_2;

    FUNC_4(VAR_0->cs);

    if (!VAR_1 || VAR_1->tid != FUNC_1())
        return ((void*)0);

    if (VAR_1->current_rt.texture)
    {
        FUNC_3(VAR_1, VAR_1->current_rt.texture, VAR_1->current_rt.sub_resource_idx);
        return VAR_1;
    }

    VAR_2 = FUNC_2(VAR_0, ((void*)0), 0);
    if (VAR_2 != VAR_1)
        FUNC_0("Acquired context %p instead of %p.\n", VAR_2, VAR_1);
    return VAR_2;
}
