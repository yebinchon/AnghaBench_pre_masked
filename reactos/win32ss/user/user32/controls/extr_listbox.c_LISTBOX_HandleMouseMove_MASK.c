
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int style; scalar_t__ item_height; scalar_t__ page_size; scalar_t__ width; scalar_t__ height; scalar_t__ focus_item; int self; int captured; } ;
typedef scalar_t__ TIMER_DIRECTION ;
typedef TYPE_1__ LB_DESCR ;
typedef scalar_t__ INT ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_1 (TYPE_1__*,scalar_t__,scalar_t__) ;
 int FUNC_2 (TYPE_1__*,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (int ,int ,int ,int *) ;

__attribute__((used)) static void FUNC_4( LB_DESCR *VAR_9,
                                     INT VAR_10, INT VAR_11 )
{
    INT VAR_12;
    TIMER_DIRECTION VAR_13 = VAR_5;

    if (!VAR_9->captured) return;

    if (VAR_9->style & VAR_0)
    {
        if (VAR_11 < 0) VAR_11 = 0;
        else if (VAR_11 >= VAR_9->item_height * VAR_9->page_size)
            VAR_11 = VAR_9->item_height * VAR_9->page_size - 1;

        if (VAR_10 < 0)
        {
            VAR_13 = VAR_4;
            VAR_10 = 0;
        }
        else if (VAR_10 >= VAR_9->width)
        {
            VAR_13 = VAR_6;
            VAR_10 = VAR_9->width - 1;
        }
    }
    else
    {
        if (VAR_11 < 0) VAR_13 = VAR_7;
        else if (VAR_11 >= VAR_9->height) VAR_13 = VAR_2;
    }

    VAR_12 = FUNC_1( VAR_9, VAR_10, VAR_11 );
    if (VAR_12 == -1) VAR_12 = VAR_9->focus_item;
    if (!FUNC_2( VAR_9, VAR_12, VAR_13 )) VAR_13 = VAR_5;



    if (VAR_13 != VAR_5)
        FUNC_3( VAR_9->self, VAR_3, VAR_1, ((void*)0));
    else if (VAR_8 != VAR_5)
        FUNC_0( VAR_9->self, VAR_3 );
    VAR_8 = VAR_13;
}
