
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int count; size_t* items; } ;
struct triangulation {scalar_t__ last_on_top; TYPE_1__ vertex_stack; } ;
struct point2d_index {int vertex; struct outline* outline; } ;
struct outline {int count; TYPE_3__* items; } ;
struct TYPE_5__ {struct point2d_index* items; } ;
struct glyphinfo {TYPE_2__ ordered_vertices; } ;
typedef size_t WORD ;
struct TYPE_6__ {int pos; } ;
typedef int D3DXVECTOR2 ;
typedef scalar_t__ BOOL ;



__attribute__((used)) static D3DXVECTOR2 *FUNC_0(struct triangulation *VAR_0, struct glyphinfo *VAR_1, BOOL VAR_2)
{
    int VAR_3 = VAR_0->last_on_top == VAR_2 ? VAR_0->vertex_stack.count - 1 : 0;
    WORD VAR_4 = VAR_0->vertex_stack.items[VAR_3];
    struct point2d_index *VAR_5 = &VAR_1->ordered_vertices.items[VAR_4];
    struct outline *VAR_6 = VAR_5->outline;

    if (VAR_2)
        VAR_3 = (VAR_5->vertex + VAR_6->count - 1) % VAR_6->count;
    else
        VAR_3 = (VAR_5->vertex + 1) % VAR_6->count;

    return &VAR_6->items[VAR_3].pos;
}
