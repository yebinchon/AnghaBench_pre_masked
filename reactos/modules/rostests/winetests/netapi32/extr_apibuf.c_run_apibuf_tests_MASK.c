
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef scalar_t__ NET_API_STATUS ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,char*,...) ;
 scalar_t__ FUNC_3 (int,int **) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int,int **) ;
 scalar_t__ FUNC_6 (int *,int*) ;

__attribute__((used)) static void FUNC_7(void)
{
    VOID *VAR_2;
    DWORD VAR_3;
    NET_API_STATUS VAR_4;


    FUNC_2(FUNC_3(1024, &VAR_2) == VAR_1,
       "Reserved memory\n");
    FUNC_2(FUNC_6(VAR_2, &VAR_3) == VAR_1, "Got size\n");
    FUNC_2(VAR_3 >= 1024, "The size is correct\n");

    FUNC_2(FUNC_5(VAR_2, 1500, &VAR_2) == VAR_1,
       "Reallocated\n");
    FUNC_2(FUNC_6(VAR_2, &VAR_3) == VAR_1, "Got size\n");
    FUNC_2(VAR_3 >= 1500, "The size is correct\n");

    FUNC_2(FUNC_4(VAR_2) == VAR_1, "Freed\n");

    FUNC_2(FUNC_6(((void*)0), &VAR_3) == VAR_0, "Error for NULL pointer\n");


    FUNC_2(FUNC_5(0, 1500, &VAR_2) == VAR_1, "Reallocate with OldBuffer = NULL failed\n");
    FUNC_2(VAR_2 != ((void*)0), "No memory got allocated\n");
    FUNC_2(FUNC_4(VAR_2) == VAR_1, "NetApiBufferFree failed\n");

    FUNC_2(FUNC_3(1024, &VAR_2) == VAR_1, "Memory not reserved\n");
    FUNC_2(FUNC_5(VAR_2, 0, &VAR_2) == VAR_1, "Not freed\n");
    FUNC_2(VAR_2 == ((void*)0), "Pointer not cleared\n");


    FUNC_2(FUNC_3(0, &VAR_2) == VAR_1,
       "Reserved memory\n");
    FUNC_2(FUNC_6(VAR_2, &VAR_3) == VAR_1, "Got size\n");
    FUNC_2(VAR_3 < 0xFFFFFFFF, "The size of the 0-length buffer\n");
    FUNC_2(FUNC_4(VAR_2) == VAR_1, "Freed\n");



    FUNC_1(0xdeadbeef);
    VAR_4 = FUNC_3(0, ((void*)0));
    FUNC_2( (VAR_4 == VAR_0) && (FUNC_0() == 0xdeadbeef),
        "returned %d with 0x%x (expected ERROR_INVALID_PARAMETER with "
        "0xdeadbeef)\n", VAR_4, FUNC_0());

    FUNC_1(0xdeadbeef);
    VAR_4 = FUNC_3(1024, ((void*)0));
    FUNC_2( (VAR_4 == VAR_0) && (FUNC_0() == 0xdeadbeef),
        "returned %d with 0x%x (expected ERROR_INVALID_PARAMETER with "
        "0xdeadbeef)\n", VAR_4, FUNC_0());
}
