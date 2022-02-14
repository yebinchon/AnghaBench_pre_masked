
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_gl_info {int dummy; } ;
struct wined3d_fence {int dummy; } ;
struct wined3d_device {TYPE_1__* adapter; } ;
struct TYPE_2__ {struct wined3d_gl_info gl_info; } ;
typedef int HRESULT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,struct wined3d_device*,...) ;
 int VAR_1 ;
 struct wined3d_fence* FUNC_2 (int) ;
 int FUNC_3 (struct wined3d_fence*) ;
 int FUNC_4 (struct wined3d_fence*,struct wined3d_gl_info const*) ;

HRESULT FUNC_5(struct wined3d_device *VAR_2, struct wined3d_fence **VAR_3)
{
    const struct wined3d_gl_info *VAR_4 = &VAR_2->adapter->gl_info;
    struct wined3d_fence *VAR_5;
    HRESULT VAR_6;

    FUNC_1("device %p, fence %p.\n", VAR_2, VAR_3);

    if (!(VAR_5 = FUNC_2(sizeof(*VAR_5))))
        return VAR_0;

    if (FUNC_0(VAR_6 = FUNC_4(VAR_5, VAR_4)))
    {
        FUNC_3(VAR_5);
        return VAR_6;
    }

    FUNC_1("Created fence %p.\n", VAR_5);
    *VAR_3 = VAR_5;

    return VAR_1;
}
