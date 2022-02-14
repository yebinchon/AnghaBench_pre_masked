
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int left; int top; int right; int bottom; } ;
typedef TYPE_1__ RECT ;
typedef scalar_t__ PRECT ;
typedef int POINT ;
typedef int LPPOINT ;
typedef int HWND ;


 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (int ,int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,int *,int,int,int,int,int) ;
 int VAR_4 ;

void FUNC_4(HWND VAR_5, HWND VAR_6, int VAR_7, int VAR_8, int VAR_9)
{
    RECT VAR_10;
    int VAR_11, VAR_12, VAR_13, VAR_14;

    FUNC_0(VAR_5, &VAR_10);
    FUNC_2(VAR_5, VAR_6, (LPPOINT)(PRECT)(&VAR_10), sizeof(RECT)/sizeof(POINT));
    if (VAR_9) {
        VAR_11 = VAR_10.left;
        VAR_12 = VAR_10.top;
        VAR_13 = VAR_10.right - VAR_10.left;
        switch (VAR_9) {
        case 1:
            break;
        case 2:
            VAR_12 += VAR_8 / 2;
            break;
        case 3:
            VAR_13 += VAR_7;
            break;
        case 4:
            VAR_12 += VAR_8 / 2;
            VAR_13 += VAR_7;
            break;
        }
        VAR_14 = VAR_10.bottom - VAR_10.top + VAR_8 / 2;
        FUNC_3(VAR_5, ((void*)0), VAR_11, VAR_12, VAR_13, VAR_14, VAR_0|VAR_1|VAR_3);
    } else {
        VAR_11 = VAR_10.left + VAR_7;
        VAR_12 = VAR_10.top + VAR_8;
        FUNC_3(VAR_5, ((void*)0), VAR_11, VAR_12, 0, 0, VAR_0|VAR_1|VAR_2|VAR_3);
    }
    FUNC_1(VAR_5, ((void*)0), VAR_4);
}
