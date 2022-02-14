
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ top_item; scalar_t__ page_size; scalar_t__ focus_item; scalar_t__ nb_items; } ;
typedef int TIMER_DIRECTION ;
typedef int LRESULT ;
typedef TYPE_1__ LB_DESCR ;
typedef scalar_t__ INT ;


 int VAR_0 ;





 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,scalar_t__,int ) ;
 int VAR_1 ;

__attribute__((used)) static LRESULT FUNC_2( LB_DESCR *VAR_2, INT VAR_3, TIMER_DIRECTION VAR_4 )
{
    switch(VAR_4)
    {
    case 128:
        if (VAR_2->top_item) VAR_3 = VAR_2->top_item - 1;
        else VAR_3 = 0;
        break;
    case 131:
        if (VAR_2->top_item) VAR_3 -= VAR_2->page_size;
        break;
    case 132:
        VAR_3 = VAR_2->top_item + FUNC_0( VAR_2 );
        if (VAR_3 == VAR_2->focus_item) VAR_3++;
        if (VAR_3 >= VAR_2->nb_items) VAR_3 = VAR_2->nb_items - 1;
        break;
    case 129:
        if (VAR_3 + VAR_2->page_size < VAR_2->nb_items)
            VAR_3 += VAR_2->page_size;
        break;
    case 130:
        break;
    }
    if (VAR_3 == VAR_2->focus_item) return VAR_0;
    FUNC_1( VAR_2, VAR_3, VAR_0 );
    return VAR_1;
}
