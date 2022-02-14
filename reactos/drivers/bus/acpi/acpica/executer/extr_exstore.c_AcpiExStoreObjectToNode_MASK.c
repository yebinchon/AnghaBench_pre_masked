
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_5__ ;
typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_1__ ;


typedef int UINT8 ;
struct TYPE_27__ {int Ascii; } ;
struct TYPE_31__ {int Type; TYPE_1__ Name; } ;
struct TYPE_28__ {int const Type; } ;
struct TYPE_30__ {TYPE_2__ Common; } ;
struct TYPE_29__ {scalar_t__ Opcode; int ResultObj; } ;
typedef TYPE_3__ ACPI_WALK_STATE ;
typedef int ACPI_STATUS ;
typedef TYPE_4__ ACPI_OPERAND_OBJECT ;
typedef int ACPI_OBJECT_TYPE ;
typedef TYPE_5__ ACPI_NAMESPACE_NODE ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,TYPE_4__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (TYPE_4__**,int,TYPE_3__*) ;
 int FUNC_5 (TYPE_4__*,TYPE_5__*,TYPE_3__*) ;
 int FUNC_6 (TYPE_4__*,TYPE_4__*,TYPE_4__**,TYPE_3__*) ;
 int FUNC_7 (TYPE_4__*,TYPE_4__*,int *) ;
 int FUNC_8 (TYPE_5__*,TYPE_4__*,int const) ;
 TYPE_4__* FUNC_9 (TYPE_5__*) ;
 int FUNC_10 (TYPE_5__*) ;
 int FUNC_11 (TYPE_4__*) ;
 int FUNC_12 (int) ;
 int VAR_6 ;
 int FUNC_13 (int ) ;

ACPI_STATUS
FUNC_14 (
    ACPI_OPERAND_OBJECT *VAR_7,
    ACPI_NAMESPACE_NODE *VAR_8,
    ACPI_WALK_STATE *VAR_9,
    UINT8 VAR_10)
{
    ACPI_STATUS VAR_11 = VAR_3;
    ACPI_OPERAND_OBJECT *VAR_12;
    ACPI_OPERAND_OBJECT *VAR_13;
    ACPI_OBJECT_TYPE VAR_14;


    FUNC_3 (VAR_6, VAR_7);




    VAR_14 = FUNC_10 (VAR_8);
    VAR_12 = FUNC_9 (VAR_8);

    FUNC_0 ((VAR_0, "Storing %p [%s] to node %p [%s]\n",
        VAR_7, FUNC_11 (VAR_7),
        VAR_8, FUNC_12 (VAR_14)));



    if (VAR_9->Opcode != VAR_4)
    {
        switch (VAR_14)
        {
        case 133:





            if (VAR_9->Opcode == VAR_5)
            {
                if (VAR_7->Common.Type != 133)
                {
                    FUNC_1 ((VAR_2,
                        "Cannot assign type [%s] to [Package] "
                        "(source must be type Pkg)",
                        FUNC_11 (VAR_7)));

                    FUNC_13 (VAR_1);
                }
                break;
            }



        case 140:
        case 139:
        case 134:
        case 130:
        case 132:
        case 131:
        case 128:

            FUNC_1 ((VAR_2,
                "Target must be [Buffer/Integer/String/Reference]"
                ", found [%s] (%4.4s)",
                FUNC_12 (VAR_8->Type), VAR_8->Name.Ascii));

            FUNC_13 (VAR_1);

        default:
            break;
        }
    }





    VAR_11 = FUNC_4 (&VAR_7, VAR_14, VAR_9);
    if (FUNC_2 (VAR_11))
    {
        FUNC_13 (VAR_11);
    }



    switch (VAR_14)
    {




    case 138:
    case 129:
    case 142:

        if ((VAR_9->Opcode == VAR_4) ||
            !VAR_10)
        {





            VAR_11 = FUNC_5 (VAR_7, VAR_8, VAR_9);
            break;
        }



        VAR_11 = FUNC_6 (VAR_7, VAR_12,
            &VAR_13, VAR_9);
        if (FUNC_2 (VAR_11))
        {
            FUNC_13 (VAR_11);
        }

        if (VAR_13 != VAR_12)
        {
            VAR_11 = FUNC_8 (
                VAR_8, VAR_13, VAR_13->Common.Type);

            FUNC_0 ((VAR_0,
                "Store type [%s] into [%s] via Convert/Attach\n",
                FUNC_11 (VAR_7),
                FUNC_11 (VAR_13)));
        }
        break;

    case 141:
    case 135:
    case 137:
    case 136:






        VAR_11 = FUNC_7 (VAR_7, VAR_12,
            &VAR_9->ResultObj);
        break;

    default:
        VAR_11 = FUNC_5 (VAR_7, VAR_8, VAR_9);
        break;
    }

    FUNC_13 (VAR_11);
}
