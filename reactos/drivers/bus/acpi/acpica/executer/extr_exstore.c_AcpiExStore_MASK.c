
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_16__ {int Class; int Value; int * Object; } ;
struct TYPE_15__ {int Type; int Flags; } ;
struct TYPE_17__ {TYPE_2__ Reference; TYPE_1__ Common; } ;
typedef int ACPI_WALK_STATE ;
typedef int ACPI_STATUS ;
typedef TYPE_3__ ACPI_OPERAND_OBJECT ;
typedef int ACPI_NAMESPACE_NODE ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int ,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,TYPE_3__*) ;
 scalar_t__ FUNC_5 (TYPE_3__*) ;
 int VAR_2 ;
 int VAR_3 ;







 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (int,int ,TYPE_3__*,int *) ;
 int FUNC_7 (TYPE_3__*,TYPE_3__*,int *) ;
 int FUNC_8 (TYPE_3__*,int *,int *,int ) ;
 int FUNC_9 (TYPE_3__*) ;
 int VAR_10 ;
 int FUNC_10 (int ) ;

ACPI_STATUS
FUNC_11 (
    ACPI_OPERAND_OBJECT *VAR_11,
    ACPI_OPERAND_OBJECT *VAR_12,
    ACPI_WALK_STATE *VAR_13)
{
    ACPI_STATUS VAR_14 = VAR_8;
    ACPI_OPERAND_OBJECT *VAR_15 = VAR_12;


    FUNC_4 (VAR_10, VAR_12);




    if (!VAR_11 || !VAR_12)
    {
        FUNC_3 ((VAR_7, "Null parameter"));
        FUNC_10 (VAR_5);
    }



    if (FUNC_5 (VAR_12) == VAR_1)
    {




        VAR_14 = FUNC_8 (VAR_11,
            (ACPI_NAMESPACE_NODE *) VAR_12, VAR_13,
            VAR_2);

        FUNC_10 (VAR_14);
    }



    switch (VAR_12->Common.Type)
    {
    case 128:

        break;

    case 129:



        if (VAR_12->Common.Flags & VAR_9)
        {
            FUNC_10 (VAR_8);
        }



    default:



        FUNC_3 ((VAR_7,
            "Target is not a Reference or Constant object - [%s] %p",
            FUNC_9 (VAR_12), VAR_12));

        FUNC_10 (VAR_6);
    }
    switch (VAR_15->Reference.Class)
    {
    case 130:



        VAR_14 = FUNC_8 (VAR_11,
            VAR_15->Reference.Object,
            VAR_13, VAR_2);
        break;

    case 132:



        VAR_14 = FUNC_7 (VAR_11, VAR_15, VAR_13);
        break;

    case 131:
    case 134:



        VAR_14 = FUNC_6 (VAR_15->Reference.Class,
            VAR_15->Reference.Value, VAR_11, VAR_13);
        break;

    case 133:




        FUNC_1 ((VAR_0,
            "**** Write to Debug Object: Object %p [%s] ****:\n\n",
            VAR_11, FUNC_9 (VAR_11)));

        FUNC_0 (VAR_11, 0, 0);
        break;

    default:

        FUNC_3 ((VAR_7, "Unknown Reference Class 0x%2.2X",
            VAR_15->Reference.Class));
        FUNC_2 (VAR_15, VAR_3);

        VAR_14 = VAR_4;
        break;
    }

    FUNC_10 (VAR_14);
}
