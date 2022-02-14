
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int style; int page_size; int top_item; int column_width; int item_height; int self; TYPE_1__* items; } ;
struct TYPE_6__ {scalar_t__ height; } ;
typedef int LRESULT ;
typedef TYPE_2__ LB_DESCR ;
typedef int INT ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int ,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,int ,int,int *,int *,int ,int *,int) ;
 int FUNC_4 (char*,int,scalar_t__) ;
 int VAR_6 ;

__attribute__((used)) static LRESULT FUNC_5( LB_DESCR *VAR_7, INT VAR_8, BOOL VAR_9 )
{
    INT VAR_10 = FUNC_1( VAR_7 );

    FUNC_4("setting top item %d, scroll %d\n", VAR_8, VAR_9);

    if (VAR_8 > VAR_10) VAR_8 = VAR_10;
    if (VAR_8 < 0) VAR_8 = 0;
    if (VAR_7->style & VAR_0) VAR_8 -= VAR_8 % VAR_7->page_size;
    if (VAR_7->top_item == VAR_8) return VAR_2;
    if (VAR_9)
    {
        INT VAR_11;
        if (VAR_7->style & VAR_0)
            VAR_11 = (VAR_7->top_item - VAR_8) / VAR_7->page_size * VAR_7->column_width;
        else if (VAR_7->style & VAR_1)
        {
            INT VAR_12;
            VAR_11 = 0;
            if (VAR_8 > VAR_7->top_item)
            {
                for (VAR_12 = VAR_8 - 1; VAR_12 >= VAR_7->top_item; VAR_12--)
                    VAR_11 -= VAR_7->items[VAR_12].height;
            }
            else
            {
                for (VAR_12 = VAR_8; VAR_12 < VAR_7->top_item; VAR_12++)
                    VAR_11 += VAR_7->items[VAR_12].height;
            }
        }
        else
            VAR_11 = (VAR_7->top_item - VAR_8) * VAR_7->item_height;

        FUNC_3( VAR_7->self, 0, VAR_11, ((void*)0), ((void*)0), 0, ((void*)0),
                        VAR_4 | VAR_3 | VAR_5 );
    }
    else
        FUNC_0( VAR_7->self, ((void*)0), VAR_6 );
    VAR_7->top_item = VAR_8;
    FUNC_2( VAR_7 );
    return VAR_2;
}
