
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_3__ {int cbSize; scalar_t__ dwItemData; int fMask; } ;
typedef TYPE_1__ MENUITEMINFOW ;
typedef int * LPWSTR ;
typedef int * LPCWSTR ;
typedef int HWND ;
typedef int HMENU ;
typedef int HKEY ;
typedef int DWORD ;
typedef int BYTE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,scalar_t__,int ,TYPE_1__*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *,int ,int ,int const*,int) ;
 int VAR_6 ;
 scalar_t__ FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int *,int ) ;
 int FUNC_7 (int ) ;
 int VAR_7 ;
 int FUNC_8 (int *,int ,int) ;

void FUNC_9(LPCWSTR VAR_8, HWND VAR_9)
{
    HKEY VAR_10;
    DWORD VAR_11;

    if(FUNC_6(&VAR_10, &VAR_11, VAR_6) == VAR_0)
    {
        LPCWSTR VAR_12[VAR_2];
        int VAR_13;
        HMENU VAR_14 = FUNC_0(VAR_9);
        MENUITEMINFOW VAR_15;
        WCHAR VAR_16[6];

        VAR_15.cbSize = sizeof(MENUITEMINFOW);
        VAR_15.fMask = VAR_4;

        for(VAR_13 = 0; VAR_13 < VAR_2; VAR_13++)
            VAR_12[VAR_13] = ((void*)0);

        for(VAR_13 = 0; FUNC_1(VAR_14, VAR_3+VAR_13, VAR_1, &VAR_15); VAR_13++)
            VAR_12[VAR_13] = (LPWSTR)VAR_15.dwItemData;

        if(FUNC_4(VAR_8, VAR_12[0]))
        {
            for(VAR_13 = 0; VAR_13 < VAR_2 && VAR_12[VAR_13]; VAR_13++)
            {
                if(!FUNC_4(VAR_12[VAR_13], VAR_8))
                {
                    int VAR_17;
                    for(VAR_17 = 0; VAR_17 < VAR_13; VAR_17++)
                    {
                        VAR_12[VAR_13-VAR_17] = VAR_12[VAR_13-VAR_17-1];
                    }
                    VAR_12[0] = ((void*)0);
                    break;
                }
            }

            if(!VAR_12[0])
            {
                VAR_12[0] = VAR_8;
            } else
            {
                for(VAR_13 = 0; VAR_13 < VAR_2-1; VAR_13++)
                    VAR_12[VAR_2-1-VAR_13] = VAR_12[VAR_2-2-VAR_13];

                VAR_12[0] = VAR_8;
            }

            for(VAR_13 = 0; VAR_13 < VAR_2 && VAR_12[VAR_13]; VAR_13++)
            {
                FUNC_8(VAR_16, VAR_7, VAR_13+1);
                FUNC_3(VAR_10, (LPWSTR)&VAR_16, 0, VAR_5, (const BYTE*)VAR_12[VAR_13],
                               (FUNC_5(VAR_12[VAR_13])+1)*sizeof(WCHAR));
            }
        }
        FUNC_2(VAR_10);
    }
    FUNC_7(VAR_9);
}
