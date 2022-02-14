
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int h; int w; scalar_t__ x; scalar_t__ y; } ;
struct TYPE_9__ {TYPE_1__ mon; scalar_t__ fullscreen; } ;
struct TYPE_8__ {size_t location; int y_offset; int x_offset; } ;
struct TYPE_7__ {int height; int width; scalar_t__ y; scalar_t__ x; int main_window; int list_view; } ;
typedef TYPE_2__ RofiViewState ;
typedef int RofiDistance ;


 TYPE_5__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 TYPE_4__ VAR_3 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int* VAR_4 ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (int ,char*,int) ;

__attribute__((used)) static void FUNC_5 ( RofiViewState *VAR_5 )
{
    int VAR_6 = FUNC_4 ( FUNC_0 ( VAR_5->main_window ), "location", VAR_4[VAR_3.location] );
    int VAR_7 = VAR_6;
    if ( !FUNC_2 ( VAR_5->list_view ) ) {
        VAR_7 = VAR_6;
        if ( VAR_6 == 136 ) {
            VAR_7 = 134;
        }
        else if ( VAR_6 == 135 ) {
            VAR_7 = 133;
        }
        else if ( VAR_6 == 128 ) {
            VAR_7 = 132;
        }
    }
    VAR_7 = FUNC_4 ( FUNC_0 ( VAR_5->main_window ), "anchor", VAR_7 );

    if ( VAR_0.fullscreen ) {
        VAR_5->x = VAR_0.mon.x;
        VAR_5->y = VAR_0.mon.y;
        return;
    }
    VAR_5->y = VAR_0.mon.y + ( VAR_0.mon.h ) / 2;
    VAR_5->x = VAR_0.mon.x + ( VAR_0.mon.w ) / 2;

    switch ( VAR_6 )
    {
    case 132:
        VAR_5->x = VAR_0.mon.x;

    case 134:
        VAR_5->y = VAR_0.mon.y;
        break;
    case 133:
        VAR_5->y = VAR_0.mon.y;

    case 135:
        VAR_5->x = VAR_0.mon.x + VAR_0.mon.w;
        break;
    case 130:
        VAR_5->x = VAR_0.mon.x + VAR_0.mon.w;

    case 131:
        VAR_5->y = VAR_0.mon.y + VAR_0.mon.h;
        break;
    case 129:
        VAR_5->y = VAR_0.mon.y + VAR_0.mon.h;

    case 128:
        VAR_5->x = VAR_0.mon.x;
        break;
    case 136:
        ;

    default:
        break;
    }
    switch ( VAR_7 )
    {
    case 129:
        VAR_5->y -= VAR_5->height;
        break;
    case 131:
        VAR_5->x -= VAR_5->width / 2;
        VAR_5->y -= VAR_5->height;
        break;
    case 130:
        VAR_5->x -= VAR_5->width;
        VAR_5->y -= VAR_5->height;
        break;
    case 133:
        VAR_5->x -= VAR_5->width;
        break;
    case 132:
        break;
    case 134:
        VAR_5->x -= VAR_5->width / 2;
        break;
    case 135:
        VAR_5->x -= VAR_5->width;
        VAR_5->y -= VAR_5->height / 2;
        break;
    case 128:
        VAR_5->y -= VAR_5->height / 2;
        break;
    case 136:
        VAR_5->y -= VAR_5->height / 2;
        VAR_5->x -= VAR_5->width / 2;
        break;
    default:
        break;
    }

    RofiDistance VAR_8 = FUNC_3 ( FUNC_0 ( VAR_5->main_window ), "x-offset", VAR_3.x_offset );
    RofiDistance VAR_9 = FUNC_3 ( FUNC_0 ( VAR_5->main_window ), "y-offset", VAR_3.y_offset );
    VAR_5->x += FUNC_1 ( VAR_8, VAR_1 );
    VAR_5->y += FUNC_1 ( VAR_9, VAR_2 );
}
