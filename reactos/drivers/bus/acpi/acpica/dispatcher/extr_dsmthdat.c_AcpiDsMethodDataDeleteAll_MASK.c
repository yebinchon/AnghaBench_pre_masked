
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t UINT32 ;
struct TYPE_5__ {scalar_t__ Object; } ;
struct TYPE_4__ {TYPE_2__* Arguments; TYPE_2__* LocalVariables; } ;
typedef TYPE_1__ ACPI_WALK_STATE ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_3 ;
 int VAR_4 ;

void
FUNC_3 (
    ACPI_WALK_STATE *VAR_5)
{
    UINT32 VAR_6;


    FUNC_1 (VAR_3);




    for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++)
    {
        if (VAR_5->LocalVariables[VAR_6].Object)
        {
            FUNC_0 ((VAR_0, "Deleting Local%u=%p\n",
                VAR_6, VAR_5->LocalVariables[VAR_6].Object));



            FUNC_2 (&VAR_5->LocalVariables[VAR_6]);
        }
    }



    for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
    {
        if (VAR_5->Arguments[VAR_6].Object)
        {
            FUNC_0 ((VAR_0, "Deleting Arg%u=%p\n",
                VAR_6, VAR_5->Arguments[VAR_6].Object));



            FUNC_2 (&VAR_5->Arguments[VAR_6]);
        }
    }

    VAR_4;
}
