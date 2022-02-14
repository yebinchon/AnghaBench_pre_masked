
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int UINT8 ;
typedef scalar_t__ UINT32 ;
struct TYPE_8__ {int FullPathname; } ;
struct TYPE_6__ {scalar_t__ Count; TYPE_2__** Elements; } ;
struct TYPE_7__ {TYPE_1__ Package; } ;
typedef TYPE_2__ ACPI_OPERAND_OBJECT ;
typedef TYPE_3__ ACPI_EVALUATE_INFO ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;

void
FUNC_2 (
    ACPI_EVALUATE_INFO *VAR_2,
    UINT8 VAR_3,
    ACPI_OPERAND_OBJECT *VAR_4)
{
    ACPI_OPERAND_OBJECT **VAR_5;
    ACPI_OPERAND_OBJECT **VAR_6;
    UINT32 VAR_7;
    UINT32 VAR_8;
    UINT32 VAR_9;


    FUNC_1 (VAR_1);







    switch (VAR_3)
    {
    case 136:
    case 135:
    case 134:
    case 130:
    case 133:
    case 131:
    case 129:
    case 132:
        break;

    default:
    case 128:
    case 138:
    case 137:
        return;
    }

    VAR_7 = VAR_4->Package.Count;
    VAR_8 = VAR_7;

    VAR_5 = VAR_4->Package.Elements;
    VAR_6 = VAR_5;



    for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++)
    {
        if (!*VAR_5)
        {
            VAR_8--;
        }
        else
        {
            *VAR_6 = *VAR_5;
            VAR_6++;
        }

        VAR_5++;
    }



    if (VAR_8 < VAR_7)
    {
        FUNC_0 ((VAR_0,
            "%s: Found and removed %u NULL elements\n",
            VAR_2->FullPathname, (VAR_7 - VAR_8)));



        *VAR_6 = ((void*)0);
        VAR_4->Package.Count = VAR_8;
    }
}
