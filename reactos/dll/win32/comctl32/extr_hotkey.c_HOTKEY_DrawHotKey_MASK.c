
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int WORD ;
struct TYPE_8__ {int clrWindow; int clrWindowText; int clrBtnFace; int clrGrayText; } ;
struct TYPE_7__ {scalar_t__ CaretPos; int hwndSelf; int hFont; } ;
struct TYPE_6__ {scalar_t__ cx; } ;
typedef TYPE_1__ SIZE ;
typedef int LPCWSTR ;
typedef scalar_t__ INT ;
typedef TYPE_2__ HOTKEY_INFO ;
typedef int HFONT ;
typedef int HDC ;
typedef int COLORREF ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,TYPE_1__*) ;
 int FUNC_2 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (scalar_t__,scalar_t__) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,scalar_t__,scalar_t__,int ,int ) ;
 int VAR_3 ;
 TYPE_3__ VAR_4 ;

__attribute__((used)) static void
FUNC_8(HOTKEY_INFO *VAR_5, HDC VAR_6, LPCWSTR VAR_7, WORD VAR_8)
{
    SIZE VAR_9;
    INT VAR_10, VAR_11;
    COLORREF VAR_12, VAR_13;
    HFONT VAR_14;


    VAR_10 = FUNC_0(VAR_1);
    VAR_11 = FUNC_0(VAR_2);

    VAR_14 = FUNC_3(VAR_6, VAR_5->hFont);
    if (FUNC_2(VAR_5->hwndSelf, VAR_0) & VAR_3)
    {
        VAR_12 = FUNC_6(VAR_6, VAR_4.clrGrayText);
        VAR_13 = FUNC_4(VAR_6, VAR_4.clrBtnFace);
    }
    else
    {
        VAR_12 = FUNC_6(VAR_6, VAR_4.clrWindowText);
        VAR_13 = FUNC_4(VAR_6, VAR_4.clrWindow);
    }

    FUNC_7(VAR_6, VAR_10, VAR_11, VAR_7, VAR_8);


    FUNC_1(VAR_6, VAR_7, VAR_8, &VAR_9);
    VAR_5->CaretPos = VAR_10 + VAR_9.cx;

    FUNC_4(VAR_6, VAR_13);
    FUNC_6(VAR_6, VAR_12);
    FUNC_3(VAR_6, VAR_14);


    FUNC_5(VAR_5->CaretPos, VAR_11);
}
