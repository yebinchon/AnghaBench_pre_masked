
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cy; int cx; } ;
typedef TYPE_1__ SIZE ;
typedef int LONG_PTR ;
typedef int HWND ;
typedef scalar_t__ HICON ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (scalar_t__,TYPE_1__*) ;

__attribute__((used)) static HICON FUNC_4( HWND VAR_8, HICON VAR_9, DWORD VAR_10 )
{
    HICON VAR_11;
    SIZE VAR_12;

    if ((VAR_10 & VAR_4) != VAR_2) return 0;
    if (VAR_9 && !FUNC_3( VAR_9, &VAR_12 ))
    {
        FUNC_2("hicon != 0, but invalid\n");
        return 0;
    }
    VAR_11 = (HICON)FUNC_0( VAR_8, VAR_0, (LONG_PTR)VAR_9 );
    if (VAR_9 && !(VAR_10 & VAR_1) && !(VAR_10 & VAR_3))
    {
        {
            FUNC_1( VAR_8, 0, 0, 0, VAR_12.cx, VAR_12.cy, VAR_5 | VAR_6 | VAR_7 );
        }
    }
    return VAR_11;
}
