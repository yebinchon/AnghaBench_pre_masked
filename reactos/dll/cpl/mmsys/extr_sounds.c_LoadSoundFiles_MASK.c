
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int WPARAM ;
struct TYPE_4__ {int dwFileAttributes; int* cFileName; } ;
typedef TYPE_1__ WIN32_FIND_DATAW ;
typedef int WCHAR ;
typedef int UINT ;
typedef int TCHAR ;
typedef scalar_t__ LRESULT ;
typedef int LPARAM ;
typedef int HWND ;
typedef scalar_t__ HANDLE ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int*,TYPE_1__*) ;
 scalar_t__ FUNC_3 (scalar_t__,TYPE_1__*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_6 (int ,int ,int *,int) ;
 int VAR_8 ;
 scalar_t__ FUNC_7 (int ,int ,int ,int ,int ) ;
 int FUNC_8 (char) ;
 int VAR_9 ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int*) ;
 int VAR_10 ;
 int FUNC_11 (int*,char*) ;
 int* FUNC_12 (int*,int) ;

BOOL
FUNC_13(HWND VAR_11)
{
    TCHAR VAR_12[256];
    WCHAR VAR_13[VAR_8];
    WCHAR * VAR_14;
    WIN32_FIND_DATAW VAR_15;
    HANDLE VAR_16;
    LRESULT VAR_17;
    UINT VAR_18;


    if (FUNC_6(VAR_10, VAR_6, VAR_12, FUNC_9(VAR_12)))
    {
        VAR_12[FUNC_9(VAR_12) - 1] = FUNC_8('\0');
        FUNC_0(FUNC_4(VAR_11, VAR_5), VAR_12);
    }


    VAR_18 = FUNC_5(VAR_13, VAR_8);
    if (VAR_18 == 0 || VAR_18 >= VAR_8 - 9)
    {
        return VAR_3;
    }
    if (VAR_13[VAR_18-1] != L'\\')
    {
        VAR_13[VAR_18] = L'\\';
        VAR_18++;
    }
    FUNC_11(&VAR_13[VAR_18], L"media\\*");
    VAR_18 += 7;

    VAR_16 = FUNC_2(VAR_13, &VAR_15);
    if (VAR_16 == VAR_7)
    {
        return VAR_3;
    }

    do
    {
        if (VAR_15.dwFileAttributes & VAR_4)
            continue;

        VAR_14 = FUNC_12(VAR_15.cFileName, L'\\');
        if (VAR_14)
        {
            VAR_14++;
        }
        else
        {
            VAR_14 = VAR_15.cFileName;
        }
        VAR_17 = FUNC_7(VAR_11, VAR_5, VAR_0, (WPARAM)0, (LPARAM)VAR_14);
        if (VAR_17 != VAR_1)
        {
            FUNC_11(&VAR_13[VAR_18-1], VAR_15.cFileName);
            FUNC_7(VAR_11, VAR_5, VAR_2, (WPARAM)VAR_17, (LPARAM)FUNC_10(VAR_13));
        }
    } while (FUNC_3(VAR_16, &VAR_15) != 0);

    FUNC_1(VAR_16);
    return VAR_9;
}
