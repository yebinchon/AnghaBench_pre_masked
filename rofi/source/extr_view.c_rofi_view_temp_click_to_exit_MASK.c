
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ xcb_window_t ;
struct TYPE_5__ {int flags; scalar_t__ main_window; } ;
struct TYPE_4__ {int retv; int quit; } ;
typedef TYPE_1__ RofiViewState ;


 TYPE_3__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_0 ( RofiViewState *VAR_4, xcb_window_t VAR_5 )
{
    if ( ( VAR_0.flags & VAR_2 ) == 0 ) {
        if ( VAR_5 != VAR_0.main_window ) {
            VAR_4->quit = VAR_3;
            VAR_4->retv = VAR_1;
        }
    }
}
