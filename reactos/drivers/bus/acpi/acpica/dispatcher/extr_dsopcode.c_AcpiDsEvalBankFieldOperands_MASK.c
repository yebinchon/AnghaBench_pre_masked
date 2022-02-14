
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef scalar_t__ UINT32 ;
struct TYPE_21__ {scalar_t__ Value; } ;
struct TYPE_20__ {scalar_t__ Value; } ;
struct TYPE_25__ {TYPE_3__ Integer; TYPE_2__ BankField; } ;
struct TYPE_19__ {TYPE_6__* Arg; } ;
struct TYPE_22__ {scalar_t__ AmlOpcode; TYPE_6__* Next; int * Node; TYPE_1__ Value; } ;
struct TYPE_24__ {TYPE_4__ Common; } ;
struct TYPE_23__ {TYPE_7__** Operands; scalar_t__ OperandIndex; } ;
typedef TYPE_5__ ACPI_WALK_STATE ;
typedef int ACPI_STATUS ;
typedef TYPE_6__ ACPI_PARSE_OBJECT ;
typedef TYPE_7__ ACPI_OPERAND_OBJECT ;
typedef int ACPI_NAMESPACE_NODE ;


 int FUNC_0 (int ,int ,int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_6__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (TYPE_5__*,TYPE_6__*,int ) ;
 int FUNC_4 (TYPE_7__**,TYPE_5__*) ;
 TYPE_7__* FUNC_5 (int *) ;
 TYPE_6__* FUNC_6 (TYPE_6__*,int) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (TYPE_7__*) ;
 int VAR_3 ;
 int FUNC_9 (int ) ;

ACPI_STATUS
FUNC_10 (
    ACPI_WALK_STATE *VAR_4,
    ACPI_PARSE_OBJECT *VAR_5)
{
    ACPI_STATUS VAR_6;
    ACPI_OPERAND_OBJECT *VAR_7;
    ACPI_OPERAND_OBJECT *VAR_8;
    ACPI_NAMESPACE_NODE *VAR_9;
    ACPI_PARSE_OBJECT *VAR_10;
    ACPI_PARSE_OBJECT *VAR_11;


    FUNC_2 (VAR_3, VAR_5);
    VAR_10 = VAR_5->Common.Value.Arg;



    VAR_10 = VAR_10->Common.Next;



    VAR_10 = VAR_10->Common.Next;







    VAR_4->OperandIndex = 0;

    VAR_6 = FUNC_3 (VAR_4, VAR_10, 0);
    if (FUNC_1 (VAR_6))
    {
        FUNC_9 (VAR_6);
    }

    VAR_6 = FUNC_4 (&VAR_4->Operands[0], VAR_4);
    if (FUNC_1 (VAR_6))
    {
        FUNC_9 (VAR_6);
    }

    FUNC_0 (VAR_0,
        FUNC_7 (VAR_5->Common.AmlOpcode), 1);




    VAR_8 = VAR_4->Operands[0];



    VAR_11 = FUNC_6 (VAR_5, 4);
    while (VAR_11)
    {


        if (VAR_11->Common.AmlOpcode == VAR_2)
        {
            VAR_9 = VAR_11->Common.Node;

            VAR_7 = FUNC_5 (VAR_9);
            if (!VAR_7)
            {
                FUNC_9 (VAR_1);
            }

            VAR_7->BankField.Value = (UINT32) VAR_8->Integer.Value;
        }



        VAR_11 = VAR_11->Common.Next;
    }

    FUNC_8 (VAR_8);
    FUNC_9 (VAR_6);
}
