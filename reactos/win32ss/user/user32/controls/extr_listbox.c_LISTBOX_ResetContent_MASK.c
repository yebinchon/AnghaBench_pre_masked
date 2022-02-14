
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ nb_items; int selected_item; int anchor_item; int * items; scalar_t__ focus_item; scalar_t__ top_item; } ;
typedef TYPE_1__ LB_DESCR ;
typedef scalar_t__ INT ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (TYPE_1__*,scalar_t__) ;

__attribute__((used)) static void FUNC_3( LB_DESCR *VAR_0 )
{
    INT VAR_1;

    for(VAR_1 = VAR_0->nb_items - 1; VAR_1>=0; VAR_1--) FUNC_2( VAR_0, VAR_1);
    FUNC_1( FUNC_0(), 0, VAR_0->items );
    VAR_0->nb_items = 0;
    VAR_0->top_item = 0;
    VAR_0->selected_item = -1;
    VAR_0->focus_item = 0;
    VAR_0->anchor_item = -1;
    VAR_0->items = ((void*)0);
}
