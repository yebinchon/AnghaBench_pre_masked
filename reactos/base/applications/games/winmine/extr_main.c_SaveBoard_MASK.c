
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int data ;
typedef int WCHAR ;
struct TYPE_4__ {int y; int x; } ;
struct TYPE_5__ {int * best_time; int * best_name; int IsMarkQ; int mines; int cols; int rows; int difficulty; TYPE_1__ pos; } ;
typedef int LPBYTE ;
typedef int HKEY ;
typedef TYPE_2__ BOARD ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int *,int ,int ,int *,int *,int *) ;
 int FUNC_2 (int ,int *,int ,int ,int ,int) ;
 int * VAR_7 ;
 int * VAR_8 ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int *) ;
 int * VAR_9 ;
 int * VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int * VAR_14 ;
 int FUNC_5 (int *,int ,unsigned int) ;
 int * VAR_15 ;
 int * VAR_16 ;

__attribute__((used)) static void FUNC_6( BOARD *VAR_17 )
{
    HKEY VAR_18;
    unsigned VAR_19;
    WCHAR VAR_20[VAR_3+1];
    WCHAR VAR_21[8];

    if( FUNC_1( VAR_1, VAR_12,
         0, ((void*)0),
                VAR_5, VAR_2, ((void*)0),
                &VAR_18, ((void*)0) ) != VAR_0)
        return;

    FUNC_2( VAR_18, VAR_15, 0, VAR_4, (LPBYTE) &VAR_17->pos.x, sizeof(VAR_17->pos.x) );
    FUNC_2( VAR_18, VAR_16, 0, VAR_4, (LPBYTE) &VAR_17->pos.y, sizeof(VAR_17->pos.y) );
    FUNC_2( VAR_18, VAR_7, 0, VAR_4, (LPBYTE) &VAR_17->difficulty, sizeof(VAR_17->difficulty) );
    FUNC_2( VAR_18, VAR_8, 0, VAR_4, (LPBYTE) &VAR_17->rows, sizeof(VAR_17->rows) );
    FUNC_2( VAR_18, VAR_14, 0, VAR_4, (LPBYTE) &VAR_17->cols, sizeof(VAR_17->cols) );
    FUNC_2( VAR_18, VAR_10, 0, VAR_4, (LPBYTE) &VAR_17->mines, sizeof(VAR_17->mines) );
    FUNC_2( VAR_18, VAR_9, 0, VAR_4, (LPBYTE) &VAR_17->IsMarkQ, sizeof(VAR_17->IsMarkQ) );

    for( VAR_19 = 0; VAR_19 < 3; VAR_19++ ) {
        FUNC_5( VAR_21, VAR_11, VAR_19+1 );
        FUNC_3( VAR_20, VAR_17->best_name[VAR_19], sizeof(VAR_20)/sizeof(WCHAR) );
        FUNC_2( VAR_18, VAR_21, 0, VAR_6, (LPBYTE) VAR_20, (FUNC_4(VAR_20)+1) * sizeof(WCHAR) );
    }

    for( VAR_19 = 0; VAR_19 < 3; VAR_19++ ) {
        FUNC_5( VAR_21, VAR_13, VAR_19+1 );
        FUNC_2( VAR_18, VAR_21, 0, VAR_4, (LPBYTE) &VAR_17->best_time[VAR_19], sizeof(VAR_17->best_time[VAR_19]) );
    }
    FUNC_0( VAR_18 );
}
