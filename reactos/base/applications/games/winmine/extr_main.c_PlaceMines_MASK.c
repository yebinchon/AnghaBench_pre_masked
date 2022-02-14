
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned int mines; int cols; int rows; TYPE_1__** box; } ;
struct TYPE_4__ {int NumMines; void* IsMine; } ;
typedef TYPE_2__ BOARD ;


 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (unsigned int) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3 ( BOARD *VAR_2, int VAR_3, int VAR_4 )
{
    int VAR_5, VAR_6;
    unsigned VAR_7, VAR_8;

    FUNC_1( (unsigned) FUNC_2( ((void*)0) ) );



    VAR_2->box[VAR_3][VAR_4].IsMine = VAR_1;


    VAR_5 = 0;
    while( (unsigned) VAR_5 < VAR_2->mines ) {
        VAR_7 = FUNC_0() % VAR_2->cols + 1;
        VAR_8 = FUNC_0() % VAR_2->rows + 1;

        if( !VAR_2->box[VAR_7][VAR_8].IsMine ) {
            VAR_5++;
            VAR_2->box[VAR_7][VAR_8].IsMine = VAR_1;
        }
    }


    VAR_2->box[VAR_3][VAR_4].IsMine = VAR_0;





    for( VAR_7 = 1; VAR_7 < VAR_2->cols + 1; VAR_7++ )
    for( VAR_8 = 1; VAR_8 < VAR_2->rows + 1; VAR_8++ ) {
        for( VAR_5 = -1; VAR_5 <= 1; VAR_5++ )
        for( VAR_6 = -1; VAR_6 <= 1; VAR_6++ ) {
            if( VAR_2->box[VAR_7 + VAR_5][VAR_8 + VAR_6].IsMine ) {
                VAR_2->box[VAR_7][VAR_8].NumMines++ ;
            }
        }
    }
}
