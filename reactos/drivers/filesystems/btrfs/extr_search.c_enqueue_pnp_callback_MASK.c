
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int Length; int MaximumLength; int * Buffer; } ;
struct TYPE_8__ {scalar_t__ work_item; int func; TYPE_1__ name; int DriverObject; } ;
typedef TYPE_2__ pnp_callback_context ;
typedef int pnp_callback ;
struct TYPE_9__ {int Length; int Buffer; } ;
typedef TYPE_3__* PUNICODE_STRING ;
typedef scalar_t__ PIO_WORKITEM ;
typedef int PDRIVER_OBJECT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 void* FUNC_1 (int ,int,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__,int ,int ,TYPE_2__*) ;
 int VAR_2 ;
 int FUNC_6 (int *,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_7(PDRIVER_OBJECT VAR_5, PUNICODE_STRING VAR_6, pnp_callback VAR_7) {
    PIO_WORKITEM VAR_8;
    pnp_callback_context* VAR_9;

    VAR_8 = FUNC_3(VAR_4);
    if (!VAR_8) {
        FUNC_0("out of memory\n");
        return;
    }

    VAR_9 = FUNC_1(VAR_2, sizeof(pnp_callback_context), VAR_0);

    if (!VAR_9) {
        FUNC_0("out of memory\n");
        FUNC_4(VAR_8);
        return;
    }

    VAR_9->DriverObject = VAR_5;

    if (VAR_6->Length > 0) {
        VAR_9->name.Buffer = FUNC_1(VAR_2, VAR_6->Length, VAR_0);
        if (!VAR_9->name.Buffer) {
            FUNC_0("out of memory\n");
            FUNC_2(VAR_9);
            FUNC_4(VAR_8);
            return;
        }

        FUNC_6(VAR_9->name.Buffer, VAR_6->Buffer, VAR_6->Length);
        VAR_9->name.Length = VAR_9->name.MaximumLength = VAR_6->Length;
    } else {
        VAR_9->name.Length = VAR_9->name.MaximumLength = 0;
        VAR_9->name.Buffer = ((void*)0);
    }

    VAR_9->func = VAR_7;
    VAR_9->work_item = VAR_8;

    FUNC_5(VAR_8, VAR_3, VAR_1, VAR_9);
}
