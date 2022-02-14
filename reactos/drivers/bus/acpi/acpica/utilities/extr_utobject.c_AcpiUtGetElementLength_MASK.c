
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int UINT8 ;
struct TYPE_5__ {int * ThisTargetObj; } ;
struct TYPE_7__ {TYPE_1__ Pkg; } ;
struct TYPE_6__ {int NumPackages; int Length; } ;
typedef int ACPI_STATUS ;
typedef int ACPI_SIZE ;
typedef TYPE_2__ ACPI_PKG_INFO ;
typedef int ACPI_OPERAND_OBJECT ;
typedef TYPE_3__ ACPI_GENERIC_STATE ;




 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static ACPI_STATUS
FUNC_2 (
    UINT8 VAR_2,
    ACPI_OPERAND_OBJECT *VAR_3,
    ACPI_GENERIC_STATE *VAR_4,
    void *VAR_5)
{
    ACPI_STATUS VAR_6 = VAR_1;
    ACPI_PKG_INFO *VAR_7 = (ACPI_PKG_INFO *) VAR_5;
    ACPI_SIZE VAR_8;


    switch (VAR_2)
    {
    case 128:




        VAR_6 = FUNC_1 (VAR_3, &VAR_8);
        if (FUNC_0 (VAR_6))
        {
            return (VAR_6);
        }

        VAR_7->Length += VAR_8;
        break;

    case 129:



        VAR_7->NumPackages++;
        VAR_4->Pkg.ThisTargetObj = ((void*)0);
        break;

    default:



        return (VAR_0);
    }

    return (VAR_6);
}
