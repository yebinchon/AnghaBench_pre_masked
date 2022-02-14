
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct point2d_index {size_t vertex; TYPE_2__* outline; } ;
struct TYPE_6__ {float x; float y; } ;
struct TYPE_5__ {TYPE_1__* items; } ;
struct TYPE_4__ {TYPE_3__ pos; } ;
typedef TYPE_3__ D3DXVECTOR2 ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
    const struct point2d_index *VAR_2 = VAR_0, *VAR_3 = VAR_1;
    const D3DXVECTOR2 *VAR_4 = &VAR_2->outline->items[VAR_2->vertex].pos;
    const D3DXVECTOR2 *VAR_5 = &VAR_3->outline->items[VAR_3->vertex].pos;
    float VAR_6 = VAR_4->x - VAR_5->x;

    if (VAR_6 == 0.0f)
        VAR_6 = VAR_4->y - VAR_5->y;

    return VAR_6 == 0.0f ? 0 : (VAR_6 > 0.0f ? -1 : 1);
}
