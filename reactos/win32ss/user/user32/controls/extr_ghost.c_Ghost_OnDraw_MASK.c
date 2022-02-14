
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int bm ;
struct TYPE_6__ {int bmHeight; int bmWidth; } ;
struct TYPE_5__ {int hbm32bpp; } ;
typedef int HWND ;
typedef int HGDIOBJ ;
typedef scalar_t__ HDC ;
typedef TYPE_1__ GHOST_DATA ;
typedef TYPE_2__ BITMAP ;


 int FUNC_0 (scalar_t__,int ,int ,int ,int ,scalar_t__,int ,int ,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,int,TYPE_2__*) ;
 TYPE_1__* FUNC_4 (int ) ;
 int VAR_1 ;
 int FUNC_5 (scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_6(HWND VAR_2, HDC VAR_3)
{
    BITMAP VAR_4;
    HDC VAR_5;
    GHOST_DATA *VAR_6 = FUNC_4(VAR_2);

    if (!VAR_6 || !FUNC_3(VAR_6->hbm32bpp, sizeof(VAR_4), &VAR_4))
        return;

    VAR_5 = FUNC_1(VAR_3);
    if (VAR_5)
    {
        HGDIOBJ VAR_7 = FUNC_5(VAR_5, VAR_6->hbm32bpp);
        FUNC_0(VAR_3, 0, 0, VAR_4.bmWidth, VAR_4.bmHeight,
               VAR_5, 0, 0, VAR_1 | VAR_0);
        FUNC_5(VAR_5, VAR_7);
        FUNC_2(VAR_5);
    }
}
