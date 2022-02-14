
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int data ;
typedef int WCHAR ;
struct TYPE_4__ {scalar_t__ y; scalar_t__ x; } ;
struct TYPE_5__ {int* best_time; int * best_name; int hInst; int IsMarkQ; int difficulty; int mines; int cols; int rows; TYPE_1__ pos; } ;
typedef int * LPBYTE ;
typedef int HKEY ;
typedef int DWORD ;
typedef int BYTE ;
typedef TYPE_2__ BOARD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ,int ,int) ;
 int VAR_8 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int ,int *) ;
 scalar_t__ FUNC_3 (int ,int *,int *,int*,int *,int*) ;
 int VAR_9 ;
 int * VAR_10 ;
 int * VAR_11 ;
 int FUNC_4 (int ,int *,int) ;
 int * VAR_12 ;
 int * VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int * VAR_17 ;
 int FUNC_5 (int *,int ,unsigned int) ;
 int * VAR_18 ;
 int * VAR_19 ;

__attribute__((used)) static void FUNC_6( BOARD *VAR_20 )
{
    DWORD VAR_21;
    DWORD VAR_22;
    HKEY VAR_23;
    WCHAR VAR_24[VAR_8+1];
    WCHAR VAR_25[8];
    unsigned VAR_26;

    FUNC_2( VAR_5, VAR_15, 0, VAR_7, &VAR_23 );

    VAR_21 = sizeof( VAR_20->pos.x );
    if( FUNC_3( VAR_23, VAR_18, ((void*)0), &VAR_22, (BYTE*) &VAR_20->pos.x, &VAR_21 ) )
 VAR_20->pos.x = 0;

    VAR_21 = sizeof( VAR_20->pos.y );
    if( FUNC_3( VAR_23, VAR_19, ((void*)0), &VAR_22, (BYTE*) &VAR_20->pos.y, &VAR_21 ) )
        VAR_20->pos.y = 0;

    VAR_21 = sizeof( VAR_20->rows );
    if( FUNC_3( VAR_23, VAR_11, ((void*)0), &VAR_22, (BYTE*) &VAR_20->rows, &VAR_21 ) )
        VAR_20->rows = VAR_3;

    VAR_21 = sizeof( VAR_20->cols );
    if( FUNC_3( VAR_23, VAR_17, ((void*)0), &VAR_22, (BYTE*) &VAR_20->cols, &VAR_21 ) )
        VAR_20->cols = VAR_1;

    VAR_21 = sizeof( VAR_20->mines );
    if( FUNC_3( VAR_23, VAR_13, ((void*)0), &VAR_22, (BYTE*) &VAR_20->mines, &VAR_21 ) )
        VAR_20->mines = VAR_2;

    VAR_21 = sizeof( VAR_20->difficulty );
    if( FUNC_3( VAR_23, VAR_10, ((void*)0), &VAR_22, (BYTE*) &VAR_20->difficulty, &VAR_21 ) )
        VAR_20->difficulty = VAR_0;

    VAR_21 = sizeof( VAR_20->IsMarkQ );
    if( FUNC_3( VAR_23, VAR_12, ((void*)0), &VAR_22, (BYTE*) &VAR_20->IsMarkQ, &VAR_21 ) )
        VAR_20->IsMarkQ = VAR_9;

    for( VAR_26 = 0; VAR_26 < 3; VAR_26++ ) {
        FUNC_5( VAR_25, VAR_14, VAR_26+1 );
        VAR_21 = sizeof( VAR_24 );
        if( FUNC_3( VAR_23, VAR_25, ((void*)0), &VAR_22,
                (LPBYTE) VAR_24, &VAR_21 ) == VAR_4 )
            FUNC_4( VAR_20->best_name[VAR_26], VAR_24, sizeof(VAR_20->best_name[VAR_26])/sizeof(WCHAR) );
        else
            FUNC_0( VAR_20->hInst, VAR_6, VAR_20->best_name[VAR_26], VAR_8+1 );
    }

    for( VAR_26 = 0; VAR_26 < 3; VAR_26++ ) {
        FUNC_5( VAR_25, VAR_16, VAR_26+1 );
        VAR_21 = sizeof( VAR_20->best_time[VAR_26] );
        if( FUNC_3( VAR_23, VAR_25, ((void*)0), &VAR_22, (BYTE*) &VAR_20->best_time[VAR_26], &VAR_21 ) )
            VAR_20->best_time[VAR_26] = 999;
    }
    FUNC_1( VAR_23 );
}
