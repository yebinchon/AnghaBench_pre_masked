
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* gint ;
struct TYPE_4__ {int * motion_target; void* y; void* x; } ;
struct TYPE_5__ {TYPE_1__ mouse; } ;
typedef TYPE_2__ RofiViewState ;


 int FUNC_0 (int *,void*,void*) ;
 int FUNC_1 (int *,void**,void**) ;

void FUNC_2 ( RofiViewState *VAR_0, gint VAR_1, gint VAR_2 )
{
    VAR_0->mouse.x = VAR_1;
    VAR_0->mouse.y = VAR_2;
    if ( VAR_0->mouse.motion_target != ((void*)0) ) {
        FUNC_1 ( VAR_0->mouse.motion_target, &VAR_1, &VAR_2 );
        FUNC_0 ( VAR_0->mouse.motion_target, VAR_1, VAR_2 );
    }
}
