
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ UINT32 ;
struct TYPE_8__ {TYPE_2__** Elements; scalar_t__ Count; } ;
struct TYPE_9__ {TYPE_1__ Package; } ;
typedef int ACPI_SIZE ;
typedef TYPE_2__ ACPI_OPERAND_OBJECT ;


 TYPE_2__** FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,scalar_t__) ;
 int VAR_0 ;
 TYPE_2__* FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (TYPE_2__*) ;

ACPI_OPERAND_OBJECT *
FUNC_5 (
    UINT32 VAR_2)
{
    ACPI_OPERAND_OBJECT *VAR_3;
    ACPI_OPERAND_OBJECT **VAR_4;


    FUNC_2 (VAR_1, VAR_2);




    VAR_3 = FUNC_3 (VAR_0);
    if (!VAR_3)
    {
        FUNC_4 (((void*)0));
    }





    VAR_4 = FUNC_0 (
        ((ACPI_SIZE) VAR_2 + 1) * sizeof (void *));
    if (!VAR_4)
    {
        FUNC_1 (VAR_3);
        FUNC_4 (((void*)0));
    }

    VAR_3->Package.Count = VAR_2;
    VAR_3->Package.Elements = VAR_4;
    FUNC_4 (VAR_3);
}
