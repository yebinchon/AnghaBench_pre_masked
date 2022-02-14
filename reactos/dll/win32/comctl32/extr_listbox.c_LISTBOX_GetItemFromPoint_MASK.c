
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int top_item; int nb_items; int style; int item_height; int page_size; int column_width; TYPE_1__* items; } ;
struct TYPE_4__ {int height; } ;
typedef TYPE_2__ LB_DESCR ;
typedef int INT ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static INT FUNC_0( const LB_DESCR *VAR_2, INT VAR_3, INT VAR_4 )
{
    INT VAR_5 = VAR_2->top_item;

    if (!VAR_2->nb_items) return -1;
    if (VAR_2->style & VAR_1)
    {
        INT VAR_6 = 0;
        if (VAR_4 >= 0)
        {
            while (VAR_5 < VAR_2->nb_items)
            {
                if ((VAR_6 += VAR_2->items[VAR_5].height) > VAR_4) break;
                VAR_5++;
            }
        }
        else
        {
            while (VAR_5 > 0)
            {
                VAR_5--;
                if ((VAR_6 -= VAR_2->items[VAR_5].height) <= VAR_4) break;
            }
        }
    }
    else if (VAR_2->style & VAR_0)
    {
        if (VAR_4 >= VAR_2->item_height * VAR_2->page_size) return -1;
        if (VAR_4 >= 0) VAR_5 += VAR_4 / VAR_2->item_height;
        if (VAR_3 >= 0) VAR_5 += (VAR_3 / VAR_2->column_width) * VAR_2->page_size;
        else VAR_5 -= (((VAR_3 + 1) / VAR_2->column_width) - 1) * VAR_2->page_size;
    }
    else
    {
        VAR_5 += (VAR_4 / VAR_2->item_height);
    }
    if (VAR_5 < 0) return 0;
    if (VAR_5 >= VAR_2->nb_items) return -1;
    return VAR_5;
}
