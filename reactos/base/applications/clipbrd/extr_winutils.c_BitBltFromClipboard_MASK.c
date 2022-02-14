
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int bmp ;
struct TYPE_11__ {scalar_t__ bmHeight; scalar_t__ bmWidth; } ;
struct TYPE_8__ {scalar_t__ top; scalar_t__ left; scalar_t__ bottom; scalar_t__ right; } ;
struct TYPE_10__ {TYPE_1__ rcPaint; int hdc; } ;
struct TYPE_9__ {scalar_t__ CurrentY; scalar_t__ CurrentX; } ;
typedef TYPE_2__ SCROLLSTATE ;
typedef TYPE_3__ PAINTSTRUCT ;
typedef int LONG ;
typedef int HDC ;
typedef scalar_t__ HBITMAP ;
typedef int DWORD ;
typedef TYPE_4__ BITMAP ;


 int FUNC_0 (int ,scalar_t__,scalar_t__,int ,int ,int ,scalar_t__,scalar_t__,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__,int,TYPE_4__*) ;
 int FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (scalar_t__,scalar_t__) ;

void FUNC_7(PAINTSTRUCT VAR_1, SCROLLSTATE VAR_2, DWORD VAR_3)
{
    HDC VAR_4;
    HBITMAP VAR_5;
    BITMAP VAR_6;
    LONG VAR_7, VAR_8;

    VAR_4 = FUNC_1(VAR_1.hdc);
    if (!VAR_4)
        return;

    VAR_5 = (HBITMAP)FUNC_3(VAR_0);
    FUNC_4(VAR_5, sizeof(VAR_6), &VAR_6);

    FUNC_5(VAR_4, VAR_5);

    VAR_7 = FUNC_6(VAR_1.rcPaint.right - VAR_1.rcPaint.left, VAR_6.bmWidth - VAR_1.rcPaint.left - VAR_2.CurrentX);
    VAR_8 = FUNC_6(VAR_1.rcPaint.bottom - VAR_1.rcPaint.top , VAR_6.bmHeight - VAR_1.rcPaint.top - VAR_2.CurrentY);

    FUNC_0(VAR_1.hdc,
           VAR_1.rcPaint.left,
           VAR_1.rcPaint.top,
           VAR_7,
           VAR_8,
           VAR_4,
           VAR_1.rcPaint.left + VAR_2.CurrentX,
           VAR_1.rcPaint.top + VAR_2.CurrentY,
           VAR_3);

    FUNC_2(VAR_4);
}
