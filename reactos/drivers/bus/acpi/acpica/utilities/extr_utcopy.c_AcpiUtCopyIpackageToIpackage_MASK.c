
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int Elements; scalar_t__ Count; } ;
struct TYPE_9__ {int Flags; int Type; } ;
struct TYPE_11__ {TYPE_2__ Package; TYPE_1__ Common; } ;
typedef int ACPI_WALK_STATE ;
typedef int ACPI_STATUS ;
typedef int ACPI_SIZE ;
typedef TYPE_3__ ACPI_OPERAND_OBJECT ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*,TYPE_3__*,int ,int *) ;
 int VAR_4 ;
 int FUNC_6 (int ) ;

__attribute__((used)) static ACPI_STATUS
FUNC_7 (
    ACPI_OPERAND_OBJECT *VAR_5,
    ACPI_OPERAND_OBJECT *VAR_6,
    ACPI_WALK_STATE *VAR_7)
{
    ACPI_STATUS VAR_8 = VAR_2;


    FUNC_3 (VAR_4);


    VAR_6->Common.Type = VAR_5->Common.Type;
    VAR_6->Common.Flags = VAR_5->Common.Flags;
    VAR_6->Package.Count = VAR_5->Package.Count;




    VAR_6->Package.Elements = FUNC_0 (
        ((ACPI_SIZE) VAR_5->Package.Count + 1) *
        sizeof (void *));
    if (!VAR_6->Package.Elements)
    {
        FUNC_1 ((VAR_0, "Package allocation failure"));
        FUNC_6 (VAR_1);
    }





    VAR_8 = FUNC_5 (VAR_5, VAR_6,
        VAR_3, VAR_7);
    if (FUNC_2 (VAR_8))
    {


        FUNC_4 (VAR_6);
    }

    FUNC_6 (VAR_8);
}
