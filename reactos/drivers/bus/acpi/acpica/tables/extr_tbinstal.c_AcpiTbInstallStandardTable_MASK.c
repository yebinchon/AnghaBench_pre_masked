
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_7__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int UINT8 ;
typedef int UINT32 ;
struct TYPE_9__ {int Ascii; } ;
struct TYPE_8__ {int Pointer; TYPE_7__ Signature; } ;
typedef int BOOLEAN ;
typedef TYPE_1__ ACPI_TABLE_DESC ;
typedef scalar_t__ ACPI_STATUS ;
typedef int ACPI_PHYSICAL_ADDRESS ;


 scalar_t__ FUNC_0 (TYPE_7__*,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_6 (TYPE_1__*,int ,int ) ;
 int FUNC_7 (TYPE_1__*,int ,int *) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 scalar_t__ FUNC_11 (TYPE_1__*,int *,int *) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int VAR_7 ;
 int FUNC_14 (scalar_t__) ;

ACPI_STATUS
FUNC_15 (
    ACPI_PHYSICAL_ADDRESS VAR_8,
    UINT8 VAR_9,
    BOOLEAN VAR_10,
    BOOLEAN VAR_11,
    UINT32 *VAR_12)
{
    UINT32 VAR_13;
    ACPI_STATUS VAR_14 = VAR_5;
    ACPI_TABLE_DESC VAR_15;


    FUNC_4 (VAR_7);




    VAR_14 = FUNC_6 (&VAR_15, VAR_8, VAR_9);
    if (FUNC_2 (VAR_14))
    {
        FUNC_1 ((VAR_4,
            "Could not acquire table length at %8.8X%8.8X",
            FUNC_3 (VAR_8)));
        FUNC_14 (VAR_14);
    }





    if (!VAR_10 &&
        VAR_6 &&
        FUNC_0 (&VAR_15.Signature, VAR_1))
    {
        FUNC_5 ((
            "Ignoring installation of %4.4s at %8.8X%8.8X",
            VAR_15.Signature.Ascii, FUNC_3 (VAR_8)));
        goto ReleaseAndExit;
    }



    (void) FUNC_12 (VAR_0);



    VAR_14 = FUNC_11 (&VAR_15, ((void*)0), &VAR_13);
    if (FUNC_2 (VAR_14))
    {
        if (VAR_14 == VAR_3)
        {
            FUNC_10 (&VAR_15);
            (void) FUNC_13 (VAR_0);
            *VAR_12 = VAR_13;
            FUNC_14 (VAR_5);
        }
        goto UnlockAndExit;
    }



    FUNC_7 (&VAR_15, VAR_11, VAR_12);



    (void) FUNC_13 (VAR_0);
    FUNC_8 (VAR_2, VAR_15.Pointer);
    (void) FUNC_12 (VAR_0);

UnlockAndExit:



    (void) FUNC_13 (VAR_0);

ReleaseAndExit:



    FUNC_9 (&VAR_15);
    FUNC_14 (VAR_14);
}
