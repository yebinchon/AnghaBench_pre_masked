
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int x; int y; } ;
struct TYPE_11__ {int top; int bottom; int left; int right; } ;
struct TYPE_12__ {int cols; int rows; int width; int height; int hWnd; TYPE_2__ pos; scalar_t__ time; int face_bmp; int status; TYPE_3__ counter_rect; TYPE_3__ timer_rect; TYPE_3__ face_rect; TYPE_3__ mines_rect; TYPE_1__** box; scalar_t__ num_flags; scalar_t__ mines; scalar_t__ boxes_left; int mb; } ;
struct TYPE_9__ {scalar_t__ NumMines; int FlagType; void* IsMine; void* IsPressed; } ;
typedef TYPE_3__ RECT ;
typedef TYPE_4__ BOARD ;


 int FUNC_0 (TYPE_3__*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_3 (int ,int *,int ,int) ;
 int VAR_14 ;
 int FUNC_4 (TYPE_3__*,int,int,int,int) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;

__attribute__((used)) static void FUNC_5( BOARD *VAR_18 )
{
    int VAR_19, VAR_20, VAR_21, VAR_22;
    unsigned VAR_23, VAR_24;
    RECT VAR_25;

    VAR_18->mb = VAR_7;
    VAR_18->boxes_left = VAR_18->cols * VAR_18->rows - VAR_18->mines;
    VAR_18->num_flags = 0;





    for( VAR_23 = 0; VAR_23 <= VAR_18->cols + 1; VAR_23++ )
      for( VAR_24 = 0; VAR_24 <= VAR_18->rows + 1; VAR_24++ ) {
        VAR_18->box[VAR_23][VAR_24].IsPressed = VAR_4;
        VAR_18->box[VAR_23][VAR_24].IsMine = VAR_4;
        VAR_18->box[VAR_23][VAR_24].FlagType = VAR_10;
        VAR_18->box[VAR_23][VAR_24].NumMines = 0;
      }

    VAR_18->width = VAR_18->cols * VAR_9 + VAR_1 * 2;

    VAR_18->height = VAR_18->rows * VAR_8 + VAR_5
        + VAR_0 * 3;


    VAR_19 = VAR_1;
    VAR_20 = VAR_0 * 2 + VAR_5;
    VAR_22 = VAR_19 + VAR_18->cols * VAR_9;
    VAR_21 = VAR_20 + VAR_18->rows * VAR_8;
    FUNC_4( &VAR_18->mines_rect, VAR_19, VAR_20, VAR_22, VAR_21 );


    VAR_19 = VAR_18->width / 2 - VAR_3 / 2;
    VAR_20 = VAR_0;
    VAR_22 = VAR_19 + VAR_3;
    VAR_21 = VAR_20 + VAR_2;
    FUNC_4( &VAR_18->face_rect, VAR_19, VAR_20, VAR_22, VAR_21 );


    VAR_19 = VAR_1;
    VAR_20 = VAR_0;
    VAR_22 = VAR_19 + VAR_6 * 3;
    VAR_21 = VAR_20 + VAR_5;
    FUNC_4( &VAR_18->timer_rect, VAR_19, VAR_20, VAR_22, VAR_21 );


    VAR_19 = VAR_18->width - VAR_1 - VAR_6 * 3;
    VAR_20 = VAR_0;
    VAR_22 = VAR_18->width - VAR_1;
    VAR_21 = VAR_20 + VAR_5;
    FUNC_4( &VAR_18->counter_rect, VAR_19, VAR_20, VAR_22, VAR_21 );

    VAR_18->status = VAR_16;
    VAR_18->face_bmp = VAR_14;
    VAR_18->time = 0;

    FUNC_4(&VAR_25, VAR_18->pos.x, VAR_18->pos.y, VAR_18->pos.x + VAR_18->width,
            VAR_18->pos.y + VAR_18->height);
    FUNC_0(&VAR_25, VAR_17, VAR_15);


    FUNC_1(&VAR_25);
    FUNC_2( VAR_18->hWnd, VAR_25.left, VAR_25.top,
  VAR_25.right - VAR_25.left,
  VAR_25.bottom - VAR_25.top,
  VAR_15 );
    FUNC_3( VAR_18->hWnd, ((void*)0), 0,
    VAR_12 | VAR_13 | VAR_11);
}
