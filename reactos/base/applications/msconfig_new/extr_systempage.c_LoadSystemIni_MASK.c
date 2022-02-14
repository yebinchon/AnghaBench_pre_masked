
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int szBuffer ;
typedef int WCHAR ;
typedef int UINT ;
struct TYPE_4__ {int* pszText; int mask; } ;
struct TYPE_5__ {int * hParent; TYPE_1__ item; int hInsertAfter; } ;
typedef TYPE_2__ TVINSERTSTRUCT ;
typedef int HWND ;
typedef int * HTREEITEM ;
typedef int HRESULT ;
typedef int FILE ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (int*,int,char*) ;
 int FUNC_3 (int*,int,int*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_4 (int ,TYPE_2__*) ;
 int * FUNC_5 (int*,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int*,int,int *) ;
 int FUNC_9 (int*) ;

__attribute__((used)) static BOOL
FUNC_10(WCHAR * VAR_6, HWND VAR_7)
{
    WCHAR VAR_8[VAR_0];
    HWND VAR_9;
    HTREEITEM VAR_10 = ((void*)0);
    FILE* VAR_11;
    UINT VAR_12;
    TVINSERTSTRUCT VAR_13;
    HRESULT VAR_14;

    VAR_14 = FUNC_3(VAR_8, sizeof(VAR_8), VAR_6);
    if (FUNC_0(VAR_14))
        return VAR_1;

    VAR_14 = FUNC_2(VAR_8, sizeof(VAR_8), L"\\system.ini");
    if (FUNC_0(VAR_14))
        return VAR_1;

    VAR_11 = FUNC_5(VAR_8, L"rt");
    if (!VAR_11)
       return VAR_1;

    VAR_9 = FUNC_1(VAR_7, VAR_2);

    while(!FUNC_7(VAR_11))
    {
        if (FUNC_8(VAR_8, VAR_0, VAR_11))
        {
            VAR_12 = FUNC_9(VAR_8);
            if (VAR_12 > 1)
            {
                VAR_8[VAR_12] = L'\0';
                VAR_8[VAR_12 - 1] = L'\0';
                VAR_13.hInsertAfter = VAR_5;
                VAR_13.item.mask = VAR_4;
                VAR_13.item.pszText = VAR_8;

                if (VAR_8[0] == L';' || VAR_8[0] == L'[')
                {

                    VAR_13.hParent = ((void*)0);
                    VAR_10 = FUNC_4(VAR_9, &VAR_13);
                }
                else
                {

                    VAR_13.hParent = VAR_10;
                    FUNC_4(VAR_9, &VAR_13);
                }
            }
        }
    }

    FUNC_6(VAR_11);

    return VAR_3;
}
