
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rows; int cols; int mines; } ;
typedef TYPE_1__ BOARD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_0( BOARD *VAR_5 )
{
    if( VAR_5->rows < VAR_2 )
        VAR_5->rows = VAR_2;

    if( VAR_5->rows > VAR_4 )
        VAR_5->rows = VAR_4;

    if( VAR_5->cols < VAR_0 )
        VAR_5->cols = VAR_0;

    if( VAR_5->cols > VAR_3 )
        VAR_5->cols = VAR_3;

    if( VAR_5->mines < VAR_1 )
        VAR_5->mines = VAR_1;

    if( VAR_5->mines > ( VAR_5->cols - 1 ) * ( VAR_5->rows - 1 ) )
        VAR_5->mines = ( VAR_5->cols - 1 ) * ( VAR_5->rows - 1 );
}
