
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t UINT32 ;
struct TYPE_4__ {size_t CurrentTableCount; TYPE_1__* Tables; } ;
struct TYPE_3__ {int Flags; } ;
typedef int ACPI_TABLE_DESC ;
typedef int ACPI_STATUS ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__ VAR_5 ;
 int FUNC_1 (int *,size_t) ;
 int VAR_6 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static ACPI_STATUS
FUNC_3 (
    ACPI_TABLE_DESC *VAR_7,
    UINT32 *VAR_8)
{
    UINT32 VAR_9;


    FUNC_0 (VAR_6);




    for (VAR_9 = 0; VAR_9 < VAR_5.CurrentTableCount; ++VAR_9)
    {


        if (!(VAR_5.Tables[VAR_9].Flags & VAR_1))
        {
            continue;
        }





        if (!FUNC_1 (VAR_7, VAR_9))
        {
            continue;
        }
        if (VAR_5.Tables[VAR_9].Flags &
            VAR_0)
        {


            FUNC_2 (VAR_2);
        }
        else
        {
            *VAR_8 = VAR_9;
            FUNC_2 (VAR_3);
        }
    }



    FUNC_2 (VAR_4);
}
