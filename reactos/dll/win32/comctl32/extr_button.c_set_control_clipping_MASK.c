
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bottom; int right; int top; int left; } ;
typedef TYPE_1__ RECT ;
typedef int POINT ;
typedef scalar_t__ HRGN ;
typedef int HDC ;


 scalar_t__ FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,int *,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ,int ,int ) ;
 int VAR_0 ;

HRGN FUNC_6( HDC VAR_1, const RECT *VAR_2 )
{
    RECT VAR_3 = *VAR_2;
    HRGN VAR_4 = FUNC_0( 0, 0, 0, 0 );

    if (FUNC_3( VAR_1, VAR_4 ) != 1)
    {
        FUNC_2( VAR_4 );
        VAR_4 = 0;
    }
    FUNC_1( VAR_1, (POINT *)&VAR_3, 2 );
    if (FUNC_4( VAR_1 ) & VAR_0)
    {
        VAR_3.left++;
        VAR_3.right++;
    }
    FUNC_5( VAR_1, VAR_3.left, VAR_3.top, VAR_3.right, VAR_3.bottom );
    return VAR_4;
}
