
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* need_redraw; struct TYPE_3__* parent; } ;
typedef TYPE_1__ widget ;


 void* VAR_0 ;

void FUNC_0 ( widget *VAR_1 )
{
    if ( VAR_1 ) {
        widget *VAR_2 = VAR_1;

        while ( VAR_2->parent != ((void*)0) ) {
            VAR_2->need_redraw = VAR_0;
            VAR_2 = VAR_2->parent;
        }
        VAR_2->need_redraw = VAR_0;
    }
}
