
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dwFileAttributes; int * cFileName; } ;
typedef TYPE_1__ WIN32_FIND_DATAW ;
typedef int WCHAR ;
typedef int * LPWSTR ;
typedef int INT ;
typedef scalar_t__ HANDLE ;
typedef int BOOL ;


 int FUNC_0 (int ,char*,int,int,int,int,int *) ;
 int FUNC_1 (int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_4 (scalar_t__,TYPE_1__*) ;
 int FUNC_5 () ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static
INT
FUNC_10(
    LPWSTR VAR_8,
    LPWSTR VAR_9,
    BOOL VAR_10)
{
    WIN32_FIND_DATAW VAR_11;
    HANDLE VAR_12;
    WCHAR VAR_13[VAR_6];
    LPWSTR VAR_14;


    FUNC_8(VAR_13, VAR_8);
    VAR_14 = VAR_13 + FUNC_9(VAR_13);


    if (VAR_10)
    {

        FUNC_8(VAR_14, VAR_9);

        VAR_12 = FUNC_3(VAR_13, &VAR_11);
        if (VAR_12 == VAR_5)
        {
            FUNC_1(FUNC_5(), VAR_9);
            return 1;
        }

        do
        {
            if (!(VAR_11.dwFileAttributes & VAR_1))
                continue;

            if (!FUNC_7(VAR_11.cFileName, L".") ||
                !FUNC_7(VAR_11.cFileName, L".."))
                continue;

            FUNC_8(VAR_14, VAR_11.cFileName);
            FUNC_6(VAR_14, L"\\");
            FUNC_10(VAR_13, VAR_9, VAR_10);
        }
        while(FUNC_4(VAR_12, &VAR_11));
        FUNC_2(VAR_12);
    }


    FUNC_8(VAR_14, VAR_9);


    VAR_12 = FUNC_3(VAR_13, &VAR_11);
    if (VAR_12 == VAR_5)
    {
        FUNC_1(FUNC_5(), VAR_9);
        return 1;
    }

    do
    {
        if (VAR_11.dwFileAttributes & VAR_1)
            continue;

        FUNC_8(VAR_14, VAR_11.cFileName);

        FUNC_0(VAR_7,
                  L"%c  %c%c%c     %s\n",
                  (VAR_11.dwFileAttributes & VAR_0) ? L'A' : L' ',
                  (VAR_11.dwFileAttributes & VAR_4) ? L'S' : L' ',
                  (VAR_11.dwFileAttributes & VAR_2) ? L'H' : L' ',
                  (VAR_11.dwFileAttributes & VAR_3) ? L'R' : L' ',
                  VAR_13);
    }
    while(FUNC_4(VAR_12, &VAR_11));
    FUNC_2(VAR_12);

    return 0;
}
