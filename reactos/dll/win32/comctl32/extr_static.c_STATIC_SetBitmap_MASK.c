
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int bm ;
struct TYPE_3__ {int bmHeight; int bmWidth; } ;
typedef int LONG_PTR ;
typedef int HWND ;
typedef scalar_t__ HBITMAP ;
typedef int DWORD ;
typedef TYPE_1__ BITMAP ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int,TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ,int ,int ,int) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static HBITMAP FUNC_5( HWND VAR_9, HBITMAP VAR_10, DWORD VAR_11 )
{
    HBITMAP VAR_12;

    if ((VAR_11 & VAR_5) != VAR_2) return 0;
    if (VAR_10 && FUNC_0(VAR_10) != VAR_1)
    {
        FUNC_4("hBitmap != 0, but it's not a bitmap\n");
        return 0;
    }
    VAR_12 = (HBITMAP)FUNC_2( VAR_9, VAR_0, (LONG_PTR)VAR_10 );
    if (VAR_10 && !(VAR_11 & VAR_3) && !(VAR_11 & VAR_4))
    {
        BITMAP VAR_13;
        FUNC_1(VAR_10, sizeof(VAR_13), &VAR_13);
        {
            FUNC_3( VAR_9, 0, 0, 0, VAR_13.bmWidth, VAR_13.bmHeight,
                          VAR_6 | VAR_7 | VAR_8 );
        }
    }
    return VAR_12;
}
