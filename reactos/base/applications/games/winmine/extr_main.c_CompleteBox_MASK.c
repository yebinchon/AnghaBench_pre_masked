
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int cols; int rows; scalar_t__ status; TYPE_1__** box; int boxes_left; int face_bmp; } ;
struct TYPE_4__ {scalar_t__ FlagType; scalar_t__ NumMines; scalar_t__ IsMine; } ;
typedef TYPE_2__ BOARD ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_0( BOARD *VAR_4, unsigned VAR_5, unsigned VAR_6 )
{
    int VAR_7, VAR_8;

    if( VAR_4->box[VAR_5][VAR_6].FlagType != VAR_0 &&
            VAR_4->box[VAR_5][VAR_6].FlagType != VAR_2 &&
            VAR_5 > 0 && VAR_5 < VAR_4->cols + 1 &&
            VAR_6 > 0 && VAR_6 < VAR_4->rows + 1 ) {
        VAR_4->box[VAR_5][VAR_6].FlagType = VAR_0;

        if( VAR_4->box[VAR_5][VAR_6].IsMine ) {
            VAR_4->face_bmp = VAR_1;
            VAR_4->status = VAR_3;
        }
        else if( VAR_4->status != VAR_3 )
            VAR_4->boxes_left--;

        if( VAR_4->box[VAR_5][VAR_6].NumMines == 0 )
        {
            for( VAR_7 = -1; VAR_7 <= 1; VAR_7++ )
            for( VAR_8 = -1; VAR_8 <= 1; VAR_8++ )
                FUNC_0( VAR_4, VAR_5 + VAR_7, VAR_6 + VAR_8 );
        }
    }
}
