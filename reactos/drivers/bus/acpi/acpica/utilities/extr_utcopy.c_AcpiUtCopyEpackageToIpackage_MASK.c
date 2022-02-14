
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef size_t UINT32 ;
struct TYPE_10__ {size_t Count; int * Elements; } ;
struct TYPE_13__ {TYPE_1__ Package; } ;
struct TYPE_11__ {size_t Count; int Flags; TYPE_3__** Elements; } ;
struct TYPE_12__ {TYPE_2__ Package; } ;
typedef int ACPI_STATUS ;
typedef TYPE_3__ ACPI_OPERAND_OBJECT ;
typedef TYPE_4__ ACPI_OBJECT ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,TYPE_3__**) ;
 TYPE_3__* FUNC_3 (size_t) ;
 int FUNC_4 (TYPE_3__*) ;
 int VAR_3 ;
 int FUNC_5 (int ) ;

__attribute__((used)) static ACPI_STATUS
FUNC_6 (
    ACPI_OBJECT *VAR_4,
    ACPI_OPERAND_OBJECT **VAR_5)
{
    ACPI_STATUS VAR_6 = VAR_1;
    ACPI_OPERAND_OBJECT *VAR_7;
    ACPI_OPERAND_OBJECT **VAR_8;
    UINT32 VAR_9;


    FUNC_1 (VAR_3);




    VAR_7 = FUNC_3 (
        VAR_4->Package.Count);
    if (!VAR_7)
    {
        FUNC_5 (VAR_0);
    }

    VAR_8 = VAR_7->Package.Elements;





    for (VAR_9 = 0; VAR_9 < VAR_4->Package.Count; VAR_9++)
    {
        VAR_6 = FUNC_2 (
            &VAR_4->Package.Elements[VAR_9],
            &VAR_8[VAR_9]);
        if (FUNC_0 (VAR_6))
        {


            VAR_7->Package.Count = VAR_9;
            VAR_8[VAR_9] = ((void*)0);
            FUNC_4 (VAR_7);
            FUNC_5 (VAR_6);
        }
    }



    VAR_7->Package.Flags |= VAR_2;

    *VAR_5 = VAR_7;
    FUNC_5 (VAR_6);
}
