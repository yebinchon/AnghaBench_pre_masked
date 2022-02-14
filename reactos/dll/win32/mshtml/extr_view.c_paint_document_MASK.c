
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dwFlags; } ;
struct TYPE_5__ {int hwnd; TYPE_1__ hostinfo; } ;
typedef int RECT ;
typedef int PAINTSTRUCT ;
typedef TYPE_2__ HTMLDocumentObj ;
typedef int HDC ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int *,int ,int) ;
 int VAR_4 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(HTMLDocumentObj *VAR_5)
{
    PAINTSTRUCT VAR_6;
    RECT VAR_7;
    HDC VAR_8;

    FUNC_3(VAR_5->hwnd, &VAR_7);

    VAR_8 = FUNC_0(VAR_5->hwnd, &VAR_6);

    if(!(VAR_5->hostinfo.dwFlags & (VAR_3|VAR_2)))
        FUNC_1(VAR_8, &VAR_7, VAR_4, VAR_1|VAR_0);

    FUNC_2(VAR_5->hwnd, &VAR_6);
}
