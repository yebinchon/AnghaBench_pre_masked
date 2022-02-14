
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_18__ {int x; int y; } ;
struct TYPE_16__ {int left; int top; } ;
struct TYPE_20__ {int hWnd; TYPE_3__ press; int status; TYPE_2__** box; TYPE_1__ mines_rect; } ;
struct TYPE_19__ {int x; int y; } ;
struct TYPE_17__ {int FlagType; } ;
typedef TYPE_4__ POINT ;
typedef scalar_t__ BOOL ;
typedef TYPE_5__ BOARD ;


 int FUNC_0 (TYPE_5__*,int,int) ;
 int FUNC_1 (TYPE_5__*,int,int) ;
 int FUNC_2 (TYPE_5__*,int,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (TYPE_5__*,int,int) ;
 int FUNC_4 (TYPE_5__*,int,int) ;
 int FUNC_5 (TYPE_5__*,int,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (int ,int *,int ,int) ;
 scalar_t__ VAR_7 ;
 int FUNC_7 (TYPE_5__*,int,int) ;
 int FUNC_8 (TYPE_5__*,int,int) ;
 int FUNC_9 (char*) ;






__attribute__((used)) static void FUNC_10( BOARD *VAR_8, POINT VAR_9, int VAR_10 )
{
    BOOL VAR_11 = VAR_7;
    int VAR_12, VAR_13;

    VAR_12 = (VAR_9.x - VAR_8->mines_rect.left) / VAR_3 + 1;
    VAR_13 = (VAR_9.y - VAR_8->mines_rect.top ) / VAR_2 + 1;

    switch ( VAR_10 ) {
    case 132:
        if( VAR_8->press.x != VAR_12 || VAR_8->press.y != VAR_13 ) {
            FUNC_7( VAR_8,
                    VAR_8->press.x, VAR_8->press.y );
            VAR_8->press.x = VAR_12;
            VAR_8->press.y = VAR_13;
            FUNC_4( VAR_8, VAR_12, VAR_13 );
        }
        VAR_11 = VAR_0;
        break;

    case 131:
        if( VAR_8->press.x != VAR_12 || VAR_8->press.y != VAR_13 )
            FUNC_7( VAR_8,
                    VAR_8->press.x, VAR_8->press.y );
        VAR_8->press.x = 0;
        VAR_8->press.y = 0;
        if( VAR_8->box[VAR_12][VAR_13].FlagType != VAR_1
            && VAR_8->status != VAR_4 )
        {
            VAR_8->status = VAR_4;
            FUNC_3( VAR_8, VAR_12, VAR_13 );
        }
        FUNC_1( VAR_8, VAR_12, VAR_13 );
        break;

    case 130:
        FUNC_5( VAR_8, VAR_12, VAR_13 );
        VAR_11 = VAR_0;
        break;

    case 129:
        if( VAR_8->press.x != VAR_12 || VAR_8->press.y != VAR_13 )
            FUNC_8( VAR_8,
                    VAR_8->press.x, VAR_8->press.y );
        VAR_8->press.x = 0;
        VAR_8->press.y = 0;
        FUNC_2( VAR_8, VAR_12, VAR_13 );
        break;

    case 128:
        FUNC_0( VAR_8, VAR_12, VAR_13 );
        break;
    default:
        FUNC_9("Unknown message type received in TestMines\n");
        break;
    }

    if( VAR_11 )
    {
        FUNC_6( VAR_8->hWnd, ((void*)0), 0,
            VAR_5 | VAR_6 );
    }
}
