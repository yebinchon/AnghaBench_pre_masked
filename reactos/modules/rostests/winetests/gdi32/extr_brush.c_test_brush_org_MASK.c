
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int x; int y; } ;
typedef TYPE_1__ POINT ;
typedef int HDC ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int,int,TYPE_1__*) ;
 int FUNC_3 (int,char*,int,int) ;

__attribute__((used)) static void FUNC_4( void )
{
    HDC VAR_0 = FUNC_0( 0 );
    POINT VAR_1, VAR_2;

    FUNC_2( VAR_0, 0, 0, &VAR_1 );

    FUNC_2( VAR_0, 1, 1, &VAR_2 );
    FUNC_3( VAR_2.x == 0 && VAR_2.y == 0, "got %d,%d\n", VAR_2.x, VAR_2.y );
    FUNC_2( VAR_0, 0x10000, -1, &VAR_2 );
    FUNC_3( VAR_2.x == 1 && VAR_2.y == 1, "got %d,%d\n", VAR_2.x, VAR_2.y );
    FUNC_2( VAR_0, VAR_1.x, VAR_1.y, &VAR_2 );
    FUNC_3( VAR_2.x == 0x10000 && VAR_2.y == -1, "got %d,%d\n", VAR_2.x, VAR_2.y );

    FUNC_1( 0, VAR_0 );
}
