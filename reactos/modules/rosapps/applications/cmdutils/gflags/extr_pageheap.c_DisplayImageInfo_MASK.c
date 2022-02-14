
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* PWSTR ;
typedef void** PBOOL ;
typedef scalar_t__ LONG ;
typedef int HKEY ;
typedef int DWORD ;
typedef void* BOOL ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 char* VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,char*,int ,int ,int *) ;
 void* VAR_6 ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static BOOL FUNC_4(HKEY VAR_7, PWSTR VAR_8, PBOOL VAR_9)
{
    LONG VAR_10;
    BOOL VAR_11;
    DWORD VAR_12;
    HKEY VAR_13;

    VAR_10 = FUNC_2(VAR_7, VAR_8, 0, VAR_5, &VAR_13);
    if (VAR_10 != VAR_0)
    {
        FUNC_3(L"DII: RegOpenKeyEx failed (%d)\n", VAR_10);
        return VAR_1;
    }

    VAR_11 = VAR_1;
    VAR_12 = FUNC_0(VAR_13, L"GlobalFlag");
    if (VAR_12 & VAR_2)
    {
        DWORD VAR_14;

        if (VAR_3 == ((void*)0))
        {
            if (!*VAR_9)
            {
                FUNC_3(L"path: %s\n", VAR_4);
                *VAR_9 = VAR_6;
            }
            FUNC_3(L"\t%s: page heap enabled with flags (", VAR_8);
        }
        else
        {
            FUNC_3(L"Page heap is enabled for %s with flags (", VAR_8);
        }

        VAR_14 = FUNC_0(VAR_13, L"PageHeapFlags");
        if (VAR_14 & 0x1)
        {
            FUNC_3(L"full ");
        }

        if (VAR_14 & 0x2)
        {
            FUNC_3(L"traces");
        }

        FUNC_3(L")\n");

        VAR_11 = VAR_6;
    }

    FUNC_1(VAR_13);

    return VAR_11;
}
