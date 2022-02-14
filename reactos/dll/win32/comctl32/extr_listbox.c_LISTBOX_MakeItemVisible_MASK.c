
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ top_item; int style; scalar_t__ width; int column_width; scalar_t__ page_size; int height; int item_height; TYPE_1__* items; } ;
struct TYPE_5__ {int height; } ;
typedef TYPE_2__ LB_DESCR ;
typedef scalar_t__ INT ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,scalar_t__,int ) ;
 int FUNC_1 (char*,scalar_t__,scalar_t__,scalar_t__) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_2( LB_DESCR *VAR_3, INT VAR_4, BOOL VAR_5 )
{
    INT VAR_6;

    FUNC_1("current top item %d, index %d, fully %d\n", VAR_3->top_item, VAR_4, VAR_5);

    if (VAR_4 <= VAR_3->top_item) VAR_6 = VAR_4;
    else if (VAR_3->style & VAR_0)
    {
        INT VAR_7 = VAR_3->width;
        if (!VAR_5) VAR_7 += VAR_3->column_width - 1;
        if (VAR_7 >= VAR_3->column_width) VAR_7 /= VAR_3->column_width;
        else VAR_7 = 1;
        if (VAR_4 < VAR_3->top_item + (VAR_3->page_size * VAR_7)) return;
        VAR_6 = VAR_4 - VAR_3->page_size * (VAR_7 - 1);
    }
    else if (VAR_3->style & VAR_1)
    {
        INT VAR_8 = VAR_5 ? VAR_3->items[VAR_4].height : 1;
        for (VAR_6 = VAR_4; VAR_6 > VAR_3->top_item; VAR_6--)
            if ((VAR_8 += VAR_3->items[VAR_6-1].height) > VAR_3->height) break;
    }
    else
    {
        if (VAR_4 < VAR_3->top_item + VAR_3->page_size) return;
        if (!VAR_5 && (VAR_4 == VAR_3->top_item + VAR_3->page_size) &&
            (VAR_3->height > (VAR_3->page_size * VAR_3->item_height))) return;
        VAR_6 = VAR_4 - VAR_3->page_size + 1;
    }
    FUNC_0( VAR_3, VAR_6, VAR_2 );
}
