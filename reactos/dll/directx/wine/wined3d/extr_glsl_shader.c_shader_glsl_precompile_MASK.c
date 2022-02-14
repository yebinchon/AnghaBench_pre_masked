
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ type; } ;
struct TYPE_4__ {TYPE_1__ shader_version; } ;
struct wined3d_shader {TYPE_2__ reg_maps; struct wined3d_device* device; } ;
struct wined3d_device {int dummy; } ;
struct wined3d_context {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct wined3d_context* FUNC_0 (struct wined3d_device*,int *,int ) ;
 int FUNC_1 (struct wined3d_context*) ;
 int FUNC_2 (void*,struct wined3d_context*,struct wined3d_shader*) ;

__attribute__((used)) static void FUNC_3(void *VAR_1, struct wined3d_shader *VAR_2)
{
    struct wined3d_device *VAR_3 = VAR_2->device;
    struct wined3d_context *VAR_4;

    if (VAR_2->reg_maps.shader_version.type == VAR_0)
    {
        VAR_4 = FUNC_0(VAR_3, ((void*)0), 0);
        FUNC_2(VAR_1, VAR_4, VAR_2);
        FUNC_1(VAR_4);
    }
}
