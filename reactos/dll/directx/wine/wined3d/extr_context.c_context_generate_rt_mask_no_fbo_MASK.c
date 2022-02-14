
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* format; } ;
struct wined3d_texture {TYPE_2__ resource; scalar_t__ swapchain; } ;
struct wined3d_context {int dummy; } ;
struct TYPE_3__ {scalar_t__ id; } ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct wined3d_context const*) ;

__attribute__((used)) static DWORD FUNC_3(const struct wined3d_context *VAR_1, struct wined3d_texture *VAR_2)
{
    if (!VAR_2 || VAR_2->resource.format->id == VAR_0)
        return 0;
    else if (VAR_2->swapchain)
        return FUNC_1(&VAR_2->resource);
    else
        return FUNC_0(FUNC_2(VAR_1));
}
