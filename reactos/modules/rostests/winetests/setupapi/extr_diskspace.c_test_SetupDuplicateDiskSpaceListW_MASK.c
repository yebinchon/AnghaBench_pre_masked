
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * HDSKSPC ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 () ;
 unsigned int VAR_3 ;
 int FUNC_1 (int) ;
 int * FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *,void*,int,unsigned int) ;
 int FUNC_5 (int,char*,...) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void FUNC_8(void)
{
    HDSKSPC VAR_4, VAR_5;

    FUNC_1(0xdeadbeef);
    VAR_5 = FUNC_4(((void*)0), ((void*)0), 0, 0);
    if (!VAR_5 && FUNC_0() == VAR_0)
    {
        FUNC_7("SetupDuplicateDiskSpaceListW is not available\n");
        return;
    }
    FUNC_5(!VAR_5, "Expected SetupDuplicateDiskSpaceList to return NULL, got %p\n", VAR_5);
    FUNC_5(FUNC_0() == VAR_1,
       "Expected GetLastError() to return ERROR_INVALID_HANDLE, got %u\n", FUNC_0());

    FUNC_1(0xdeadbeef);
    VAR_5 = FUNC_4(((void*)0), (void *)0xdeadbeef, 0, 0);
    FUNC_5(!VAR_5, "Expected SetupDuplicateDiskSpaceList to return NULL, got %p\n", VAR_5);
    FUNC_5(FUNC_0() == VAR_2,
       "Expected GetLastError() to return ERROR_INVALID_PARAMETER, got %u\n", FUNC_0());

    FUNC_1(0xdeadbeef);
    VAR_5 = FUNC_4(((void*)0), ((void*)0), 0xdeadbeef, 0);
    FUNC_5(!VAR_5, "Expected SetupDuplicateDiskSpaceList to return NULL, got %p\n", VAR_5);
    FUNC_5(FUNC_0() == VAR_2,
       "Expected GetLastError() to return ERROR_INVALID_PARAMETER, got %u\n", FUNC_0());

    FUNC_1(0xdeadbeef);
    VAR_5 = FUNC_4(((void*)0), ((void*)0), 0, ~0U);
    FUNC_5(!VAR_5, "Expected SetupDuplicateDiskSpaceList to return NULL, got %p\n", VAR_5);
    FUNC_5(FUNC_0() == VAR_2,
       "Expected GetLastError() to return ERROR_INVALID_PARAMETER, got %u\n", FUNC_0());

    VAR_4 = FUNC_2(((void*)0), 0, 0);
    FUNC_5(VAR_4 != ((void*)0),
       "Expected SetupCreateDiskSpaceListW to return a valid handle, got NULL\n");

    if (!VAR_4)
    {
        FUNC_6("Failed to create a disk space handle\n");
        return;
    }

    FUNC_1(0xdeadbeef);
    VAR_5 = FUNC_4(VAR_4, (void *)0xdeadbeef, 0, 0);
    FUNC_5(!VAR_5, "Expected SetupDuplicateDiskSpaceList to return NULL, got %p\n", VAR_5);
    FUNC_5(FUNC_0() == VAR_2,
       "Expected GetLastError() to return ERROR_INVALID_PARAMETER, got %u\n", FUNC_0());

    FUNC_1(0xdeadbeef);
    VAR_5 = FUNC_4(VAR_4, ((void*)0), 0xdeadbeef, 0);
    FUNC_5(!VAR_5, "Expected SetupDuplicateDiskSpaceList to return NULL, got %p\n", VAR_5);
    FUNC_5(FUNC_0() == VAR_2,
       "Expected GetLastError() to return ERROR_INVALID_PARAMETER, got %u\n", FUNC_0());

    FUNC_1(0xdeadbeef);
    VAR_5 = FUNC_4(VAR_4, ((void*)0), 0, VAR_3);
    FUNC_5(!VAR_5, "Expected SetupDuplicateDiskSpaceList to return NULL, got %p\n", VAR_5);
    FUNC_5(FUNC_0() == VAR_2,
       "Expected GetLastError() to return ERROR_INVALID_PARAMETER, got %u\n", FUNC_0());

    FUNC_1(0xdeadbeef);
    VAR_5 = FUNC_4(VAR_4, ((void*)0), 0, ~0U);
    FUNC_5(!VAR_5, "Expected SetupDuplicateDiskSpaceList to return NULL, got %p\n", VAR_5);
    FUNC_5(FUNC_0() == VAR_2,
       "Expected GetLastError() to return ERROR_INVALID_PARAMETER, got %u\n", FUNC_0());

    VAR_5 = FUNC_4(VAR_4, ((void*)0), 0, 0);
    FUNC_5(VAR_5 != ((void*)0), "Expected SetupDuplicateDiskSpaceList to return NULL, got %p\n", VAR_5);
    FUNC_5(VAR_5 != VAR_4,
       "Expected new handle (%p) to be different from the old handle (%p)\n", VAR_5, VAR_4);

    FUNC_5(FUNC_3(VAR_5), "Expected SetupDestroyDiskSpaceList to succeed\n");
    FUNC_5(FUNC_3(VAR_4), "Expected SetupDestroyDiskSpaceList to succeed\n");
}
