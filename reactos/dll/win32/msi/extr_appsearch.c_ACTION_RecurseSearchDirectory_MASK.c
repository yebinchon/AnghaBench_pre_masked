
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int dwFileAttributes; int cFileName; } ;
typedef TYPE_1__ WIN32_FIND_DATAW ;
typedef char WCHAR ;
typedef scalar_t__ UINT ;
struct TYPE_9__ {char* File; } ;
typedef TYPE_2__ MSISIGNATURE ;
typedef int MSIPACKAGE ;
typedef char* LPWSTR ;
typedef char* LPCWSTR ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 scalar_t__ FUNC_0 (TYPE_2__*,TYPE_1__*,char*,scalar_t__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (char*,TYPE_1__*) ;
 scalar_t__ FUNC_3 (scalar_t__,TYPE_1__*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (char*,int ,...) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,char const*) ;
 int FUNC_9 (char*,char*) ;
 size_t FUNC_10 (char*) ;
 int FUNC_11 (size_t,int ) ;
 char* FUNC_12 (int) ;
 int FUNC_13 (char*) ;
 scalar_t__ FUNC_14 (int ,int ) ;
 int FUNC_15 (char const*) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static UINT FUNC_16(MSIPACKAGE *VAR_7, LPWSTR *VAR_8,
 MSISIGNATURE *VAR_9, LPCWSTR VAR_10, int VAR_11)
{
    HANDLE VAR_12;
    WIN32_FIND_DATAW VAR_13;
    UINT VAR_14 = VAR_1;
    size_t VAR_15 = FUNC_10(VAR_10), VAR_16 = FUNC_10(VAR_9->File);
    WCHAR VAR_17[VAR_4];
    WCHAR *VAR_18;
    DWORD VAR_19;

    static const WCHAR VAR_20[] = { '*','.','*',0 };

    FUNC_6("Searching directory %s for file %s, depth %d\n", FUNC_7(VAR_10),
          FUNC_7(VAR_9->File), VAR_11);

    if (VAR_11 < 0)
        return VAR_1;

    *VAR_8 = ((void*)0);




    VAR_19 = VAR_15 + FUNC_11(VAR_16, FUNC_15(VAR_20)) + 2;
    VAR_18 = FUNC_12(VAR_19 * sizeof(WCHAR));
    if (!VAR_18)
        return VAR_0;

    FUNC_9(VAR_18, VAR_10);
    FUNC_4(VAR_18);
    FUNC_8(VAR_18, VAR_9->File);

    VAR_12 = FUNC_2(VAR_18, &VAR_13);
    if (VAR_12 != VAR_3)
    {
        if (!(VAR_13.dwFileAttributes & VAR_2))
        {
            BOOL VAR_21;

            VAR_14 = FUNC_0(VAR_9, &VAR_13, VAR_18, &VAR_21);
            if (VAR_14 == VAR_1 && VAR_21)
            {
                FUNC_6("found file, returning %s\n", FUNC_7(VAR_18));
                *VAR_8 = VAR_18;
            }
        }
        FUNC_1(VAR_12);
    }

    if (VAR_14 == VAR_1 && !*VAR_8)
    {
        FUNC_9(VAR_18, VAR_10);
        FUNC_4(VAR_18);
        FUNC_8(VAR_18, VAR_20);

        VAR_12 = FUNC_2(VAR_18, &VAR_13);
        if (VAR_12 != VAR_3)
        {
            if (VAR_13.dwFileAttributes & VAR_2 &&
                FUNC_14( VAR_13.cFileName, VAR_5 ) &&
                FUNC_14( VAR_13.cFileName, VAR_6 ))
            {
                FUNC_9(VAR_17, VAR_10);
                FUNC_5(VAR_17, VAR_13.cFileName);
                VAR_14 = FUNC_16(VAR_7, VAR_8, VAR_9,
                                                   VAR_17, VAR_11 - 1);
            }

            while (VAR_14 == VAR_1 && !*VAR_8 &&
                   FUNC_3(VAR_12, &VAR_13) != 0)
            {
                if (!FUNC_14( VAR_13.cFileName, VAR_5 ) ||
                    !FUNC_14( VAR_13.cFileName, VAR_6 ))
                    continue;

                FUNC_9(VAR_17, VAR_10);
                FUNC_5(VAR_17, VAR_13.cFileName);
                if (VAR_13.dwFileAttributes & VAR_2)
                    VAR_14 = FUNC_16(VAR_7, VAR_8,
                                                       VAR_9, VAR_17, VAR_11 - 1);
            }

            FUNC_1(VAR_12);
        }
    }

    if (*VAR_8 != VAR_18)
        FUNC_13(VAR_18);

    return VAR_14;
}
