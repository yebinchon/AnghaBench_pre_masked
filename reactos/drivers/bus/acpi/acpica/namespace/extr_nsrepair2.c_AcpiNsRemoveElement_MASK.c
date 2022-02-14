
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ UINT32 ;
struct TYPE_5__ {scalar_t__ Count; TYPE_2__** Elements; } ;
struct TYPE_6__ {TYPE_1__ Package; } ;
typedef TYPE_2__ ACPI_OPERAND_OBJECT ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2 (
    ACPI_OPERAND_OBJECT *VAR_1,
    UINT32 VAR_2)
{
    ACPI_OPERAND_OBJECT **VAR_3;
    ACPI_OPERAND_OBJECT **VAR_4;
    UINT32 VAR_5;
    UINT32 VAR_6;
    UINT32 VAR_7;


    FUNC_0 (VAR_0);


    VAR_5 = VAR_1->Package.Count;
    VAR_6 = VAR_5 - 1;

    VAR_3 = VAR_1->Package.Elements;
    VAR_4 = VAR_3;



    for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++)
    {
        if (VAR_7 == VAR_2)
        {
            FUNC_1 (*VAR_3);
            FUNC_1 (*VAR_3);
        }
        else
        {
            *VAR_4 = *VAR_3;
            VAR_4++;
        }

        VAR_3++;
    }



    *VAR_4 = ((void*)0);
    VAR_1->Package.Count = VAR_6;
}
