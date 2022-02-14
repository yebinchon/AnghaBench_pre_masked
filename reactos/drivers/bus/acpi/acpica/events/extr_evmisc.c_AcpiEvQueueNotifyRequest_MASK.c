
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_13__ ;


typedef size_t UINT8 ;
typedef scalar_t__ UINT32 ;
typedef scalar_t__ UINT16 ;
struct TYPE_19__ {size_t HandlerListId; TYPE_13__* Global; TYPE_4__* HandlerListHead; scalar_t__ Value; TYPE_5__* Node; } ;
struct TYPE_18__ {int DescriptorType; } ;
struct TYPE_22__ {TYPE_3__ Notify; TYPE_2__ Common; } ;
struct TYPE_21__ {int Type; } ;
struct TYPE_17__ {TYPE_4__** NotifyList; } ;
struct TYPE_20__ {TYPE_1__ CommonNotify; } ;
struct TYPE_16__ {int Handler; } ;
typedef int ACPI_STATUS ;
typedef TYPE_4__ ACPI_OPERAND_OBJECT ;
typedef TYPE_5__ ACPI_NAMESPACE_NODE ;
typedef TYPE_6__ ACPI_GENERIC_STATE ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (TYPE_5__*) ;
 int VAR_9 ;
 TYPE_13__* VAR_10 ;
 TYPE_4__* FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (int ,int ,TYPE_6__*) ;
 TYPE_6__* FUNC_6 () ;
 int FUNC_7 (TYPE_6__*) ;
 int FUNC_8 (TYPE_5__*) ;
 int FUNC_9 (scalar_t__,int ) ;
 int FUNC_10 (int ) ;
 int VAR_11 ;
 int VAR_12 ;

ACPI_STATUS
FUNC_11 (
    ACPI_NAMESPACE_NODE *VAR_13,
    UINT32 VAR_14)
{
    ACPI_OPERAND_OBJECT *VAR_15;
    ACPI_OPERAND_OBJECT *VAR_16 = ((void*)0);
    ACPI_GENERIC_STATE *VAR_17;
    UINT8 VAR_18 = 0;
    ACPI_STATUS VAR_19 = VAR_7;


    FUNC_2 (VAR_11);




    if (!FUNC_3 (VAR_13))
    {
        return (VAR_8);
    }



    if (VAR_14 <= VAR_3)
    {
        VAR_18 = VAR_4;
    }
    else
    {
        VAR_18 = VAR_2;
    }



    VAR_15 = FUNC_4 (VAR_13);
    if (VAR_15)
    {


        VAR_16 = VAR_15->CommonNotify.NotifyList[VAR_18];
    }





    if (!VAR_10[VAR_18].Handler && !VAR_16)
    {
        FUNC_0 ((VAR_0,
            "No notify handler for Notify, ignoring (%4.4s, %X) node %p\n",
            FUNC_8 (VAR_13), VAR_14, VAR_13));

        return (VAR_7);
    }



    VAR_17 = FUNC_6 ();
    if (!VAR_17)
    {
        return (VAR_6);
    }

    VAR_17->Common.DescriptorType = VAR_1;

    VAR_17->Notify.Node = VAR_13;
    VAR_17->Notify.Value = (UINT16) VAR_14;
    VAR_17->Notify.HandlerListId = VAR_18;
    VAR_17->Notify.HandlerListHead = VAR_16;
    VAR_17->Notify.Global = &VAR_10[VAR_18];

    FUNC_0 ((VAR_0,
        "Dispatching Notify on [%4.4s] (%s) Value 0x%2.2X (%s) Node %p\n",
        FUNC_8 (VAR_13), FUNC_10 (VAR_13->Type),
        VAR_14, FUNC_9 (VAR_14, VAR_5), VAR_13));

    VAR_19 = FUNC_5 (VAR_12,
        VAR_9, VAR_17);
    if (FUNC_1 (VAR_19))
    {
        FUNC_7 (VAR_17);
    }

    return (VAR_19);
}
