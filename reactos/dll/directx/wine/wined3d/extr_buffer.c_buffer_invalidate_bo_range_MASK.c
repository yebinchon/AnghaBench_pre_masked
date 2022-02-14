
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned int size; } ;
struct wined3d_buffer {int modified_areas; TYPE_2__ resource; TYPE_1__* maps; int maps_size; } ;
struct TYPE_3__ {unsigned int offset; unsigned int size; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (void**,int *,int,int) ;

__attribute__((used)) static void FUNC_3(struct wined3d_buffer *VAR_0, unsigned int VAR_1, unsigned int VAR_2)
{
    if (!VAR_1 && (!VAR_2 || VAR_2 == VAR_0->resource.size))
        goto invalidate_all;

    if (VAR_1 > VAR_0->resource.size || VAR_2 > VAR_0->resource.size - VAR_1)
    {
        FUNC_1("Invalid range specified, invalidating entire buffer.\n");
        goto invalidate_all;
    }

    if (!FUNC_2((void **)&VAR_0->maps, &VAR_0->maps_size,
            VAR_0->modified_areas + 1, sizeof(*VAR_0->maps)))
    {
        FUNC_0("Failed to allocate maps array, invalidating entire buffer.\n");
        goto invalidate_all;
    }

    VAR_0->maps[VAR_0->modified_areas].offset = VAR_1;
    VAR_0->maps[VAR_0->modified_areas].size = VAR_2;
    ++VAR_0->modified_areas;
    return;

invalidate_all:
    VAR_0->modified_areas = 1;
    VAR_0->maps[0].offset = 0;
    VAR_0->maps[0].size = VAR_0->resource.size;
}
