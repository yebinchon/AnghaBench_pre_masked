
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_surface {int texture_layer; unsigned int texture_level; TYPE_1__* container; } ;
struct TYPE_2__ {int level_count; } ;



__attribute__((used)) static inline unsigned int FUNC_0(const struct wined3d_surface *VAR_0)
{
    return VAR_0->texture_layer * VAR_0->container->level_count + VAR_0->texture_level;
}
