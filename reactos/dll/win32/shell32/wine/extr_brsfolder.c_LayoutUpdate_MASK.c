
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ height; scalar_t__ bottom; scalar_t__ width; scalar_t__ right; } ;
struct TYPE_9__ {int dwAnchor; int iItemId; } ;
struct TYPE_8__ {scalar_t__ top; scalar_t__ bottom; scalar_t__ left; scalar_t__ right; } ;
typedef TYPE_1__ RECT ;
typedef int LPPOINT ;
typedef TYPE_2__ LAYOUT_INFO ;
typedef TYPE_3__ LAYOUT_DATA ;
typedef int HWND ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int VAR_4 ;
 int FUNC_3 (int ,int ,int ,int) ;
 int VAR_5 ;
 int FUNC_4 (int ,int *,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_5(HWND VAR_6, LAYOUT_DATA *VAR_7, const LAYOUT_INFO *VAR_8, int VAR_9)
{
    RECT VAR_10;
    int VAR_11;

    FUNC_0(VAR_6, &VAR_10);
    for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11++)
    {
        RECT VAR_12;
        HWND VAR_13 = FUNC_1(VAR_6, VAR_8[VAR_11].iItemId);

        FUNC_2(VAR_13, &VAR_12);
        FUNC_3(VAR_4, VAR_6, (LPPOINT)&VAR_12, 2);

        if (VAR_8[VAR_11].dwAnchor & VAR_2)
        {
            VAR_12.right = VAR_10.right - VAR_7[VAR_11].right;
            if (!(VAR_8[VAR_11].dwAnchor & VAR_1))
                VAR_12.left = VAR_12.right - VAR_7[VAR_11].width;
        }

        if (VAR_8[VAR_11].dwAnchor & VAR_0)
        {
            VAR_12.bottom = VAR_10.bottom - VAR_7[VAR_11].bottom;
            if (!(VAR_8[VAR_11].dwAnchor & VAR_3))
                VAR_12.top = VAR_12.bottom - VAR_7[VAR_11].height;
        }

        FUNC_4(VAR_13, ((void*)0), VAR_12.left, VAR_12.top, VAR_12.right - VAR_12.left, VAR_12.bottom - VAR_12.top, VAR_5);
    }
}
