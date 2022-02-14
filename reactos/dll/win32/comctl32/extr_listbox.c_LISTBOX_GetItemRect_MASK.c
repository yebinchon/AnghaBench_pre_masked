
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {size_t nb_items; scalar_t__ width; scalar_t__ height; int style; size_t page_size; size_t top_item; size_t column_width; size_t item_height; scalar_t__ horz_pos; TYPE_1__* items; } ;
struct TYPE_10__ {scalar_t__ left; scalar_t__ right; scalar_t__ top; scalar_t__ bottom; } ;
struct TYPE_9__ {scalar_t__ height; } ;
typedef TYPE_2__ RECT ;
typedef int LRESULT ;
typedef TYPE_3__ LB_DESCR ;
typedef size_t INT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,int ,int ,scalar_t__,scalar_t__) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (char*,size_t,int ) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static LRESULT FUNC_5( const LB_DESCR *VAR_4, INT VAR_5, RECT *VAR_6 )
{

    if (VAR_5 && (VAR_5 >= VAR_4->nb_items))
    {
        FUNC_2(VAR_6);
        FUNC_0(VAR_0);
        return VAR_3;
    }
    FUNC_1( VAR_6, 0, 0, VAR_4->width, VAR_4->height );
    if (VAR_4->style & VAR_1)
    {
        INT VAR_7 = (VAR_5 / VAR_4->page_size) -
                        (VAR_4->top_item / VAR_4->page_size);
        VAR_6->left += VAR_7 * VAR_4->column_width;
        VAR_6->right = VAR_6->left + VAR_4->column_width;
        VAR_6->top += (VAR_5 % VAR_4->page_size) * VAR_4->item_height;
        VAR_6->bottom = VAR_6->top + VAR_4->item_height;
    }
    else if (VAR_4->style & VAR_2)
    {
        INT VAR_8;
        VAR_6->right += VAR_4->horz_pos;
        if ((VAR_5 >= 0) && (VAR_5 < VAR_4->nb_items))
        {
            if (VAR_5 < VAR_4->top_item)
            {
                for (VAR_8 = VAR_4->top_item-1; VAR_8 >= VAR_5; VAR_8--)
                    VAR_6->top -= VAR_4->items[VAR_8].height;
            }
            else
            {
                for (VAR_8 = VAR_4->top_item; VAR_8 < VAR_5; VAR_8++)
                    VAR_6->top += VAR_4->items[VAR_8].height;
            }
            VAR_6->bottom = VAR_6->top + VAR_4->items[VAR_5].height;

        }
    }
    else
    {
        VAR_6->top += (VAR_5 - VAR_4->top_item) * VAR_4->item_height;
        VAR_6->bottom = VAR_6->top + VAR_4->item_height;
        VAR_6->right += VAR_4->horz_pos;
    }

    FUNC_3("item %d, rect %s\n", VAR_5, FUNC_4(VAR_6));

    return ((VAR_6->left < VAR_4->width) && (VAR_6->right > 0) &&
            (VAR_6->top < VAR_4->height) && (VAR_6->bottom > 0));
}
