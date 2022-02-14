
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * icon; scalar_t__ icon_fetch_id; } ;
typedef TYPE_1__ icon ;
typedef int cairo_surface_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

void FUNC_4 ( icon *VAR_0, cairo_surface_t *VAR_1 )
{
    VAR_0->icon_fetch_id = 0;
    if ( VAR_0->icon ) {
        FUNC_1 ( VAR_0->icon );
        VAR_0->icon = ((void*)0);
    }
    if ( VAR_1 ) {
        FUNC_2 ( VAR_1 );
        VAR_0->icon = VAR_1;
    }
    FUNC_3 ( FUNC_0 ( VAR_0 ) );
}
