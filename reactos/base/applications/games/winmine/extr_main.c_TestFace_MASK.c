
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ status; int face_rect; int hWnd; int face_bmp; } ;
typedef int POINT ;
typedef TYPE_1__ BOARD ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ,int *,int ,int) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;

__attribute__((used)) static void FUNC_3( BOARD *VAR_14, POINT VAR_15, int VAR_16 )
{
    if( VAR_14->status == VAR_4 || VAR_14->status == VAR_9 ) {
        if( VAR_16 == VAR_10 || VAR_16 == VAR_12 )
            VAR_14->face_bmp = VAR_3;
        else VAR_14->face_bmp = VAR_7;
    }
    else if( VAR_14->status == VAR_2 )
        VAR_14->face_bmp = VAR_1;
    else if( VAR_14->status == VAR_13 )
            VAR_14->face_bmp = VAR_0;

    if( FUNC_1( &VAR_14->face_rect, VAR_15 ) ) {
        if( VAR_16 == VAR_10 )
            VAR_14->face_bmp = VAR_8;

        if( VAR_16 == VAR_11 )
            FUNC_0( VAR_14 );
    }

    FUNC_2( VAR_14->hWnd, &VAR_14->face_rect, 0,
        VAR_5 | VAR_6 );
}
