
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_6__ ;
typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;


typedef int UINT8 ;
typedef scalar_t__ UINT32 ;
typedef int UINT16 ;
struct TYPE_31__ {int Type; } ;
struct TYPE_30__ {scalar_t__ Class; scalar_t__ RuntimeArgs; int Name; } ;
struct TYPE_27__ {int Type; } ;
struct TYPE_26__ {int const Class; } ;
struct TYPE_29__ {TYPE_2__ Common; TYPE_1__ Reference; } ;
struct TYPE_28__ {int NumOperands; int Operands; } ;
typedef TYPE_3__ ACPI_WALK_STATE ;
typedef int ACPI_STATUS ;
typedef TYPE_4__ ACPI_OPERAND_OBJECT ;
typedef TYPE_5__ ACPI_OPCODE_INFO ;
typedef int ACPI_OBJECT_TYPE ;
typedef TYPE_6__ ACPI_NAMESPACE_NODE ;


 int VAR_0 ;
 int FUNC_0 (int ) ;


 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int const FUNC_5 (TYPE_4__*) ;
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
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_6 (int,int,TYPE_4__*) ;
 int FUNC_7 (TYPE_4__*,TYPE_4__**) ;
 int FUNC_8 (TYPE_4__*,TYPE_4__**,int ) ;
 int FUNC_9 (TYPE_4__*,TYPE_4__**,int ) ;
 int FUNC_10 (TYPE_4__**,TYPE_3__*) ;
 int VAR_18 ;
 TYPE_4__* FUNC_11 (TYPE_6__*) ;
 TYPE_5__* FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (TYPE_4__*) ;
 int FUNC_15 (TYPE_4__*) ;
 int FUNC_16 (TYPE_4__*) ;
 int FUNC_17 (TYPE_4__*) ;
 int FUNC_18 (int) ;
 int VAR_19 ;
 scalar_t__ FUNC_19 (scalar_t__) ;
 int FUNC_20 (scalar_t__) ;
 int FUNC_21 (int ) ;

