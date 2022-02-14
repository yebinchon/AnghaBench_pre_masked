
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int sbi ;
typedef int ULONG ;
struct TYPE_13__ {int QuadPart; } ;
struct TYPE_12__ {int QuadPart; } ;
struct TYPE_11__ {int QuadPart; } ;
struct TYPE_14__ {int NumberOfProcessors; TYPE_3__ IdleTime; TYPE_2__ UserTime; TYPE_1__ KernelTime; } ;
typedef TYPE_4__ SYSTEM_PROCESSOR_PERFORMANCE_INFORMATION ;
typedef TYPE_4__ SYSTEM_BASIC_INFORMATION ;
typedef int NTSTATUS ;


 int FUNC_0 () ;
 TYPE_4__* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,TYPE_4__*) ;
 TYPE_4__* FUNC_3 (int ,int ,TYPE_4__*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int,char*,...) ;
 int FUNC_5 (int ,TYPE_4__*,int,int*) ;

__attribute__((used)) static void FUNC_6(void)
{
    NTSTATUS VAR_4;
    ULONG VAR_5;
    ULONG VAR_6;
    SYSTEM_BASIC_INFORMATION VAR_7;
    SYSTEM_PROCESSOR_PERFORMANCE_INFORMATION* VAR_8;


    VAR_4 = FUNC_5(VAR_2, &VAR_7, sizeof(VAR_7), &VAR_5);
    FUNC_4(VAR_4 == VAR_1, "Expected STATUS_SUCCESS, got %08x\n", VAR_4);
    VAR_6 = VAR_7.NumberOfProcessors * sizeof(SYSTEM_PROCESSOR_PERFORMANCE_INFORMATION);

    VAR_8 = FUNC_1(FUNC_0(), 0, VAR_6);

    VAR_4 = FUNC_5(VAR_3, VAR_8, 0, &VAR_5);
    FUNC_4( VAR_4 == VAR_0, "Expected STATUS_INFO_LENGTH_MISMATCH, got %08x\n", VAR_4);


    VAR_8->KernelTime.QuadPart = 0xdeaddead;
    VAR_8->UserTime.QuadPart = 0xdeaddead;
    VAR_8->IdleTime.QuadPart = 0xdeaddead;
    VAR_4 = FUNC_5(VAR_3, VAR_8,
                                       sizeof(SYSTEM_PROCESSOR_PERFORMANCE_INFORMATION), &VAR_5);
    FUNC_4( VAR_4 == VAR_1, "Expected STATUS_SUCCESS, got %08x\n", VAR_4);
    FUNC_4( sizeof(SYSTEM_PROCESSOR_PERFORMANCE_INFORMATION) == VAR_5,
        "Inconsistent length %d\n", VAR_5);
    FUNC_4 (VAR_8->KernelTime.QuadPart != 0xdeaddead, "KernelTime unchanged\n");
    FUNC_4 (VAR_8->UserTime.QuadPart != 0xdeaddead, "UserTime unchanged\n");
    FUNC_4 (VAR_8->IdleTime.QuadPart != 0xdeaddead, "IdleTime unchanged\n");


    VAR_8->KernelTime.QuadPart = 0xdeaddead;
    VAR_8->UserTime.QuadPart = 0xdeaddead;
    VAR_8->IdleTime.QuadPart = 0xdeaddead;
    VAR_4 = FUNC_5(VAR_3, VAR_8, VAR_6, &VAR_5);
    FUNC_4( VAR_4 == VAR_1, "Expected STATUS_SUCCESS, got %08x\n", VAR_4);
    FUNC_4( VAR_6 == VAR_5, "Inconsistent length (%d) <-> (%d)\n", VAR_6, VAR_5);
    FUNC_4 (VAR_8->KernelTime.QuadPart != 0xdeaddead, "KernelTime unchanged\n");
    FUNC_4 (VAR_8->UserTime.QuadPart != 0xdeaddead, "UserTime unchanged\n");
    FUNC_4 (VAR_8->IdleTime.QuadPart != 0xdeaddead, "IdleTime unchanged\n");


    VAR_8 = FUNC_3(FUNC_0(), 0, VAR_8 , VAR_6 + 2);
    VAR_8->KernelTime.QuadPart = 0xdeaddead;
    VAR_8->UserTime.QuadPart = 0xdeaddead;
    VAR_8->IdleTime.QuadPart = 0xdeaddead;
    VAR_4 = FUNC_5(VAR_3, VAR_8, VAR_6 + 2, &VAR_5);
    FUNC_4( VAR_4 == VAR_1 || VAR_4 == VAR_0 ,
        "Expected STATUS_SUCCESS or STATUS_INFO_LENGTH_MISMATCH, got %08x\n", VAR_4);
    FUNC_4( VAR_6 == VAR_5, "Inconsistent length (%d) <-> (%d)\n", VAR_6, VAR_5);
    if (VAR_4 == VAR_1)
    {
        FUNC_4 (VAR_8->KernelTime.QuadPart != 0xdeaddead, "KernelTime unchanged\n");
        FUNC_4 (VAR_8->UserTime.QuadPart != 0xdeaddead, "UserTime unchanged\n");
        FUNC_4 (VAR_8->IdleTime.QuadPart != 0xdeaddead, "IdleTime unchanged\n");
    }
    else
    {
        FUNC_4 (VAR_8->KernelTime.QuadPart == 0xdeaddead, "KernelTime changed\n");
        FUNC_4 (VAR_8->UserTime.QuadPart == 0xdeaddead, "UserTime changed\n");
        FUNC_4 (VAR_8->IdleTime.QuadPart == 0xdeaddead, "IdleTime changed\n");
    }

    FUNC_2( FUNC_0(), 0, VAR_8);
}
