
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ height; scalar_t__ bottom; scalar_t__ top; scalar_t__ width; scalar_t__ right; scalar_t__ left; } ;
struct TYPE_10__ {int iItemId; } ;
struct TYPE_9__ {scalar_t__ top; scalar_t__ bottom; scalar_t__ left; scalar_t__ right; } ;
typedef TYPE_1__ RECT ;
typedef int LPPOINT ;
typedef TYPE_2__ LAYOUT_INFO ;
typedef TYPE_3__ LAYOUT_DATA ;
typedef int * HWND ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int * FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_4 (int ,int *,int ,int) ;
 TYPE_3__* FUNC_5 (int) ;

__attribute__((used)) static LAYOUT_DATA *FUNC_6(HWND VAR_1, const LAYOUT_INFO *VAR_2, int VAR_3)
{
    LAYOUT_DATA *VAR_4;
    RECT VAR_5;
    int VAR_6;

    FUNC_1(VAR_1, &VAR_5);
    VAR_4 = FUNC_5(sizeof(LAYOUT_DATA)*VAR_3);
    for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++)
    {
        RECT VAR_7;
        HWND VAR_8 = FUNC_2(VAR_1, VAR_2[VAR_6].iItemId);

        if (VAR_8 == ((void*)0))
            FUNC_0("Item %d not found\n", VAR_6);
        FUNC_3(VAR_8, &VAR_7);
        FUNC_4(VAR_0, VAR_1, (LPPOINT)&VAR_7, 2);

        VAR_4[VAR_6].left = VAR_7.left;
        VAR_4[VAR_6].right = VAR_5.right - VAR_7.right;
        VAR_4[VAR_6].width = VAR_7.right - VAR_7.left;

        VAR_4[VAR_6].top = VAR_7.top;
        VAR_4[VAR_6].bottom = VAR_5.bottom - VAR_7.bottom;
        VAR_4[VAR_6].height = VAR_7.bottom - VAR_7.top;
    }
    return VAR_4;
}
