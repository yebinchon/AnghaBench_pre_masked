
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ UINT8 ;
typedef int UINT32 ;
struct TYPE_7__ {int ReferenceCount; scalar_t__ Type; TYPE_2__* NextObject; } ;
struct TYPE_8__ {TYPE_1__ Common; } ;
typedef TYPE_2__ ACPI_OPERAND_OBJECT ;
typedef int ACPI_OBJECT_TYPE ;


 int FUNC_0 (int ,int ) ;


 scalar_t__ VAR_0 ;

 TYPE_2__* FUNC_1 (char const*,int ,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int) ;
 int VAR_1 ;
 int FUNC_4 (TYPE_2__*) ;

ACPI_OPERAND_OBJECT *
FUNC_5 (
    const char *VAR_2,
    UINT32 VAR_3,
    UINT32 VAR_4,
    ACPI_OBJECT_TYPE VAR_5)
{
    ACPI_OPERAND_OBJECT *VAR_6;
    ACPI_OPERAND_OBJECT *VAR_7;


    FUNC_0 (VAR_1,
        FUNC_3 (VAR_5));




    VAR_6 = FUNC_1 (
        VAR_2, VAR_3, VAR_4);
    if (!VAR_6)
    {
        FUNC_4 (((void*)0));
    }

    switch (VAR_5)
    {
    case 128:
    case 130:
    case 129:



        VAR_7 = FUNC_1 (
            VAR_2, VAR_3, VAR_4);
        if (!VAR_7)
        {
            FUNC_2 (VAR_6);
            FUNC_4 (((void*)0));
        }

        VAR_7->Common.Type = VAR_0;
        VAR_7->Common.ReferenceCount = 1;



        VAR_6->Common.NextObject = VAR_7;
        break;

    default:


        break;
    }



    VAR_6->Common.Type = (UINT8) VAR_5;



    VAR_6->Common.ReferenceCount = 1;



    FUNC_4 (VAR_6);
}
