
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * HDSKSPC ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 unsigned int VAR_2 ;
 int FUNC_1 (int) ;
 int * FUNC_2 (void*,int,unsigned int) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int,char*,...) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void FUNC_7(void)
{
    HDSKSPC VAR_3;

    VAR_3 = FUNC_2(((void*)0), 0, 0);
    if (!VAR_3 && FUNC_0() == VAR_0)
    {
        FUNC_6("SetupCreateDiskSpaceListW is not implemented\n");
        return;
    }
    FUNC_5(VAR_3 != ((void*)0),
       "Expected SetupCreateDiskSpaceListW to return a valid handle, got NULL\n");

    FUNC_5(FUNC_3(VAR_3), "Expected SetupDestroyDiskSpaceList to succeed\n");

    VAR_3 = FUNC_2(((void*)0), 0, VAR_2);
    FUNC_5(VAR_3 != ((void*)0),
       "Expected SetupCreateDiskSpaceListW to return a valid handle, got NULL\n");

    FUNC_5(FUNC_3(VAR_3), "Expected SetupDestroyDiskSpaceList to succeed\n");

    FUNC_1(0xdeadbeef);
    VAR_3 = FUNC_2(((void*)0), 0, ~0U);
    FUNC_5(VAR_3 == ((void*)0) ||
       FUNC_4(VAR_3 != ((void*)0)),
       "Expected SetupCreateDiskSpaceListW to return NULL, got %p\n", VAR_3);
    if (!VAR_3)
        FUNC_5(FUNC_0() == VAR_1,
           "Expected GetLastError() to return ERROR_INVALID_PARAMETER, got %u\n",
           FUNC_0());
    else
        FUNC_5(FUNC_3(VAR_3), "Expected SetupDestroyDiskSpaceList to succeed\n");

    FUNC_1(0xdeadbeef);
    VAR_3 = FUNC_2(((void*)0), 0xdeadbeef, 0);
    FUNC_5(VAR_3 == ((void*)0),
       "Expected SetupCreateDiskSpaceListW to return NULL, got %p\n", VAR_3);
    FUNC_5(FUNC_0() == VAR_1 ||
       FUNC_4(FUNC_0() == 0xdeadbeef),
       "Expected GetLastError() to return ERROR_INVALID_PARAMETER, got %u\n",
       FUNC_0());

    FUNC_1(0xdeadbeef);
    VAR_3 = FUNC_2((void *)0xdeadbeef, 0, 0);
    FUNC_5(VAR_3 == ((void*)0),
       "Expected SetupCreateDiskSpaceListW to return NULL, got %p\n", VAR_3);
    FUNC_5(FUNC_0() == VAR_1 ||
       FUNC_4(FUNC_0() == 0xdeadbeef),
       "Expected GetLastError() to return ERROR_INVALID_PARAMETER, got %u\n",
       FUNC_0());

    FUNC_1(0xdeadbeef);
    VAR_3 = FUNC_2((void *)0xdeadbeef, 0xdeadbeef, 0);
    FUNC_5(VAR_3 == ((void*)0),
       "Expected SetupCreateDiskSpaceListW to return NULL, got %p\n", VAR_3);
    FUNC_5(FUNC_0() == VAR_1 ||
       FUNC_4(FUNC_0() == 0xdeadbeef),
       "Expected GetLastError() to return ERROR_INVALID_PARAMETER, got %u\n",
       FUNC_0());
}
