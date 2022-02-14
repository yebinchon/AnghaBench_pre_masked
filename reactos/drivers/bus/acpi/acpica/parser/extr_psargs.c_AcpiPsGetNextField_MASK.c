
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int UINT8 ;
typedef int UINT32 ;
typedef int UINT16 ;
struct TYPE_20__ {int Integer; int Name; void* Size; } ;
struct TYPE_21__ {TYPE_3__ Value; int * InlineComment; int * NameComment; } ;
struct TYPE_18__ {int Size; } ;
struct TYPE_19__ {int* Data; TYPE_1__ Value; } ;
struct TYPE_23__ {TYPE_4__ Common; TYPE_2__ Named; } ;
struct TYPE_22__ {int* Aml; } ;
typedef TYPE_5__ ACPI_PARSE_STATE ;
typedef TYPE_6__ ACPI_PARSE_OBJECT ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (int*) ;
 int FUNC_4 (int*,int*) ;
 int VAR_0 ;
 int VAR_1 ;







 int VAR_2 ;



 int VAR_3 ;


 int FUNC_5 (TYPE_5__*) ;
 int * VAR_4 ;
 TYPE_6__* FUNC_6 (int,int*) ;
 int FUNC_7 (TYPE_6__*,TYPE_6__*) ;
 int FUNC_8 (TYPE_6__*) ;
 int FUNC_9 (TYPE_5__*) ;
 void* FUNC_10 (TYPE_5__*) ;
 int FUNC_11 (TYPE_6__*,int) ;
 int VAR_5 ;
 int FUNC_12 (TYPE_6__*) ;

__attribute__((used)) static ACPI_PARSE_OBJECT *
FUNC_13 (
    ACPI_PARSE_STATE *VAR_6)
{
    UINT8 *VAR_7;
    ACPI_PARSE_OBJECT *VAR_8;
    ACPI_PARSE_OBJECT *VAR_9 = ((void*)0);
    UINT16 VAR_10;
    UINT32 VAR_11;
    UINT8 VAR_12;
    UINT8 VAR_13;
    UINT8 VAR_14;
    UINT32 VAR_15;
    UINT8 *VAR_16;
    UINT32 VAR_17;


    FUNC_0 (VAR_5);


    FUNC_5 (VAR_6);
    VAR_7 = VAR_6->Aml;



    switch (FUNC_3 (VAR_6->Aml))
    {
    case 134:

        VAR_10 = 129;
        VAR_6->Aml++;
        break;

    case 137:

        VAR_10 = 133;
        VAR_6->Aml++;
        break;

    case 136:

        VAR_10 = 132;
        VAR_6->Aml++;
        break;

    case 135:

        VAR_10 = 131;
        VAR_6->Aml++;
        break;

    default:

        VAR_10 = 130;
        break;
    }



    VAR_8 = FUNC_6 (VAR_10, VAR_7);
    if (!VAR_8)
    {
        FUNC_12 (((void*)0));
    }



    FUNC_5 (VAR_6);
    switch (VAR_10)
    {
    case 130:



        FUNC_4 (&VAR_11, VAR_6->Aml);
        FUNC_11 (VAR_8, VAR_11);
        VAR_6->Aml += VAR_0;


        FUNC_5 (VAR_6);
        VAR_8->Common.Value.Size = FUNC_10 (VAR_6);
        break;


    case 129:



        VAR_8->Common.Value.Size = FUNC_10 (VAR_6);
        break;


    case 133:
    case 131:
        VAR_12 = FUNC_3 (VAR_6->Aml);
        VAR_6->Aml++;
        VAR_13 = FUNC_3 (VAR_6->Aml);
        VAR_6->Aml++;

        VAR_8->Common.Value.Integer = (UINT8) VAR_12;
        VAR_8->Common.Value.Integer |= (UINT16) (VAR_13 << 8);



        if (VAR_10 == 131)
        {
            VAR_14 = FUNC_3 (VAR_6->Aml);
            VAR_6->Aml++;

            VAR_8->Common.Value.Integer |= (UINT32) (VAR_14 << 16);
        }
        break;


    case 132:





        VAR_7 = VAR_6->Aml;
        if (FUNC_3 (VAR_6->Aml) == VAR_1)
        {
            VAR_6->Aml++;

            FUNC_5 (VAR_6);
            VAR_16 = VAR_6->Aml;
            VAR_15 = FUNC_10 (VAR_6);
            VAR_16 += VAR_15;

            FUNC_5 (VAR_6);
            if (VAR_6->Aml < VAR_16)
            {


                VAR_9 = FUNC_6 (VAR_2, VAR_7);
                if (!VAR_9)
                {
                    FUNC_8 (VAR_8);
                    FUNC_12 (((void*)0));
                }



                VAR_10 = FUNC_3 (VAR_6->Aml);
                VAR_6->Aml++;

                FUNC_5 (VAR_6);
                switch (VAR_10)
                {
                case 139:

                    VAR_17 = FUNC_3 (VAR_6->Aml);
                    VAR_6->Aml += 1;
                    break;

                case 128:

                    VAR_17 = FUNC_1 (VAR_6->Aml);
                    VAR_6->Aml += 2;
                    break;

                case 138:

                    VAR_17 = FUNC_2 (VAR_6->Aml);
                    VAR_6->Aml += 4;
                    break;

                default:

                    VAR_17 = 0;
                    break;
                }



                FUNC_5 (VAR_6);
                VAR_9->Named.Value.Size = VAR_17;
                VAR_9->Named.Data = VAR_6->Aml;
            }



            VAR_6->Aml = VAR_16;
        }
        else
        {
            VAR_9 = FUNC_6 (VAR_3, VAR_7);
            if (!VAR_9)
            {
                FUNC_8 (VAR_8);
                FUNC_12 (((void*)0));
            }



            VAR_9->Common.Value.Name = FUNC_9 (VAR_6);
        }



        FUNC_7 (VAR_8, VAR_9);
        break;


    default:


        break;
    }

    FUNC_12 (VAR_8);
}
