
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int style; size_t page_size; size_t top_item; size_t nb_items; size_t height; TYPE_1__* items; } ;
struct TYPE_4__ {size_t height; } ;
typedef TYPE_2__ LB_DESCR ;
typedef size_t INT ;


 int VAR_0 ;

__attribute__((used)) static INT FUNC_0( const LB_DESCR *VAR_1 )
{
    INT VAR_2, VAR_3;
    if (!(VAR_1->style & VAR_0)) return VAR_1->page_size;
    for (VAR_2 = VAR_1->top_item, VAR_3 = 0; VAR_2 < VAR_1->nb_items; VAR_2++)
    {
        if ((VAR_3 += VAR_1->items[VAR_2].height) > VAR_1->height) break;
    }
    if (VAR_2 == VAR_1->top_item) return 1;
    else return VAR_2 - VAR_1->top_item;
}
