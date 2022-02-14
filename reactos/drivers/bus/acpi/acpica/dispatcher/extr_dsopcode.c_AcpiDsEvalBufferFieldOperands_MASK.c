
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {TYPE_4__* Arg; } ;
struct TYPE_12__ {scalar_t__ AmlOpcode; TYPE_1__ Value; int * Node; } ;
struct TYPE_14__ {TYPE_2__ Common; } ;
struct TYPE_13__ {int ** Operands; } ;
typedef TYPE_3__ ACPI_WALK_STATE ;
typedef int ACPI_STATUS ;
typedef TYPE_4__ ACPI_PARSE_OBJECT ;
typedef int ACPI_OPERAND_OBJECT ;
typedef int ACPI_NAMESPACE_NODE ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_4__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_4 (scalar_t__,int *,int *,int *,int *,int *) ;
 int FUNC_5 (scalar_t__,int ,TYPE_3__*) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (scalar_t__) ;
 int VAR_4 ;
 int FUNC_8 (int ) ;

ACPI_STATUS
FUNC_9 (
    ACPI_WALK_STATE *VAR_5,
    ACPI_PARSE_OBJECT *VAR_6)
{
    ACPI_STATUS VAR_7;
    ACPI_OPERAND_OBJECT *VAR_8;
    ACPI_NAMESPACE_NODE *VAR_9;
    ACPI_PARSE_OBJECT *VAR_10;


    FUNC_2 (VAR_4, VAR_6);






    VAR_9 = VAR_6->Common.Node;



    VAR_10 = VAR_6->Common.Value.Arg;



    VAR_7 = FUNC_3 (VAR_5, VAR_10);
    if (FUNC_1 (VAR_7))
    {
        FUNC_8 (VAR_7);
    }

    VAR_8 = FUNC_6 (VAR_9);
    if (!VAR_8)
    {
        FUNC_8 (VAR_2);
    }



    VAR_7 = FUNC_5 (
        VAR_6->Common.AmlOpcode, VAR_0, VAR_5);
    if (FUNC_1 (VAR_7))
    {
        FUNC_0 ((VAR_1, "(%s) bad operand(s), status 0x%X",
            FUNC_7 (VAR_6->Common.AmlOpcode), VAR_7));

        FUNC_8 (VAR_7);
    }



    if (VAR_6->Common.AmlOpcode == VAR_3)
    {


        VAR_7 = FUNC_4 (VAR_6->Common.AmlOpcode, VAR_8,
            VAR_5->Operands[0], VAR_5->Operands[1],
            VAR_5->Operands[2], VAR_5->Operands[3]);
    }
    else
    {


        VAR_7 = FUNC_4 (VAR_6->Common.AmlOpcode, VAR_8,
            VAR_5->Operands[0], VAR_5->Operands[1],
            ((void*)0), VAR_5->Operands[2]);
    }

    FUNC_8 (VAR_7);
}
