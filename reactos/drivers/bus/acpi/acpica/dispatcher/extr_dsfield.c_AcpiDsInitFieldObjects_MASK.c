
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int UINT8 ;
typedef int UINT32 ;
struct TYPE_12__ {scalar_t__ AmlOpcode; TYPE_4__* Next; int * Node; } ;
struct TYPE_11__ {int Name; } ;
struct TYPE_14__ {TYPE_2__ Common; TYPE_1__ Named; } ;
struct TYPE_13__ {int ParseFlags; int Opcode; int ScopeInfo; scalar_t__ MethodNode; } ;
typedef TYPE_3__ ACPI_WALK_STATE ;
typedef scalar_t__ ACPI_STATUS ;
typedef TYPE_4__ ACPI_PARSE_OBJECT ;
typedef int ACPI_NAMESPACE_NODE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,TYPE_4__*) ;
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
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;



 scalar_t__ VAR_17 ;
 scalar_t__ FUNC_4 (int ,char*,int ,int ,int,TYPE_3__*,int **) ;
 TYPE_4__* FUNC_5 (TYPE_4__*,int) ;
 int VAR_18 ;
 int FUNC_6 (scalar_t__) ;

ACPI_STATUS
FUNC_7 (
    ACPI_PARSE_OBJECT *VAR_19,
    ACPI_WALK_STATE *VAR_20)
{
    ACPI_STATUS VAR_21;
    ACPI_PARSE_OBJECT *VAR_22 = ((void*)0);
    ACPI_NAMESPACE_NODE *VAR_23;
    UINT8 VAR_24 = 0;
    UINT32 VAR_25;


    FUNC_3 (VAR_18, VAR_19);




    if (!(VAR_20->ParseFlags & VAR_7))
    {
        if (VAR_20->ParseFlags & VAR_6)
        {


            FUNC_6 (VAR_16);
        }

        FUNC_0 ((VAR_15,
            "Parse deferred mode is not set"));
        FUNC_6 (VAR_13);
    }





    switch (VAR_20->Opcode)
    {
    case 129:

        VAR_22 = FUNC_5 (VAR_19, 2);
        VAR_24 = VAR_11;
        break;

    case 130:

        VAR_22 = FUNC_5 (VAR_19, 4);
        VAR_24 = VAR_9;
        break;

    case 128:

        VAR_22 = FUNC_5 (VAR_19, 3);
        VAR_24 = VAR_10;
        break;

    default:

        FUNC_6 (VAR_14);
    }



    VAR_25 = VAR_3 | VAR_1 |
        VAR_2;





    if (VAR_20->MethodNode &&
        !(VAR_20->ParseFlags & VAR_8))
    {
        VAR_25 |= VAR_5;
    }
    while (VAR_22)
    {




        if (VAR_22->Common.AmlOpcode == VAR_17)
        {
            VAR_21 = FUNC_4 (VAR_20->ScopeInfo,
                (char *) &VAR_22->Named.Name, VAR_24, VAR_0,
                VAR_25, VAR_20, &VAR_23);
            if (FUNC_2 (VAR_21))
            {
                FUNC_1 (VAR_20->ScopeInfo,
                    (char *) &VAR_22->Named.Name, VAR_21);
                if (VAR_21 != VAR_12)
                {
                    FUNC_6 (VAR_21);
                }


            }

            VAR_22->Common.Node = VAR_23;
        }



        VAR_22 = VAR_22->Common.Next;
    }

    FUNC_6 (VAR_16);
}
