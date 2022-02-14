
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int mb ;
typedef int UINT ;
struct TYPE_4__ {int cbSize; int dwLanguageId; int dwStyle; void* lpszCaption; void* lpszText; int hInstance; int hwndOwner; } ;
typedef TYPE_1__ MSGBOXPARAMSW ;
typedef int HWND ;
typedef int HINSTANCE ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_1__*,int) ;

int FUNC_4(HWND VAR_2, HINSTANCE VAR_3, UINT VAR_4, UINT VAR_5, UINT VAR_6)
{
    MSGBOXPARAMSW VAR_7;

    FUNC_3(&VAR_7, sizeof(VAR_7));
    VAR_7.cbSize = sizeof(VAR_7);
    VAR_7.hwndOwner = VAR_2;
    VAR_7.hInstance = VAR_3;
    VAR_7.lpszText = FUNC_0(VAR_4);
    VAR_7.lpszCaption = FUNC_0(VAR_5);
    VAR_7.dwStyle = VAR_6;
    VAR_7.dwLanguageId = FUNC_1(VAR_0, VAR_1);

    return FUNC_2(&VAR_7);
}
