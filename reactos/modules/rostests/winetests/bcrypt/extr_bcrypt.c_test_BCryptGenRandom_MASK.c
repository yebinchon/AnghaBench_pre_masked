
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buffer ;
typedef int UCHAR ;
typedef scalar_t__ NTSTATUS ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *,int,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int,char*,...) ;

__attribute__((used)) static void FUNC_4(void)
{
    NTSTATUS VAR_5;
    UCHAR VAR_6[256];

    VAR_5 = FUNC_0(((void*)0), ((void*)0), 0, 0);
    FUNC_3(VAR_5 == VAR_2, "Expected STATUS_INVALID_HANDLE, got 0x%x\n", VAR_5);
    VAR_5 = FUNC_0(((void*)0), VAR_6, 0, 0);
    FUNC_3(VAR_5 == VAR_2, "Expected STATUS_INVALID_HANDLE, got 0x%x\n", VAR_5);
    VAR_5 = FUNC_0(((void*)0), VAR_6, sizeof(VAR_6), 0);
    FUNC_3(VAR_5 == VAR_2, "Expected STATUS_INVALID_HANDLE, got 0x%x\n", VAR_5);
    VAR_5 = FUNC_0(((void*)0), VAR_6, sizeof(VAR_6), VAR_1);
    FUNC_3(VAR_5 == VAR_4, "Expected success, got 0x%x\n", VAR_5);
    VAR_5 = FUNC_0(((void*)0), VAR_6, sizeof(VAR_6),
          VAR_1|VAR_0);
    FUNC_3(VAR_5 == VAR_4, "Expected success, got 0x%x\n", VAR_5);
    VAR_5 = FUNC_0(((void*)0), ((void*)0), sizeof(VAR_6), VAR_1);
    FUNC_3(VAR_5 == VAR_3, "Expected STATUS_INVALID_PARAMETER, got 0x%x\n", VAR_5);


    VAR_5 = FUNC_0(((void*)0), VAR_6, 0, VAR_1);
    FUNC_3(VAR_5 == VAR_4, "Expected success, got 0x%x\n", VAR_5);


    FUNC_2(VAR_6, 0, 16);
    VAR_5 = FUNC_0(((void*)0), VAR_6, 8, VAR_1);
    FUNC_3(VAR_5 == VAR_4, "Expected success, got 0x%x\n", VAR_5);
    FUNC_3(FUNC_1(VAR_6, VAR_6 + 8, 8), "Expected a random number, got 0\n");
}
