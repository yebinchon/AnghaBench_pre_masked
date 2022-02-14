
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {double w; } ;
struct TYPE_9__ {TYPE_1__ mon; scalar_t__ fullscreen; } ;
struct TYPE_8__ {double menu_width; } ;
struct TYPE_7__ {double width; int main_window; } ;
typedef TYPE_2__ RofiViewState ;
typedef int RofiDistance ;


 TYPE_5__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 TYPE_4__ VAR_2 ;
 float FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,char*,float) ;
 double FUNC_3 () ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5 ( RofiViewState *VAR_3 )
{
    if ( VAR_0.fullscreen ) {
        VAR_3->width = VAR_0.mon.w;
        return;
    }
    if ( VAR_2.menu_width < 0 ) {
        double VAR_4 = FUNC_3 ( );
        VAR_3->width = -( VAR_4 * VAR_2.menu_width );
        VAR_3->width += FUNC_4 ( FUNC_0 ( VAR_3->main_window ) );
    }
    else{

        VAR_3->width = VAR_2.menu_width < 101 ? ( VAR_0.mon.w / 100.0f ) * ( float ) VAR_2.menu_width : VAR_2.menu_width;
    }

    RofiDistance VAR_5 = FUNC_2 ( FUNC_0 ( VAR_3->main_window ), "width", VAR_3->width );
    VAR_3->width = FUNC_1 ( VAR_5, VAR_1 );
}
