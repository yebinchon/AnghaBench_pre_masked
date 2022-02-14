
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT8 ;
typedef size_t UINT32 ;
struct TYPE_3__ {int * Arguments; int * LocalVariables; } ;
typedef TYPE_1__ ACPI_WALK_STATE ;
typedef int ACPI_STATUS ;
typedef int ACPI_NAMESPACE_NODE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 size_t VAR_0 ;
 size_t VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ) ;

ACPI_STATUS
FUNC_3 (
    UINT8 VAR_7,
    UINT32 VAR_8,
    ACPI_WALK_STATE *VAR_9,
    ACPI_NAMESPACE_NODE **VAR_10)
{
    FUNC_1 (VAR_6);





    switch (VAR_7)
    {
    case 128:

        if (VAR_8 > VAR_1)
        {
            FUNC_0 ((VAR_3,
                "Local index %u is invalid (max %u)",
                VAR_8, VAR_1));
            FUNC_2 (VAR_2);
        }



        *VAR_10 = &VAR_9->LocalVariables[VAR_8];
        break;

    case 129:

        if (VAR_8 > VAR_0)
        {
            FUNC_0 ((VAR_3,
                "Arg index %u is invalid (max %u)",
                VAR_8, VAR_0));
            FUNC_2 (VAR_2);
        }



        *VAR_10 = &VAR_9->Arguments[VAR_8];
        break;

    default:

        FUNC_0 ((VAR_3, "Type %u is invalid", VAR_7));
        FUNC_2 (VAR_5);
    }

    FUNC_2 (VAR_4);
}
