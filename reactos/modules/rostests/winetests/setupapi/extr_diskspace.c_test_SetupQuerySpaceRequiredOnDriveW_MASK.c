
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int LONGLONG ;
typedef int * HDSKSPC ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int) ;
 int * FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int const*,int*,int *,int ) ;
 int FUNC_5 (int,char*,...) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void FUNC_7(void)
{
    static const WCHAR VAR_4[] = {0};

    BOOL VAR_5;
    HDSKSPC VAR_6;
    LONGLONG VAR_7;

    FUNC_1(0xdeadbeef);
    VAR_5 = FUNC_4(((void*)0), ((void*)0), ((void*)0), ((void*)0), 0);
    if (!VAR_5 && FUNC_0() == VAR_0)
    {
        FUNC_6("SetupQuerySpaceRequiredOnDriveW is not available\n");
        return;
    }
    FUNC_5(!VAR_5, "Expected SetupQuerySpaceRequiredOnDriveW to return FALSE, got %d\n", VAR_5);
    FUNC_5(FUNC_0() == VAR_2,
       "Expected GetLastError() to return ERROR_INVALID_HANDLE, got %u\n",
       FUNC_0());

    FUNC_1(0xdeadbeef);
    VAR_7 = 0xdeadbeef;
    VAR_5 = FUNC_4(((void*)0), ((void*)0), &VAR_7, ((void*)0), 0);
    FUNC_5(!VAR_5, "Expected SetupQuerySpaceRequiredOnDriveW to return FALSE, got %d\n", VAR_5);
    FUNC_5(VAR_7 == 0xdeadbeef, "Expected output space parameter to be untouched\n");
    FUNC_5(FUNC_0() == VAR_2,
       "Expected GetLastError() to return ERROR_INVALID_HANDLE, got %u\n",
       FUNC_0());

    FUNC_1(0xdeadbeef);
    VAR_5 = FUNC_4(((void*)0), VAR_4, ((void*)0), ((void*)0), 0);
    FUNC_5(!VAR_5, "Expected SetupQuerySpaceRequiredOnDriveW to return FALSE, got %d\n", VAR_5);
    FUNC_5(FUNC_0() == VAR_2,
       "Expected GetLastError() to return ERROR_INVALID_HANDLE, got %u\n",
       FUNC_0());

    FUNC_1(0xdeadbeef);
    VAR_7 = 0xdeadbeef;
    VAR_5 = FUNC_4(((void*)0), VAR_4, &VAR_7, ((void*)0), 0);
    FUNC_5(!VAR_5, "Expected SetupQuerySpaceRequiredOnDriveW to return FALSE, got %d\n", VAR_5);
    FUNC_5(VAR_7 == 0xdeadbeef, "Expected output space parameter to be untouched\n");
    FUNC_5(FUNC_0() == VAR_2,
       "Expected GetLastError() to return ERROR_INVALID_HANDLE, got %u\n",
       FUNC_0());

    VAR_6 = FUNC_2(((void*)0), 0, 0);
    FUNC_5(VAR_6 != ((void*)0),
       "Expected SetupCreateDiskSpaceListA to return a valid handle, got NULL\n");

    FUNC_1(0xdeadbeef);
    VAR_5 = FUNC_4(VAR_6, ((void*)0), ((void*)0), ((void*)0), 0);
    FUNC_5(!VAR_5, "Expected SetupQuerySpaceRequiredOnDriveW to return FALSE, got %d\n", VAR_5);
    FUNC_5(FUNC_0() == VAR_3 ||
       FUNC_0() == VAR_1,
       "Expected GetLastError() to return ERROR_INVALID_PARAMETER, got %u\n",
       FUNC_0());

    FUNC_1(0xdeadbeef);
    VAR_7 = 0xdeadbeef;
    VAR_5 = FUNC_4(VAR_6, ((void*)0), &VAR_7, ((void*)0), 0);
    FUNC_5(!VAR_5, "Expected SetupQuerySpaceRequiredOnDriveW to return FALSE, got %d\n", VAR_5);
    FUNC_5(VAR_7 == 0xdeadbeef, "Expected output space parameter to be untouched\n");
    FUNC_5(FUNC_0() == VAR_3 ||
       FUNC_0() == VAR_1,
       "Expected GetLastError() to return ERROR_INVALID_PARAMETER, got %u\n",
       FUNC_0());

    FUNC_1(0xdeadbeef);
    VAR_5 = FUNC_4(VAR_6, VAR_4, ((void*)0), ((void*)0), 0);
    FUNC_5(!VAR_5, "Expected SetupQuerySpaceRequiredOnDriveW to return FALSE, got %d\n", VAR_5);
    FUNC_5(FUNC_0() == VAR_1,
       "Expected GetLastError() to return ERROR_INVALID_PARAMETER, got %u\n",
       FUNC_0());

    FUNC_1(0xdeadbeef);
    VAR_7 = 0xdeadbeef;
    VAR_5 = FUNC_4(VAR_6, VAR_4, &VAR_7, ((void*)0), 0);
    FUNC_5(!VAR_5, "Expected SetupQuerySpaceRequiredOnDriveW to return FALSE, got %d\n", VAR_5);
    FUNC_5(VAR_7 == 0xdeadbeef, "Expected output space parameter to be untouched\n");
    FUNC_5(FUNC_0() == VAR_1,
       "Expected GetLastError() to return ERROR_INVALID_PARAMETER, got %u\n",
       FUNC_0());

    FUNC_5(FUNC_3(VAR_6),
       "Expected SetupDestroyDiskSpaceList to succeed\n");
}
