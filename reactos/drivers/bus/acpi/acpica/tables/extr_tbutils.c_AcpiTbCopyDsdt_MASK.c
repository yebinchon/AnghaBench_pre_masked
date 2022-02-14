
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef size_t UINT32 ;
struct TYPE_13__ {TYPE_2__* Tables; } ;
struct TYPE_12__ {int Length; int Pointer; } ;
struct TYPE_11__ {int Length; } ;
typedef TYPE_1__ ACPI_TABLE_HEADER ;
typedef TYPE_2__ ACPI_TABLE_DESC ;


 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 TYPE_8__ VAR_3 ;
 int FUNC_4 (TYPE_2__*,int ,int ,TYPE_1__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_1__*,int ,int ) ;

ACPI_TABLE_HEADER *
FUNC_7 (
    UINT32 VAR_4)
{
    ACPI_TABLE_HEADER *VAR_5;
    ACPI_TABLE_DESC *VAR_6;


    VAR_6 = &VAR_3.Tables[VAR_4];

    VAR_5 = FUNC_0 (VAR_6->Length);
    if (!VAR_5)
    {
        FUNC_1 ((VAR_1, "Could not copy DSDT of length 0x%X",
            VAR_6->Length));
        return (((void*)0));
    }

    FUNC_6 (VAR_5, VAR_6->Pointer, VAR_6->Length);
    FUNC_5 (VAR_6);

    FUNC_4 (
        &VAR_3.Tables[VAR_2],
        FUNC_3 (VAR_5),
        VAR_0, VAR_5);

    FUNC_2 ((
        "Forced DSDT copy: length 0x%05X copied locally, original unmapped",
        VAR_5->Length));

    return (VAR_5);
}
