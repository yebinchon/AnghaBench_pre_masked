
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int WPARAM ;
typedef int VOID ;
struct TYPE_6__ {int * crColor; } ;
struct TYPE_8__ {scalar_t__* hbmpColor; TYPE_1__ SchemeAdv; } ;
struct TYPE_7__ {int left; int top; int right; int bottom; } ;
typedef TYPE_2__ RECT ;
typedef int LPARAM ;
typedef int INT ;
typedef int HWND ;
typedef scalar_t__ HGDIOBJ ;
typedef int HDC ;
typedef int HBRUSH ;
typedef TYPE_3__ GLOBALS ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int VAR_1 ;
 int FUNC_5 (int ,TYPE_2__*,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_8 (int ,int ) ;
 scalar_t__ FUNC_9 (int ,scalar_t__) ;
 int FUNC_10 (int ,int,int ,int ,int ) ;
 int VAR_3 ;

__attribute__((used)) static VOID
FUNC_11(HWND VAR_4, GLOBALS* VAR_5, INT VAR_6, INT VAR_7, INT VAR_8)
{
    HDC VAR_9, VAR_10;
    RECT VAR_11;
    HBRUSH VAR_12;
    HWND VAR_13;
    HGDIOBJ VAR_14;

    if (VAR_8 != -1)
    {

        VAR_13 = FUNC_7(VAR_4, VAR_6);
        VAR_9 = FUNC_6(VAR_13);
        VAR_10 = FUNC_0(VAR_9);
        FUNC_8(VAR_13, VAR_9);


        VAR_14 = FUNC_9(VAR_10, VAR_5->hbmpColor[VAR_7]);


        VAR_11.left = 2;
        VAR_11.top = 2;
        VAR_11.right = 22;
        VAR_11.bottom = 13;
        VAR_12 = FUNC_1(VAR_5->SchemeAdv.crColor[VAR_8]);
        FUNC_5(VAR_10, &VAR_11, VAR_12);
        FUNC_3(VAR_12);


        FUNC_9(VAR_10,VAR_14);
        FUNC_2(VAR_10);

        FUNC_10(VAR_4, VAR_6, VAR_0, (WPARAM)VAR_2, (LPARAM)VAR_5->hbmpColor[VAR_7]);
        FUNC_4(FUNC_7(VAR_4, VAR_6), VAR_3);
    }
    else
    {
        FUNC_10(VAR_4, VAR_6, VAR_0, (WPARAM)VAR_2, (LPARAM)((void*)0));
        FUNC_4(FUNC_7(VAR_4, VAR_6), VAR_1);
    }
}
