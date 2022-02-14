
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_9__ ;
typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_28__ {int Type; } ;
struct TYPE_27__ {int Class; int ObjectType; } ;
struct TYPE_24__ {TYPE_9__* Node; } ;
struct TYPE_23__ {scalar_t__ AmlOpcode; } ;
struct TYPE_26__ {TYPE_5__ Named; TYPE_4__ Common; } ;
struct TYPE_25__ {scalar_t__ Opcode; int WalkType; TYPE_8__* OpInfo; TYPE_3__* ControlState; TYPE_7__* Origin; TYPE_7__* Op; } ;
struct TYPE_21__ {TYPE_7__* PredicateOp; } ;
struct TYPE_20__ {scalar_t__ State; } ;
struct TYPE_22__ {TYPE_2__ Control; TYPE_1__ Common; } ;
typedef TYPE_6__ ACPI_WALK_STATE ;
typedef int ACPI_STATUS ;
typedef TYPE_7__ ACPI_PARSE_OBJECT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_6__*) ;
 int VAR_4 ;
 int VAR_5 ;




 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (TYPE_6__*,TYPE_7__*) ;
 int FUNC_4 (TYPE_6__*,TYPE_7__**) ;
 int FUNC_5 (int ,TYPE_6__*) ;
 int FUNC_6 (TYPE_6__*) ;
 int FUNC_7 (TYPE_9__*,int ,TYPE_6__*) ;
 scalar_t__ FUNC_8 (int ) ;
 TYPE_8__* FUNC_9 (scalar_t__) ;
 int FUNC_10 (int ) ;
 int VAR_8 ;
 int FUNC_11 (int ) ;

ACPI_STATUS
FUNC_12 (
    ACPI_WALK_STATE *VAR_9,
    ACPI_PARSE_OBJECT **VAR_10)
{
    ACPI_PARSE_OBJECT *VAR_11;
    ACPI_STATUS VAR_12 = VAR_5;
    UINT32 VAR_13;


    FUNC_2 (VAR_8, VAR_9);


    VAR_11 = VAR_9->Op;
    if (!VAR_11)
    {
        VAR_12 = FUNC_4 (VAR_9, VAR_10);
        if (FUNC_1 (VAR_12))
        {
            goto ErrorExit;
        }

        VAR_11 = *VAR_10;
        VAR_9->Op = VAR_11;
        VAR_9->Opcode = VAR_11->Common.AmlOpcode;
        VAR_9->OpInfo = FUNC_9 (VAR_11->Common.AmlOpcode);

        if (FUNC_8 (VAR_9->OpInfo->ObjectType))
        {
            FUNC_0 ((VAR_2,
                "(%s) Popping scope for Op %p\n",
                FUNC_10 (VAR_9->OpInfo->ObjectType), VAR_11));

            VAR_12 = FUNC_6 (VAR_9);
            if (FUNC_1 (VAR_12))
            {
                goto ErrorExit;
            }
        }
    }

    if (VAR_11 == VAR_9->Origin)
    {
        if (VAR_10)
        {
            *VAR_10 = VAR_11;
        }

        FUNC_11 (VAR_5);
    }






    if ((VAR_9->ControlState) &&
        (VAR_9->ControlState->Common.State ==
            VAR_0))
    {
        FUNC_0 ((VAR_3,
            "Exec predicate Op=%p State=%p\n",
            VAR_11, VAR_9));

        VAR_9->ControlState->Common.State =
            VAR_1;



        VAR_9->ControlState->Control.PredicateOp = VAR_11;
    }


    VAR_13 = VAR_9->OpInfo->Class;



    if (VAR_11->Common.AmlOpcode == VAR_6)
    {
        VAR_13 = 128;
    }




    switch (VAR_13)
    {
    case 131:

        VAR_12 = FUNC_3 (VAR_9, VAR_11);
        break;

    case 128:

        if (VAR_9->WalkType & VAR_4)
        {
            if (VAR_11->Common.AmlOpcode != VAR_7)
            {
                VAR_12 = FUNC_4 (VAR_9, ((void*)0));
            }
            else
            {
                VAR_12 = FUNC_7 (
                    VAR_11->Named.Node, VAR_11->Named.Node->Type, VAR_9);
                if (FUNC_1 (VAR_12))
                {
                    FUNC_11 (VAR_12);
                }
            }
        }
        break;

    case 129:
    case 130:

        break;

    default:

        break;
    }



    FUNC_11 (VAR_12);


ErrorExit:
    VAR_12 = FUNC_5 (VAR_12, VAR_9);
    FUNC_11 (VAR_12);
}
