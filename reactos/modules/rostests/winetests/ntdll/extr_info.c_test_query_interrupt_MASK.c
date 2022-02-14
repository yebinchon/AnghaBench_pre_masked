
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int sbi ;
typedef int ULONG ;
struct TYPE_6__ {int NumberOfProcessors; } ;
typedef TYPE_1__ SYSTEM_INTERRUPT_INFORMATION ;
typedef TYPE_1__ SYSTEM_BASIC_INFORMATION ;
typedef scalar_t__ NTSTATUS ;


 int FUNC_0 () ;
 TYPE_1__* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int,char*,scalar_t__) ;
 scalar_t__ FUNC_4 (int ,TYPE_1__*,int,int*) ;

__attribute__((used)) static void FUNC_5(void)
{
    NTSTATUS VAR_4;
    ULONG VAR_5;
    ULONG VAR_6;
    SYSTEM_BASIC_INFORMATION VAR_7;
    SYSTEM_INTERRUPT_INFORMATION* VAR_8;


    VAR_4 = FUNC_4(VAR_2, &VAR_7, sizeof(VAR_7), &VAR_5);
    FUNC_3(VAR_4 == VAR_1, "Expected STATUS_SUCCESS, got %08x\n", VAR_4);
    VAR_6 = VAR_7.NumberOfProcessors * sizeof(SYSTEM_INTERRUPT_INFORMATION);

    VAR_8 = FUNC_1(FUNC_0(), 0, VAR_6);

    VAR_4 = FUNC_4(VAR_3, VAR_8, 0, &VAR_5);
    FUNC_3( VAR_4 == VAR_0, "Expected STATUS_INFO_LENGTH_MISMATCH, got %08x\n", VAR_4);


    VAR_4 = FUNC_4(VAR_3, VAR_8, VAR_6, &VAR_5);
    FUNC_3( VAR_4 == VAR_1, "Expected STATUS_SUCCESS, got %08x\n", VAR_4);





    FUNC_2( FUNC_0(), 0, VAR_8);
}
