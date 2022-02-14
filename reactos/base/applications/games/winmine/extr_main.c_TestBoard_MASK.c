
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ y; scalar_t__ x; } ;
struct TYPE_15__ {scalar_t__ status; scalar_t__ boxes_left; scalar_t__ num_flags; scalar_t__ mines; unsigned int rows; unsigned int cols; size_t difficulty; scalar_t__ time; scalar_t__* best_time; int hInst; int hWnd; TYPE_2__** box; TYPE_1__ press; int mines_rect; } ;
struct TYPE_14__ {int x; int y; } ;
struct TYPE_13__ {scalar_t__ FlagType; scalar_t__ IsMine; } ;
typedef TYPE_3__ POINT ;
typedef int LPARAM ;
typedef int HWND ;
typedef TYPE_4__ BOARD ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int ,int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,TYPE_3__) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ,int *,int ,int) ;
 int FUNC_4 (TYPE_4__*,TYPE_3__,int) ;
 int FUNC_5 (TYPE_4__*,TYPE_3__,int) ;
 int VAR_8 ;
 int FUNC_6 (TYPE_4__*,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_9 ;

__attribute__((used)) static void FUNC_7( HWND VAR_10, BOARD *VAR_11, int VAR_12, int VAR_13, int VAR_14 )
{
    POINT VAR_15;
    unsigned VAR_16,VAR_17;

    VAR_15.x = VAR_12;
    VAR_15.y = VAR_13;

    if( FUNC_2( &VAR_11->mines_rect, VAR_15 ) && VAR_11->status != VAR_5
    && VAR_11->status != VAR_9 )
        FUNC_5( VAR_11, VAR_15, VAR_14 );
    else {
        FUNC_6( VAR_11,
            VAR_11->press.x,
            VAR_11->press.y );
        VAR_11->press.x = 0;
        VAR_11->press.y = 0;
    }

    if( VAR_11->boxes_left == 0 ) {
        VAR_11->status = VAR_9;

        if (VAR_11->num_flags < VAR_11->mines) {
            for( VAR_17 = 1; VAR_17 <= VAR_11->rows; VAR_17++ ) {
                for( VAR_16 = 1; VAR_16 <= VAR_11->cols; VAR_16++ ) {
                    if (VAR_11->box[VAR_16][VAR_17].IsMine && VAR_11->box[VAR_16][VAR_17].FlagType != VAR_4)
                        VAR_11->box[VAR_16][VAR_17].FlagType = VAR_4;
                }
            }

            VAR_11->num_flags = VAR_11->mines;

            FUNC_3( VAR_11->hWnd, ((void*)0), 0,
                VAR_6 | VAR_7 );
        }

        if( VAR_11->difficulty != VAR_0 &&
                    VAR_11->time < VAR_11->best_time[VAR_11->difficulty] ) {
            VAR_11->best_time[VAR_11->difficulty] = VAR_11->time;

            FUNC_0( VAR_11->hInst, FUNC_1(VAR_2), VAR_10,
                             VAR_1, (LPARAM) VAR_11);
            FUNC_0( VAR_11->hInst, FUNC_1(VAR_3), VAR_10,
                             VAR_8, (LPARAM) VAR_11);
        }
    }
    FUNC_4( VAR_11, VAR_15, VAR_14 );
}
