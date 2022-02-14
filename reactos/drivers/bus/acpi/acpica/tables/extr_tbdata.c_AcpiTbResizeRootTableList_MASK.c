
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t UINT32 ;
struct TYPE_8__ {int Flags; size_t MaxTableCount; size_t CurrentTableCount; TYPE_1__* Tables; } ;
struct TYPE_7__ {scalar_t__ Address; } ;
typedef TYPE_1__ ACPI_TABLE_DESC ;
typedef int ACPI_STATUS ;
typedef int ACPI_SIZE ;


 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_4__ VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_5 (int ) ;

ACPI_STATUS
FUNC_6 (
    void)
{
    ACPI_TABLE_DESC *VAR_9;
    UINT32 VAR_10;
    UINT32 VAR_11, VAR_12;
    UINT32 VAR_13;


    FUNC_3 (VAR_8);




    if (!(VAR_7.Flags & VAR_0))
    {
        FUNC_1 ((VAR_3, "Resize of Root Table Array is not allowed"));
        FUNC_5 (VAR_6);
    }



    if (VAR_7.Flags & VAR_1)
    {
        VAR_10 = VAR_7.MaxTableCount;
    }
    else
    {
        VAR_10 = VAR_7.CurrentTableCount;
    }

    VAR_12 = VAR_10 + VAR_2;
    VAR_9 = FUNC_0 (
        ((ACPI_SIZE) VAR_12) * sizeof (ACPI_TABLE_DESC));
    if (!VAR_9)
    {
        FUNC_1 ((VAR_3, "Could not allocate new root table array"));
        FUNC_5 (VAR_4);
    }



    VAR_11 = 0;
    if (VAR_7.Tables)
    {
        for (VAR_13 = 0; VAR_13 < VAR_10; VAR_13++)
        {
            if (VAR_7.Tables[VAR_13].Address)
            {
                FUNC_4 (VAR_9 + VAR_11,
                    VAR_7.Tables + VAR_13,
                    sizeof (ACPI_TABLE_DESC));
                VAR_11++;
            }
        }

        if (VAR_7.Flags & VAR_1)
        {
            FUNC_2 (VAR_7.Tables);
        }
    }

    VAR_7.Tables = VAR_9;
    VAR_7.MaxTableCount = VAR_12;
    VAR_7.CurrentTableCount = VAR_11;
    VAR_7.Flags |= VAR_1;

    FUNC_5 (VAR_5);
}
