
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef char UINT8 ;
typedef int UINT64 ;
typedef size_t UINT32 ;
typedef int UINT16 ;
struct TYPE_13__ {char* Pointer; size_t Length; } ;
struct TYPE_12__ {size_t Length; } ;
struct TYPE_11__ {int Value; } ;
struct TYPE_10__ {int Type; } ;
struct TYPE_14__ {TYPE_4__ Buffer; TYPE_3__ String; TYPE_2__ Integer; TYPE_1__ Common; } ;
typedef int ACPI_STATUS ;
typedef int ACPI_SIZE ;
typedef TYPE_5__ ACPI_OPERAND_OBJECT ;




 int FUNC_0 (int ,TYPE_5__*) ;

 size_t VAR_0 ;
 size_t FUNC_1 (int) ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t FUNC_2 (int ,int,char*,int) ;
 int VAR_5 ;
 TYPE_5__* FUNC_3 (int ) ;
 int VAR_6 ;
 int FUNC_4 (int ) ;

ACPI_STATUS
FUNC_5 (
    ACPI_OPERAND_OBJECT *VAR_7,
    ACPI_OPERAND_OBJECT **VAR_8,
    UINT32 VAR_9)
{
    ACPI_OPERAND_OBJECT *VAR_10;
    UINT8 *VAR_11;
    UINT32 VAR_12;
    UINT32 VAR_13 = 0;
    UINT16 VAR_14 = 16;
    UINT8 VAR_15 = ',';


    FUNC_0 (VAR_6, VAR_7);


    switch (VAR_7->Common.Type)
    {
    case 128:



        *VAR_8 = VAR_7;
        FUNC_4 (VAR_3);

    case 129:

        switch (VAR_9)
        {
        case 133:





            VAR_13 = VAR_0;
            VAR_14 = 10;
            break;

        default:



            VAR_13 = FUNC_1 (VAR_5);
            break;
        }





        VAR_10 = FUNC_3 ((ACPI_SIZE) VAR_13);
        if (!VAR_10)
        {
            FUNC_4 (VAR_2);
        }

        VAR_11 = VAR_10->Buffer.Pointer;



        VAR_13 = FUNC_2 (
            VAR_7->Integer.Value, VAR_14, VAR_11, VAR_5);



        VAR_10->String.Length = VAR_13;
        VAR_11 [VAR_13] = 0;
        break;

    case 130:



        switch (VAR_9)
        {
        case 133:






            VAR_14 = 10;





            for (VAR_12 = 0; VAR_12 < VAR_7->Buffer.Length; VAR_12++)
            {
                if (VAR_7->Buffer.Pointer[VAR_12] >= 100)
                {
                    VAR_13 += 4;
                }
                else if (VAR_7->Buffer.Pointer[VAR_12] >= 10)
                {
                    VAR_13 += 3;
                }
                else
                {
                    VAR_13 += 2;
                }
            }
            break;

        case 131:
            VAR_15 = ' ';
            VAR_13 = (VAR_7->Buffer.Length * 5);
            break;

        case 132:
            VAR_15 = ',';
            VAR_13 = (VAR_7->Buffer.Length * 5);
            break;

        default:
            FUNC_4 (VAR_1);
        }






        if (VAR_13)
        {
            VAR_13--;
        }

        VAR_10 = FUNC_3 ((ACPI_SIZE) VAR_13);
        if (!VAR_10)
        {
            FUNC_4 (VAR_2);
        }

        VAR_11 = VAR_10->Buffer.Pointer;





        for (VAR_12 = 0; VAR_12 < VAR_7->Buffer.Length; VAR_12++)
        {
            if (VAR_14 == 16)
            {


                *VAR_11++ = '0';
                *VAR_11++ = 'x';
            }

            VAR_11 += FUNC_2 (
                (UINT64) VAR_7->Buffer.Pointer[VAR_12], VAR_14, VAR_11, 1);



            *VAR_11++ = VAR_15;
        }





        if (VAR_7->Buffer.Length)
        {
            VAR_11--;
        }
        *VAR_11 = 0;
        break;

    default:

        FUNC_4 (VAR_4);
    }

    *VAR_8 = VAR_10;
    FUNC_4 (VAR_3);
}
