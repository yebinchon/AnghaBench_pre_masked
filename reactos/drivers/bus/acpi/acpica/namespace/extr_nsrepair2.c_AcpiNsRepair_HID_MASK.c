
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int FullPathname; int ReturnFlags; int NodeFlags; } ;
struct TYPE_10__ {scalar_t__ Length; char* Pointer; } ;
struct TYPE_9__ {scalar_t__ Type; } ;
struct TYPE_11__ {TYPE_2__ String; TYPE_1__ Common; } ;
typedef int ACPI_STATUS ;
typedef TYPE_3__ ACPI_OPERAND_OBJECT ;
typedef TYPE_4__ ACPI_EVALUATE_INFO ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_3__* FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_3__*) ;
 int VAR_6 ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static ACPI_STATUS
FUNC_6 (
    ACPI_EVALUATE_INFO *VAR_7,
    ACPI_OPERAND_OBJECT **VAR_8)
{
    ACPI_OPERAND_OBJECT *VAR_9 = *VAR_8;
    ACPI_OPERAND_OBJECT *VAR_10;
    char *VAR_11;
    char *VAR_12;


    FUNC_1 (VAR_6);




    if (VAR_9->Common.Type != VAR_2)
    {
        return (VAR_5);
    }

    if (VAR_9->String.Length == 0)
    {
        FUNC_2 ((VAR_3,
            VAR_7->FullPathname, VAR_7->NodeFlags,
            "Invalid zero-length _HID or _CID string"));



        VAR_7->ReturnFlags |= VAR_1;
        return (VAR_5);
    }



    VAR_10 = FUNC_3 (VAR_9->String.Length);
    if (!VAR_10)
    {
        return (VAR_4);
    }







    VAR_11 = VAR_9->String.Pointer;
    if (*VAR_11 == '*')
    {
        VAR_11++;
        VAR_10->String.Length--;

        FUNC_0 ((VAR_0,
            "%s: Removed invalid leading asterisk\n", VAR_7->FullPathname));
    }
    for (VAR_12 = VAR_10->String.Pointer; *VAR_11; VAR_12++, VAR_11++)
    {
        *VAR_12 = (char) FUNC_5 ((int) *VAR_11);
    }

    FUNC_4 (VAR_9);
    *VAR_8 = VAR_10;
    return (VAR_5);
}
