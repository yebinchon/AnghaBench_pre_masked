
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int openfilename ;
typedef int WCHAR ;
struct TYPE_6__ {int hInstance; } ;
struct TYPE_5__ {int lStructSize; char* lpstrDefExt; int * lpTemplateName; int * lpfnHook; scalar_t__ lCustData; scalar_t__ nFileExtension; scalar_t__ nFileOffset; int * lpstrTitle; scalar_t__ nMaxFileTitle; int * lpstrFileTitle; scalar_t__ nFilterIndex; scalar_t__ nMaxCustFilter; int * lpstrCustomFilter; scalar_t__ Flags; int * lpstrInitialDir; int nMaxFile; int lpstrFile; int lpstrFilter; int hInstance; int hwndOwner; } ;
typedef TYPE_1__ OPENFILENAMEW ;
typedef int LPWSTR ;
typedef int LPCWSTR ;
typedef int INT ;
typedef int HWND ;
typedef int BOOL ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_3__ VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (TYPE_1__*,int) ;

__attribute__((used)) static
BOOL
FUNC_4(HWND VAR_2, LPCWSTR VAR_3, LPWSTR VAR_4, INT VAR_5)
{
    OPENFILENAMEW VAR_6;
    WCHAR VAR_7[VAR_1];

    FUNC_3(&VAR_6, sizeof(VAR_6));

    FUNC_1(FUNC_0(VAR_7), VAR_7);

    VAR_6.lStructSize = sizeof(VAR_6);
    VAR_6.hwndOwner = VAR_2;
    VAR_6.hInstance = VAR_0.hInstance;
    VAR_6.lpstrFilter = VAR_3;
    VAR_6.lpstrFile = VAR_4;
    VAR_6.nMaxFile = VAR_5;
    VAR_6.lpstrInitialDir = VAR_7;
    VAR_6.Flags = 0;
    VAR_6.lpstrDefExt = L"exe";
    VAR_6.lpstrCustomFilter = ((void*)0);
    VAR_6.nMaxCustFilter = 0;
    VAR_6.nFilterIndex = 0;
    VAR_6.lpstrFileTitle = ((void*)0);
    VAR_6.nMaxFileTitle = 0;
    VAR_6.lpstrTitle = ((void*)0);
    VAR_6.nFileOffset = 0;
    VAR_6.nFileExtension = 0;
    VAR_6.lCustData = 0;
    VAR_6.lpfnHook = ((void*)0);
    VAR_6.lpTemplateName = ((void*)0);

    return FUNC_2(&VAR_6);
}
