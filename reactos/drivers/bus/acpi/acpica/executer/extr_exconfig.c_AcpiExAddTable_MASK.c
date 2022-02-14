
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_7__ {int Value; int Class; } ;
struct TYPE_6__ {int Flags; } ;
struct TYPE_8__ {TYPE_2__ Reference; TYPE_1__ Common; } ;
typedef int ACPI_STATUS ;
typedef TYPE_3__ ACPI_OPERAND_OBJECT ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_3__* FUNC_1 (int ) ;
 int VAR_5 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static ACPI_STATUS
FUNC_3 (
    UINT32 VAR_6,
    ACPI_OPERAND_OBJECT **VAR_7)
{
    ACPI_OPERAND_OBJECT *VAR_8;


    FUNC_0 (VAR_5);




    VAR_8 = FUNC_1 (VAR_1);
    if (!VAR_8)
    {
        FUNC_2 (VAR_2);
    }



    VAR_8->Common.Flags |= VAR_4;
    VAR_8->Reference.Class = VAR_0;
    VAR_8->Reference.Value = VAR_6;
    *VAR_7 = VAR_8;
    FUNC_2 (VAR_3);
}
