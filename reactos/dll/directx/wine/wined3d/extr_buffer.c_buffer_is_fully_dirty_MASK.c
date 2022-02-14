
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ size; } ;
struct wined3d_buffer {int modified_areas; TYPE_2__ resource; TYPE_1__* maps; } ;
struct TYPE_3__ {scalar_t__ size; int offset; } ;
typedef int BOOL ;



__attribute__((used)) static BOOL FUNC_0(const struct wined3d_buffer *VAR_0)
{
    return VAR_0->modified_areas == 1
            && !VAR_0->maps->offset && VAR_0->maps->size == VAR_0->resource.size;
}
