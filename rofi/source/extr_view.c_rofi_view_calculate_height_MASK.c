
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int widget ;
struct TYPE_5__ {int h; } ;
struct TYPE_7__ {scalar_t__ fullscreen; TYPE_1__ mon; } ;
struct TYPE_6__ {int main_window; } ;
typedef TYPE_2__ RofiViewState ;
typedef int RofiDistance ;


 TYPE_4__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int * FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4 ( RofiViewState *VAR_3 )
{
    if ( VAR_0.fullscreen == VAR_2 ) {
        return VAR_0.mon.h;
    }

    RofiDistance VAR_4 = FUNC_2 ( FUNC_0 ( VAR_3->main_window ), "height", 0 );
    unsigned int VAR_5 = FUNC_1 ( VAR_4, VAR_1 );

    if ( VAR_5 > 0 ) {
        return VAR_5;
    }

    widget *VAR_6 = FUNC_0 ( VAR_3->main_window );
    return FUNC_3 ( VAR_6 );
}
