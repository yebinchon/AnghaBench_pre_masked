
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ IsMarkQ; scalar_t__ difficulty; int hWnd; int hInst; void* hLedsBMP; void* hFacesBMP; void* hMinesBMP; } ;
typedef int HMENU ;
typedef TYPE_1__ BOARD ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,unsigned int,int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 void* FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_6( BOARD *VAR_7 )
{
    HMENU VAR_8;

    VAR_7->hMinesBMP = FUNC_3( VAR_7->hInst, FUNC_5(VAR_2));
    VAR_7->hFacesBMP = FUNC_3( VAR_7->hInst, FUNC_5(VAR_0));
    VAR_7->hLedsBMP = FUNC_3( VAR_7->hInst, FUNC_5(VAR_1));

    FUNC_4( VAR_7 );

    VAR_8 = FUNC_2( VAR_7->hWnd );
    FUNC_1( VAR_8, VAR_3 + (unsigned) VAR_7->difficulty,
            VAR_5 );
    if( VAR_7->IsMarkQ )
        FUNC_1( VAR_8, VAR_4, VAR_5 );
    else
        FUNC_1( VAR_8, VAR_4, VAR_6 );
    FUNC_0( VAR_7 );
}
