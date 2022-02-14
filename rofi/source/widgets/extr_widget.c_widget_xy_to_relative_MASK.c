
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct TYPE_3__* parent; scalar_t__ y; scalar_t__ x; } ;
typedef TYPE_1__ widget ;
typedef int gint ;



void FUNC_0 ( widget *VAR_0, gint *VAR_1, gint *VAR_2 )
{
    *VAR_1 -= VAR_0->x;
    *VAR_2 -= VAR_0->y;
    if ( VAR_0->parent != ((void*)0) ) {
        FUNC_0 ( VAR_0->parent, VAR_1, VAR_2 );
    }
}
