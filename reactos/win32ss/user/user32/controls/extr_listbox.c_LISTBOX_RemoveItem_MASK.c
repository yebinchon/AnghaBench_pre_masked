
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {size_t nb_items; size_t anchor_item; size_t page_size; size_t selected_item; int focus_item; int * items; } ;
typedef int LRESULT ;
typedef int LB_ITEMDATA ;
typedef TYPE_1__ LB_DESCR ;
typedef size_t INT ;


 int VAR_0 ;
 int FUNC_0 () ;
 int * FUNC_1 (int ,int ,int *,size_t) ;
 int FUNC_2 (int ,int ,int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (TYPE_1__*,size_t) ;
 int FUNC_5 (TYPE_1__*,size_t) ;
 int FUNC_6 (TYPE_1__*,int,int ,int ) ;
 int FUNC_7 (TYPE_1__*,int ,int ) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int *,int *,size_t) ;
 int VAR_5 ;

__attribute__((used)) static LRESULT FUNC_10( LB_DESCR *VAR_6, INT VAR_7 )
{
    LB_ITEMDATA *VAR_8;
    INT VAR_9;

    if ((VAR_7 < 0) || (VAR_7 >= VAR_6->nb_items)) return VAR_3;


    FUNC_5( VAR_6, VAR_7 );

    VAR_6->nb_items--;
    FUNC_4( VAR_6, VAR_7 );

    if (!VAR_6->nb_items) return VAR_4;



    VAR_8 = &VAR_6->items[VAR_7];
    if (VAR_7 < VAR_6->nb_items)
        FUNC_9( VAR_8, VAR_8 + 1,
                       (VAR_6->nb_items - VAR_7) * sizeof(LB_ITEMDATA) );
    if (VAR_6->anchor_item == VAR_6->nb_items) VAR_6->anchor_item--;



    VAR_9 = FUNC_2( FUNC_0(), 0, VAR_6->items ) / sizeof(LB_ITEMDATA);
    if (VAR_6->nb_items < VAR_9 - 2*VAR_2)
    {
        VAR_9 -= VAR_2;
        VAR_8 = FUNC_1( FUNC_0(), 0, VAR_6->items,
                            VAR_9 * sizeof(LB_ITEMDATA) );
        if (VAR_8) VAR_6->items = VAR_8;
    }


    FUNC_8( VAR_6 );


    if (VAR_6->nb_items == VAR_6->page_size)
        FUNC_7( VAR_6, 0, VAR_5 );


    if (!FUNC_3(VAR_6))
    {
        if (VAR_7 == VAR_6->selected_item)
            VAR_6->selected_item = -1;
        else if (VAR_7 < VAR_6->selected_item)
        {
            VAR_6->selected_item--;
            if (VAR_1)
               FUNC_6( VAR_6, VAR_6->selected_item + 1, VAR_5, VAR_0);
        }
    }

    if (VAR_6->focus_item >= VAR_6->nb_items)
    {
          VAR_6->focus_item = VAR_6->nb_items - 1;
          if (VAR_6->focus_item < 0) VAR_6->focus_item = 0;
    }
    return VAR_4;
}
