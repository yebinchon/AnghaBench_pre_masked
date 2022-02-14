
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int params ;
typedef int UINT ;
struct TYPE_3__ {int cbSize; scalar_t__ dwLanguageId; int * lpfnMsgBoxCallback; scalar_t__ dwContextHelpId; int * lpszIcon; int dwStyle; void* lpszCaption; void* lpszText; int hInstance; int hwndOwner; } ;
typedef TYPE_1__ MSGBOXPARAMSW ;
typedef void* LPCWSTR ;
typedef int HWND ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(HWND VAR_0, LPCWSTR VAR_1, LPCWSTR VAR_2, UINT VAR_3)
{
    MSGBOXPARAMSW VAR_4;

    VAR_4.cbSize = sizeof(VAR_4);
    VAR_4.hwndOwner = VAR_0;
    VAR_4.hInstance = FUNC_0(0);
    VAR_4.lpszText = VAR_1;
    VAR_4.lpszCaption = VAR_2;
    VAR_4.dwStyle = VAR_3;
    VAR_4.lpszIcon = ((void*)0);
    VAR_4.dwContextHelpId = 0;
    VAR_4.lpfnMsgBoxCallback = ((void*)0);
    VAR_4.dwLanguageId = 0;
    return FUNC_1(&VAR_4);
}
