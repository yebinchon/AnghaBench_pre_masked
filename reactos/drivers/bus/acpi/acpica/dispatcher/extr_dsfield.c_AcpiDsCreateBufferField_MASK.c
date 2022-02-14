
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_9__ ;
typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_24__ {int * Node; } ;
struct TYPE_22__ {int AmlLength; int AmlStart; } ;
struct TYPE_21__ {TYPE_9__* NextObject; } ;
struct TYPE_27__ {TYPE_6__ BufferField; TYPE_4__ Extra; TYPE_3__ Common; } ;
struct TYPE_23__ {int Length; int Data; } ;
struct TYPE_19__ {int String; } ;
struct TYPE_20__ {scalar_t__ AmlOpcode; int * Node; TYPE_1__ Value; } ;
struct TYPE_26__ {TYPE_5__ Named; TYPE_2__ Common; } ;
struct TYPE_25__ {int ParseFlags; int ScopeInfo; scalar_t__ MethodNode; int * DeferredNode; } ;
typedef TYPE_7__ ACPI_WALK_STATE ;
typedef int ACPI_STATUS ;
typedef TYPE_8__ ACPI_PARSE_OBJECT ;
typedef TYPE_9__ ACPI_OPERAND_OBJECT ;
typedef int ACPI_NAMESPACE_NODE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_4 (int *,TYPE_9__*,int ) ;
 TYPE_9__* FUNC_5 (int *) ;
 int FUNC_6 (int ,int ,int ,int ,int,TYPE_7__*,int **) ;
 TYPE_8__* FUNC_7 (TYPE_8__*,int) ;
 TYPE_9__* FUNC_8 (int ) ;
 int FUNC_9 (TYPE_9__*) ;
 int VAR_15 ;
 int FUNC_10 (int ) ;

ACPI_STATUS
FUNC_11 (
    ACPI_PARSE_OBJECT *VAR_16,
    ACPI_WALK_STATE *VAR_17)
{
    ACPI_PARSE_OBJECT *VAR_18;
    ACPI_NAMESPACE_NODE *VAR_19;
    ACPI_STATUS VAR_20;
    ACPI_OPERAND_OBJECT *VAR_21;
    ACPI_OPERAND_OBJECT *VAR_22 = ((void*)0);
    UINT32 VAR_23;


    FUNC_3 (VAR_15);





    if (VAR_16->Common.AmlOpcode == VAR_14)
    {


        VAR_18 = FUNC_7 (VAR_16, 3);
    }
    else
    {


        VAR_18 = FUNC_7 (VAR_16, 2);
    }

    if (!VAR_18)
    {
        FUNC_10 (VAR_10);
    }

    if (VAR_17->DeferredNode)
    {
        VAR_19 = VAR_17->DeferredNode;
    }
    else
    {


        if (!(VAR_17->ParseFlags & VAR_5))
        {
            FUNC_0 ((VAR_11,
                "Parse execute mode is not set"));
            FUNC_10 (VAR_9);
        }



        VAR_23 = VAR_3 | VAR_1 |
            VAR_2;





        if (VAR_17->MethodNode &&
            !(VAR_17->ParseFlags & VAR_6))
        {
            VAR_23 |= VAR_4;
        }



        VAR_20 = FUNC_6 (VAR_17->ScopeInfo,
            VAR_18->Common.Value.String, VAR_7,
            VAR_0, VAR_23, VAR_17, &VAR_19);
        if (FUNC_2 (VAR_20))
        {
            FUNC_1 (VAR_17->ScopeInfo,
                VAR_18->Common.Value.String, VAR_20);
            FUNC_10 (VAR_20);
        }
    }






    VAR_16->Common.Node = VAR_19;






    VAR_21 = FUNC_5 (VAR_19);
    if (VAR_21)
    {
        FUNC_10 (VAR_13);
    }
    VAR_21 = FUNC_8 (VAR_8);
    if (!VAR_21)
    {
        VAR_20 = VAR_12;
        goto Cleanup;
    }





    VAR_22 = VAR_21->Common.NextObject;
    VAR_22->Extra.AmlStart = VAR_16->Named.Data;
    VAR_22->Extra.AmlLength = VAR_16->Named.Length;
    VAR_21->BufferField.Node = VAR_19;



    VAR_20 = FUNC_4 (VAR_19, VAR_21, VAR_8);
    if (FUNC_2 (VAR_20))
    {
        goto Cleanup;
    }


Cleanup:



    FUNC_9 (VAR_21);
    FUNC_10 (VAR_20);
}
