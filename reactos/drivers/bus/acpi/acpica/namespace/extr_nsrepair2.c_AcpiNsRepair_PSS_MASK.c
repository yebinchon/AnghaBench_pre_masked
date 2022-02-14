
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ UINT32 ;
struct TYPE_12__ {int NodeFlags; int FullPathname; } ;
struct TYPE_10__ {scalar_t__ Value; } ;
struct TYPE_9__ {scalar_t__ Count; TYPE_3__** Elements; } ;
struct TYPE_11__ {TYPE_2__ Integer; TYPE_1__ Package; } ;
typedef int ACPI_STATUS ;
typedef TYPE_3__ ACPI_OPERAND_OBJECT ;
typedef TYPE_4__ ACPI_EVALUATE_INFO ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_4__*,TYPE_3__*,int ,int,int ,int ,char*) ;

__attribute__((used)) static ACPI_STATUS
FUNC_3 (
    ACPI_EVALUATE_INFO *VAR_4,
    ACPI_OPERAND_OBJECT **VAR_5)
{
    ACPI_OPERAND_OBJECT *VAR_6 = *VAR_5;
    ACPI_OPERAND_OBJECT **VAR_7;
    UINT32 VAR_8;
    ACPI_OPERAND_OBJECT **VAR_9;
    ACPI_OPERAND_OBJECT *VAR_10;
    UINT32 VAR_11;
    ACPI_STATUS VAR_12;
    UINT32 VAR_13;
    VAR_12 = FUNC_2 (VAR_4, VAR_6, 0, 6, 0,
        VAR_0, "CpuFrequency");
    if (FUNC_0 (VAR_12))
    {
        return (VAR_12);
    }





    VAR_11 = VAR_1;
    VAR_7 = VAR_6->Package.Elements;
    VAR_8 = VAR_6->Package.Count;

    for (VAR_13 = 0; VAR_13 < VAR_8; VAR_13++)
    {
        VAR_9 = (*VAR_7)->Package.Elements;
        VAR_10 = VAR_9[1];

        if ((UINT32) VAR_10->Integer.Value > VAR_11)
        {
            FUNC_1 ((VAR_2,
                VAR_4->FullPathname, VAR_4->NodeFlags,
                "SubPackage[%u,%u] - suspicious power dissipation values",
                VAR_13-1, VAR_13));
        }

        VAR_11 = (UINT32) VAR_10->Integer.Value;
        VAR_7++;
    }

    return (VAR_3);
}
