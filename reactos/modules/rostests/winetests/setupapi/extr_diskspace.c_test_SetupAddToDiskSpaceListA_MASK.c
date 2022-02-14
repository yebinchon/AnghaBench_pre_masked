
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * HDSKSPC ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,char*,int,int ,int ,int ) ;
 int * FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int,char*,...) ;

__attribute__((used)) static void FUNC_6(void)
{
    HDSKSPC VAR_4;
    BOOL VAR_5;

    VAR_5 = FUNC_1(((void*)0), "C:\\some-file.dat", 0, VAR_2, 0, 0);
    FUNC_5(!VAR_5, "Expected SetupAddToDiskSpaceListA to return FALSE, got %d\n", VAR_5);
    FUNC_5(FUNC_0() == VAR_0,
       "Expected GetLastError() to return ERROR_INVALID_HANDLE, got %u\n", FUNC_0());

    VAR_4 = FUNC_2(((void*)0), 0, 0);
    FUNC_5(VAR_4 != ((void*)0),"Expected SetupCreateDiskSpaceListA to return a valid handle\n");

    VAR_5 = FUNC_1(VAR_4, ((void*)0), 0, VAR_2, 0, 0);
    FUNC_5(VAR_5 || FUNC_4(!VAR_5) , "Expected SetupAddToDiskSpaceListA to succeed\n");

    VAR_5 = FUNC_1(VAR_4, "C:\\some-file.dat", -20, VAR_2, 0, 0);
    FUNC_5(VAR_5, "Expected SetupAddToDiskSpaceListA to succeed\n");

    VAR_5 = FUNC_1(VAR_4, "C:\\some-file.dat", 0, VAR_3, 0, 0);
    FUNC_5(!VAR_5, "Expected SetupAddToDiskSpaceListA to return FALSE\n");
    FUNC_5(FUNC_0() == VAR_1,
       "Expected GetLastError() to return ERROR_INVALID_PARAMETER, got %u\n", FUNC_0());

    VAR_5 = FUNC_1(VAR_4, ((void*)0), 0, VAR_3, 0, 0);
    FUNC_5(VAR_5 || FUNC_4(!VAR_5) , "Expected SetupAddToDiskSpaceListA to succeed\n");

    VAR_5 = FUNC_1(((void*)0), ((void*)0), 0, VAR_3, 0, 0);
    FUNC_5(VAR_5 || FUNC_4(!VAR_5) , "Expected SetupAddToDiskSpaceListA to succeed\n");

    FUNC_5(FUNC_3(VAR_4),
       "Expected SetupDestroyDiskSpaceList to succeed\n");
}
