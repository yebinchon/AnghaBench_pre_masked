
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_13__ {int NodeFlags; int FullPathname; } ;
struct TYPE_11__ {int Value; } ;
struct TYPE_10__ {int Count; TYPE_3__** Elements; } ;
struct TYPE_12__ {TYPE_2__ Integer; TYPE_1__ Package; } ;
typedef scalar_t__ BOOLEAN ;
typedef int ACPI_STATUS ;
typedef TYPE_3__ ACPI_OPERAND_OBJECT ;
typedef TYPE_4__ ACPI_EVALUATE_INFO ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (TYPE_4__*,TYPE_3__*,int,int,int,int ,char*) ;
 int FUNC_4 (TYPE_3__*,int) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static ACPI_STATUS
FUNC_5 (
    ACPI_EVALUATE_INFO *VAR_6,
    ACPI_OPERAND_OBJECT **VAR_7)
{
    ACPI_OPERAND_OBJECT *VAR_8 = *VAR_7;
    ACPI_OPERAND_OBJECT **VAR_9;
    UINT32 VAR_10;
    ACPI_OPERAND_OBJECT *VAR_11;
    ACPI_STATUS VAR_12;
    BOOLEAN VAR_13;
    UINT32 VAR_14;


    FUNC_1 (VAR_4);





    VAR_10 = VAR_8->Package.Count - 1;
    VAR_14 = 0;
    while (VAR_14 < VAR_10)
    {
        VAR_9 = &VAR_8->Package.Elements[VAR_14 + 1];
        VAR_13 = VAR_3;

        if ((*VAR_9)->Package.Count == 0)
        {
            FUNC_2 ((VAR_1,
                VAR_6->FullPathname, VAR_6->NodeFlags,
                "SubPackage[%u] - removing entry due to zero count", VAR_14));
            VAR_13 = VAR_5;
            goto RemoveElement;
        }

        VAR_11 = (*VAR_9)->Package.Elements[1];
        if ((UINT32) VAR_11->Integer.Value == 0)
        {
            FUNC_2 ((VAR_1,
                VAR_6->FullPathname, VAR_6->NodeFlags,
                "SubPackage[%u] - removing entry due to invalid Type(0)", VAR_14));
            VAR_13 = VAR_5;
        }

RemoveElement:
        if (VAR_13)
        {
            FUNC_4 (VAR_8, VAR_14 + 1);
            VAR_10--;
        }
        else
        {
            VAR_14++;
        }
    }



    VAR_11 = VAR_8->Package.Elements[0];
    VAR_11->Integer.Value = VAR_10;





    VAR_12 = FUNC_3 (VAR_6, VAR_8, 1, 4, 1,
        VAR_0, "C-State Type");
    if (FUNC_0 (VAR_12))
    {
        return (VAR_12);
    }

    return (VAR_2);
}
