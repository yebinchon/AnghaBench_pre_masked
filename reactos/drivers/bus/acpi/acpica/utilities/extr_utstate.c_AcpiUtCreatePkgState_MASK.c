
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_7__ {int NumPackages; int Index; void* DestObject; int * SourceObject; } ;
struct TYPE_6__ {int DescriptorType; } ;
struct TYPE_8__ {TYPE_2__ Pkg; TYPE_1__ Common; } ;
typedef int ACPI_OPERAND_OBJECT ;
typedef TYPE_3__ ACPI_GENERIC_STATE ;


 int VAR_0 ;
 int FUNC_0 () ;
 TYPE_3__* FUNC_1 () ;

ACPI_GENERIC_STATE *
FUNC_2 (
    void *VAR_1,
    void *VAR_2,
    UINT32 VAR_3)
{
    ACPI_GENERIC_STATE *VAR_4;


    FUNC_0 ();




    VAR_4 = FUNC_1 ();
    if (!VAR_4)
    {
        return (((void*)0));
    }



    VAR_4->Common.DescriptorType = VAR_0;
    VAR_4->Pkg.SourceObject = (ACPI_OPERAND_OBJECT *) VAR_1;
    VAR_4->Pkg.DestObject = VAR_2;
    VAR_4->Pkg.Index= VAR_3;
    VAR_4->Pkg.NumPackages = 1;

    return (VAR_4);
}
