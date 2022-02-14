
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int vaddr_t ;
struct TYPE_9__ {int dsisr; int srr0; int dar; int srr1; } ;
typedef TYPE_2__ ppc_trap_frame_t ;
struct TYPE_8__ {scalar_t__ UserApcPending; } ;
struct TYPE_11__ {TYPE_1__ ApcState; } ;
struct TYPE_10__ {int NumberParameters; int* ExceptionInformation; scalar_t__ ExceptionFlags; int * ExceptionAddress; int * ExceptionRecord; int ExceptionCode; } ;
typedef int * PVOID ;
typedef int NTSTATUS ;
typedef int KTRAP_FRAME ;
typedef int KPROCESSOR_MODE ;
typedef int KIRQL ;
typedef TYPE_3__ EXCEPTION_RECORD ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int VAR_1 ;
 TYPE_7__* FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;
 int VAR_2 ;
 int FUNC_4 (int ,int *,int *) ;
 int FUNC_5 (TYPE_3__*,int ,int *,int ,int ) ;
 int FUNC_6 (int ,int *,int ,int *) ;
 int FUNC_7 (int ,int,int ) ;
 int FUNC_8 (TYPE_2__*,int *) ;
 int FUNC_9 () ;
 scalar_t__ FUNC_10 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

void FUNC_11(int VAR_7, ppc_trap_frame_t *VAR_8)
{
    NTSTATUS VAR_9 = VAR_4;
    KPROCESSOR_MODE VAR_10;
    EXCEPTION_RECORD VAR_11;
    KTRAP_FRAME VAR_12;
    BOOLEAN VAR_13 = !!(VAR_8->dsisr & (1<<28));
    vaddr_t VAR_14;
    PVOID VAR_15 = ((void*)0);


    if (VAR_7 == 4)
        VAR_14 = VAR_8->srr0;
    else
        VAR_14 = VAR_8->dar;


    VAR_10 = VAR_8->srr1 & 0x4000 ? VAR_6 : VAR_2;
    FUNC_0("Page Fault at %08x\n", VAR_8->srr0);


    if (VAR_13)
    {
        VAR_9 = FUNC_6(VAR_10, (PVOID)VAR_14, VAR_1, VAR_15);
    }
    else
    {
        VAR_9 = FUNC_7(VAR_10, VAR_14, VAR_1);
    }

    if (FUNC_10(VAR_9))
    {
        FUNC_9();
    }

    if (FUNC_1()->ApcState.UserApcPending)
    {
        KIRQL VAR_16;

        FUNC_3(VAR_0, &VAR_16);
        FUNC_4(VAR_6, ((void*)0), ((void*)0));
        FUNC_2(VAR_16);
    }

    FUNC_8(VAR_8, &VAR_12);

    VAR_11.ExceptionCode = VAR_3;
    VAR_11.ExceptionFlags = 0;
    VAR_11.ExceptionRecord = ((void*)0);
    VAR_11.ExceptionAddress = (PVOID)VAR_8->srr0;
    VAR_11.NumberParameters = 2;
    VAR_11.ExceptionInformation[0] = VAR_13;
    VAR_11.ExceptionInformation[1] = VAR_14;


    VAR_11.ExceptionFlags = 0;

    FUNC_5(&VAR_11, 0, &VAR_12, VAR_10, VAR_5);
    FUNC_9();
}
