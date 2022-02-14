
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_12__ ;


struct TYPE_23__ {int Status; } ;
struct TYPE_25__ {TYPE_1__ IoStatus; } ;
struct TYPE_24__ {int MajorFunction; int Flags; int PriorityBoost; TYPE_3__* Irp; } ;
struct TYPE_22__ {int IrpContextLookasideList; int EnableWriteSupport; } ;
typedef TYPE_2__* PNTFS_IRP_CONTEXT ;
typedef TYPE_3__* PIRP ;
typedef int NTSTATUS ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,TYPE_2__*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (TYPE_3__*,int ) ;
 int FUNC_6 (int *) ;
 int VAR_2 ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_2__*) ;
 TYPE_12__* VAR_3 ;
 int FUNC_13 (TYPE_3__*) ;
 int FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (TYPE_2__*) ;
 int FUNC_16 (TYPE_2__*) ;
 int FUNC_17 (TYPE_2__*) ;
 int FUNC_18 (TYPE_2__*) ;
 int FUNC_19 (TYPE_2__*) ;
 int FUNC_20 (TYPE_2__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_21 (int ,char*) ;

__attribute__((used)) static
NTSTATUS
FUNC_22(PNTFS_IRP_CONTEXT VAR_6)
{
    PIRP VAR_7 = VAR_6->Irp;
    NTSTATUS VAR_8 = VAR_5;

    FUNC_21(VAR_2, "NtfsDispatch()\n");

    FUNC_3();

    FUNC_13(VAR_7);

    switch (VAR_6->MajorFunction)
    {
        case 132:
            VAR_8 = FUNC_15(VAR_6);
            break;

        case 129:
            VAR_8 = FUNC_19(VAR_6);
            break;

        case 133:
            VAR_8 = FUNC_14(VAR_6);
            break;

        case 130:
            if (!VAR_3->EnableWriteSupport)
            {
                FUNC_1("NTFS write-support is EXPERIMENTAL and is disabled by default!\n");
                VAR_8 = VAR_4;
            }
            else
            {
                VAR_8 = FUNC_18(VAR_6);
            }
            break;

        case 135:
            VAR_8 = FUNC_11(VAR_6);
            break;

        case 131:
            VAR_8 = FUNC_17(VAR_6);
            break;

        case 136:
            VAR_8 = FUNC_10(VAR_6);
             break;

        case 128:
            if (!VAR_3->EnableWriteSupport)
            {
                FUNC_1("NTFS write-support is EXPERIMENTAL and is disabled by default!\n");
                VAR_8 = VAR_4;
            }
            else
            {
                VAR_8 = FUNC_20(VAR_6);
            }
            break;

        case 138:
            VAR_8 = FUNC_8(VAR_6);
            break;

        case 139:
            VAR_8 = FUNC_7(VAR_6);
            break;

        case 137:
            VAR_8 = FUNC_9(VAR_6);
            break;

        case 134:
            VAR_8 = FUNC_12(VAR_6);
            break;
    }

    FUNC_0((!(VAR_6->Flags & VAR_0) && !(VAR_6->Flags & VAR_1)) ||
           ((VAR_6->Flags & VAR_0) && !(VAR_6->Flags & VAR_1)) ||
           (!(VAR_6->Flags & VAR_0) && (VAR_6->Flags & VAR_1)));

    if (VAR_6->Flags & VAR_0)
    {
        VAR_7->IoStatus.Status = VAR_8;
        FUNC_5(VAR_7, VAR_6->PriorityBoost);
    }

    if (VAR_6->Flags & VAR_1)
    {

        VAR_6->Flags |= VAR_0;
        VAR_6->Flags &= ~VAR_1;
        VAR_8 = FUNC_16(VAR_6);
    }
    else
    {
        FUNC_2(&VAR_3->IrpContextLookasideList, VAR_6);
    }

    FUNC_6(((void*)0));
    FUNC_4();

    return VAR_8;
}
