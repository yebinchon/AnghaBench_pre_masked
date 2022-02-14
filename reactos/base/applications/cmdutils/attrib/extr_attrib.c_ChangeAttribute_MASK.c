
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dwFileAttributes; char* cFileName; } ;
typedef TYPE_1__ WIN32_FIND_DATAW ;
typedef char WCHAR ;
typedef char* LPWSTR ;
typedef int INT ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (char*,TYPE_1__*) ;
 scalar_t__ FUNC_3 (scalar_t__,TYPE_1__*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 () ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (char*,char*) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static
INT
FUNC_11(
    LPWSTR VAR_3,
    LPWSTR VAR_4,
    DWORD VAR_5,
    DWORD VAR_6,
    BOOL VAR_7,
    BOOL VAR_8)
{
    WIN32_FIND_DATAW VAR_9;
    HANDLE VAR_10;
    DWORD VAR_11;
    WCHAR VAR_12[VAR_2];
    LPWSTR VAR_13;


    FUNC_9(VAR_12, VAR_3);
    VAR_13 = VAR_12 + FUNC_10(VAR_12);


    if (VAR_7)
    {

        FUNC_9(VAR_13, L"*.*");

        VAR_10 = FUNC_2(VAR_12, &VAR_9);
        if (VAR_10 == VAR_1)
        {
            FUNC_0(FUNC_5(), VAR_4);
            return 1;
        }

        do
        {
            if (VAR_9.dwFileAttributes & VAR_0)
            {
                if (!FUNC_8(VAR_9.cFileName, L".") ||
                    !FUNC_8(VAR_9.cFileName, L".."))
                    continue;

                FUNC_9(VAR_13, VAR_9.cFileName);
                FUNC_7(VAR_13, L"\\");

                FUNC_11(VAR_12, VAR_4, VAR_5,
                                VAR_6, VAR_7, VAR_8);
            }
        }
        while (FUNC_3(VAR_10, &VAR_9));
        FUNC_1(VAR_10);
    }


    FUNC_9(VAR_13, VAR_4);

    VAR_10 = FUNC_2(VAR_12, &VAR_9);
    if (VAR_10 == VAR_1)
    {
        FUNC_0(FUNC_5(), VAR_4);
        return 1;
    }

    do
    {
        if (VAR_9.dwFileAttributes & VAR_0)
            continue;

        FUNC_9(VAR_13, VAR_9.cFileName);

        VAR_11 = FUNC_4 (VAR_12);

        if (VAR_11 != 0xFFFFFFFF)
        {
            VAR_11 = (VAR_11 & ~VAR_5) | VAR_6;
            FUNC_6(VAR_12, VAR_11);
        }
    }
    while (FUNC_3(VAR_10, &VAR_9));
    FUNC_1(VAR_10);

    return 0;
}
