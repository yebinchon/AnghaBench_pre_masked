
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int difficulty; int mines; int rows; int cols; int hWnd; int hInst; } ;
typedef int LPARAM ;
typedef int HMENU ;
typedef int DIFFICULTY ;
typedef TYPE_1__ BOARD ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

 int FUNC_0 (int ,int,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ,int ) ;

 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int ) ;
 int VAR_11 ;
 int FUNC_3 (int ) ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static void FUNC_4( BOARD *VAR_14, DIFFICULTY VAR_15 )
{
    HMENU VAR_16;

    if ( VAR_15 == 129 )
        if (FUNC_1( VAR_14->hInst, FUNC_3(VAR_7), VAR_14->hWnd,
                    VAR_6, (LPARAM) VAR_14) != 0)
           return;

    VAR_16 = FUNC_2( VAR_14->hWnd );
    FUNC_0( VAR_16, VAR_11 + VAR_14->difficulty, VAR_13 );
    VAR_14->difficulty = VAR_15;
    FUNC_0( VAR_16, VAR_11 + VAR_15, VAR_12 );

    switch( VAR_15 ) {
    case 130:
        VAR_14->cols = VAR_3;
        VAR_14->rows = VAR_5;
        VAR_14->mines = VAR_4;
        break;

    case 131:
        VAR_14->cols = VAR_0;
        VAR_14->rows = VAR_2;
        VAR_14->mines = VAR_1;
        break;

    case 128:
        VAR_14->cols = VAR_8;
        VAR_14->rows = VAR_10;

        VAR_14->mines = VAR_9;
        break;

    case 129:
        break;
    }
}
