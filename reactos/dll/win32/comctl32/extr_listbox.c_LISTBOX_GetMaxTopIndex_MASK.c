
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int style; size_t height; int nb_items; size_t width; size_t column_width; int page_size; TYPE_1__* items; } ;
struct TYPE_4__ {scalar_t__ height; } ;
typedef TYPE_2__ LB_DESCR ;
typedef size_t INT ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static INT FUNC_0( const LB_DESCR *VAR_2 )
{
    INT VAR_3, VAR_4;

    if (VAR_2->style & VAR_1)
    {
        VAR_4 = VAR_2->height;
        for (VAR_3 = VAR_2->nb_items - 1; VAR_3 >= 0; VAR_3--)
            if ((VAR_4 -= VAR_2->items[VAR_3].height) < 0) break;
        if (VAR_3 < VAR_2->nb_items - 1) VAR_3++;
    }
    else if (VAR_2->style & VAR_0)
    {
        if ((VAR_4 = VAR_2->width / VAR_2->column_width) < 1) VAR_4 = 1;
        VAR_3 = (VAR_2->nb_items + VAR_2->page_size - 1) / VAR_2->page_size;
        VAR_3 = (VAR_3 - VAR_4) * VAR_2->page_size;
    }
    else
    {
        VAR_3 = VAR_2->nb_items - VAR_2->page_size;
    }
    if (VAR_3 < 0) VAR_3 = 0;
    return VAR_3;
}
