
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int hWnd; int hMinesBMP; } ;
typedef int HGDIOBJ ;
typedef int HDC ;
typedef TYPE_1__ BOARD ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,TYPE_1__*,unsigned int,unsigned int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_6( BOARD *VAR_1, unsigned VAR_2, unsigned VAR_3 )
{
    HDC VAR_4;
    HGDIOBJ VAR_5;
    HDC VAR_6;

    VAR_4 = FUNC_3( VAR_1->hWnd );
    VAR_6 = FUNC_0( VAR_4 );
    VAR_5 = FUNC_5 (VAR_6, VAR_1->hMinesBMP);

    FUNC_2( VAR_4, VAR_6, VAR_1, VAR_2, VAR_3, VAR_0 );

    FUNC_5( VAR_6, VAR_5 );
    FUNC_1( VAR_6 );
    FUNC_4( VAR_1->hWnd, VAR_4 );
}
