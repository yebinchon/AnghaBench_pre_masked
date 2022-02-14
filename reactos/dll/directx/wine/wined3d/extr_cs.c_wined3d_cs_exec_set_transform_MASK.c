
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct wined3d_cs_set_transform {size_t state; int matrix; } ;
struct TYPE_6__ {int * transforms; } ;
struct wined3d_cs {TYPE_5__* device; TYPE_1__ state; } ;
struct TYPE_10__ {TYPE_4__* adapter; } ;
struct TYPE_7__ {int ffp_vertex_blend_matrices; } ;
struct TYPE_8__ {TYPE_2__ limits; } ;
struct TYPE_9__ {TYPE_3__ d3d_info; } ;


 int FUNC_0 (size_t) ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (TYPE_5__*,int ) ;

__attribute__((used)) static void FUNC_3(struct wined3d_cs *VAR_0, const void *VAR_1)
{
    const struct wined3d_cs_set_transform *VAR_2 = VAR_1;

    VAR_0->state.transforms[VAR_2->state] = VAR_2->matrix;
    if (VAR_2->state < FUNC_1(VAR_0->device->adapter->d3d_info.limits.ffp_vertex_blend_matrices))
        FUNC_2(VAR_0->device, FUNC_0(VAR_2->state));
}