ACPI_STATUS
FUNC_22 (
    UINT16 VAR_20,
    ACPI_OPERAND_OBJECT **VAR_21,
    ACPI_WALK_STATE *VAR_22)
{
    ACPI_OPERAND_OBJECT *VAR_23;
    ACPI_STATUS VAR_24 = VAR_12;
    UINT8 VAR_25;
    UINT32 VAR_26;
    const ACPI_OPCODE_INFO *VAR_27;
    UINT32 VAR_28;
    ACPI_OBJECT_TYPE VAR_29;
    UINT16 VAR_30 = 0;


    FUNC_4 (VAR_19, VAR_20);


    VAR_27 = FUNC_12 (VAR_20);
    if (VAR_27->Class == VAR_14)
    {
        FUNC_21 (VAR_7);
    }

    VAR_26 = VAR_27->RuntimeArgs;
    if (VAR_26 == VAR_17)
    {
        FUNC_2 ((VAR_11, "Unknown AML opcode 0x%X",
            VAR_20));

        FUNC_21 (VAR_8);
    }

    FUNC_0 ((VAR_0,
        "Opcode %X [%s] RequiredOperandTypes=%8.8X\n",
        VAR_20, VAR_27->Name, VAR_26));
    while (FUNC_19 (VAR_26))
    {
        if (!VAR_21 || !*VAR_21)
        {
            FUNC_2 ((VAR_11, "Null stack entry at %p",
                VAR_21));

            FUNC_21 (VAR_8);
        }



        VAR_23 = *VAR_21;



        switch (FUNC_5 (VAR_23))
        {
        case 170:



            VAR_25 = ((ACPI_NAMESPACE_NODE *) VAR_23)->Type;






            if (VAR_25 == VAR_5)
            {
                VAR_23 = FUNC_11 (
                    (ACPI_NAMESPACE_NODE *) VAR_23);
                *VAR_21 = VAR_23;
                VAR_25 = ((ACPI_NAMESPACE_NODE *) VAR_23)->Type;
            }
            break;

        case 169:



            VAR_25 = VAR_23->Common.Type;



            if (!FUNC_18 (VAR_25))
            {
                FUNC_2 ((VAR_11,
                    "Bad operand object type [0x%X]", VAR_25));

                FUNC_21 (VAR_9);
            }

            if (VAR_25 == (UINT8) 155)
            {


                switch (VAR_23->Reference.Class)
                {
                case 167:

                    VAR_30 = VAR_15;



                case 168:
                case 165:
                case 166:
                case 163:
                case 162:
                case 164:

                    FUNC_0 ((VAR_0,
                        "Operand is a Reference, Class [%s] %2.2X\n",
                        FUNC_16 (VAR_23),
                        VAR_23->Reference.Class));
                    break;

                default:

                    FUNC_2 ((VAR_11,
                        "Unknown Reference Class 0x%2.2X in %p",
                        VAR_23->Reference.Class, VAR_23));

                    FUNC_21 (VAR_9);
                }
            }
            break;

        default:



            FUNC_2 ((VAR_11, "Invalid descriptor %p [%s]",
                VAR_23, FUNC_14 (VAR_23)));

            FUNC_21 (VAR_9);
        }



        VAR_28 = FUNC_19 (VAR_26);
        FUNC_20 (VAR_26);





        switch (VAR_28)
        {
        case 133:

            if ((FUNC_5 (VAR_23) ==
                169) &&
                (VAR_23->Common.Type == 151))
            {




                goto NextOperand;
            }







        case 134:
        case 138:
        case 136:
        case 142:
        case 128:
        case 140:
        case 131:
        case 130:





            if (FUNC_5 (VAR_23) == 170)
            {
                goto NextOperand;
            }

            VAR_24 = FUNC_6 (
                155, VAR_25, VAR_23);
            if (FUNC_3 (VAR_24))
            {
                FUNC_21 (VAR_24);
            }
            goto NextOperand;

        case 144:






            if ((VAR_20 == VAR_16) &&
                ((*VAR_21)->Common.Type == 155) &&
                ((*VAR_21)->Reference.Class == 166))
            {
                goto NextOperand;
            }
            break;

        default:



            break;
        }




        VAR_24 = FUNC_10 (VAR_21, VAR_22);
        if (FUNC_3 (VAR_24))
        {
            FUNC_21 (VAR_24);
        }



        VAR_23 = *VAR_21;




        switch (VAR_28)
        {




        case 137:



            VAR_29 = VAR_6;
            break;

        case 141:



            VAR_29 = VAR_4;
            break;

        case 135:



            VAR_29 = 153;
            break;

        case 150:



            VAR_29 = VAR_3;
            break;

        case 143:



            VAR_29 = 155;
            break;





        case 139:







            VAR_24 = FUNC_8 (VAR_23, VAR_21,
                VAR_1);
            if (FUNC_3 (VAR_24))
            {
                if (VAR_24 == VAR_13)
                {
                    FUNC_2 ((VAR_11,
                        "Needed [Integer/String/Buffer], found [%s] %p",
                        FUNC_15 (VAR_23), VAR_23));

                    FUNC_21 (VAR_9);
                }

                FUNC_21 (VAR_24);
            }

            if (VAR_23 != *VAR_21)
            {
                FUNC_17 (VAR_23);
            }
            goto NextOperand;

        case 149:





            VAR_24 = FUNC_7 (VAR_23, VAR_21);
            if (FUNC_3 (VAR_24))
            {
                if (VAR_24 == VAR_13)
                {
                    FUNC_2 ((VAR_11,
                        "Needed [Integer/String/Buffer], found [%s] %p",
                        FUNC_15 (VAR_23), VAR_23));

                    FUNC_21 (VAR_9);
                }

                FUNC_21 (VAR_24);
            }

            if (VAR_23 != *VAR_21)
            {
                FUNC_17 (VAR_23);
            }
            goto NextOperand;

        case 129:





            VAR_24 = FUNC_9 (
                VAR_23, VAR_21, VAR_2);
            if (FUNC_3 (VAR_24))
            {
                if (VAR_24 == VAR_13)
                {
                    FUNC_2 ((VAR_11,
                        "Needed [Integer/String/Buffer], found [%s] %p",
                        FUNC_15 (VAR_23), VAR_23));

                    FUNC_21 (VAR_9);
                }

                FUNC_21 (VAR_24);
            }

            if (VAR_23 != *VAR_21)
            {
                FUNC_17 (VAR_23);
            }
            goto NextOperand;

        case 146:



            switch (VAR_23->Common.Type)
            {
            case 158:
            case 151:
            case 161:


               break;

            default:
                FUNC_2 ((VAR_11,
                    "Needed [Integer/String/Buffer], found [%s] %p",
                    FUNC_15 (VAR_23), VAR_23));

                FUNC_21 (VAR_9);
            }
            goto NextOperand;

        case 148:



            switch (VAR_23->Common.Type)
            {
            case 151:
            case 161:


               break;

            case 158:



                VAR_24 = FUNC_7 (VAR_23, VAR_21);
                if (FUNC_3 (VAR_24))
                {
                    FUNC_21 (VAR_24);
                }

                if (VAR_23 != *VAR_21)
                {
                    FUNC_17 (VAR_23);
                }
                break;

            default:
                FUNC_2 ((VAR_11,
                    "Needed [Integer/String/Buffer], found [%s] %p",
                    FUNC_15 (VAR_23), VAR_23));

                FUNC_21 (VAR_9);
            }
            goto NextOperand;

        case 145:







            switch (VAR_23->Common.Type)
            {
            case 153:
            case 151:
            case 161:
            case 155:


                break;

            default:

                FUNC_2 ((VAR_11,
                    "Needed [Buffer/String/Package/Reference], found [%s] %p",
                    FUNC_15 (VAR_23), VAR_23));

                FUNC_21 (VAR_9);
            }
            goto NextOperand;

        case 147:



            switch (VAR_23->Common.Type)
            {
            case 153:
            case 151:
            case 161:


                break;

            default:

                FUNC_2 ((VAR_11,
                    "Needed [Buffer/String/Package], found [%s] %p",
                    FUNC_15 (VAR_23), VAR_23));

                FUNC_21 (VAR_9);
            }
            goto NextOperand;

        case 132:





            switch (VAR_23->Common.Type)
            {
            case 161:
            case 152:


                break;

            default:

                FUNC_2 ((VAR_11,
                    "Needed [Region/Buffer], found [%s] %p",
                    FUNC_15 (VAR_23), VAR_23));

                FUNC_21 (VAR_9);
            }
            goto NextOperand;

        case 144:



            switch (VAR_23->Common.Type)
            {
            case 158:
            case 153:
            case 151:
            case 161:
            case 160:
            case 155:
            case 154:
            case 157:
            case 156:
            case 159:


                break;

            default:

                if (VAR_18)
                {





                    break;
                }

                if (VAR_30 == VAR_15)
                {


                    break;
                }

                FUNC_2 ((VAR_11,
                    "Needed Integer/Buffer/String/Package/Ref/Ddb]"
                    ", found [%s] %p",
                    FUNC_15 (VAR_23), VAR_23));

                FUNC_21 (VAR_9);
            }
            goto NextOperand;

        default:



            FUNC_2 ((VAR_11,
                "Internal - Unknown ARGI (required operand) type 0x%X",
                VAR_28));

            FUNC_21 (VAR_10);
        }





        VAR_24 = FUNC_6 (
            VAR_29, (*VAR_21)->Common.Type, *VAR_21);
        if (FUNC_3 (VAR_24))
        {
            FUNC_21 (VAR_24);
        }

NextOperand:




        if (FUNC_19 (VAR_26))
        {
            VAR_21--;
        }
    }

    FUNC_1 (VAR_22->Operands,
        FUNC_13 (VAR_20), VAR_22->NumOperands);

    FUNC_21 (VAR_24);
}
