
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_texture_sub_resource {int dummy; } ;
struct wined3d_surface {TYPE_1__* container; } ;
struct TYPE_2__ {struct wined3d_texture_sub_resource* sub_resources; } ;


 size_t FUNC_0 (struct wined3d_surface*) ;

__attribute__((used)) static inline struct wined3d_texture_sub_resource *FUNC_1(struct wined3d_surface *VAR_0)
{
    return &VAR_0->container->sub_resources[FUNC_0(VAR_0)];
}
