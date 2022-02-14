
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_12__ {scalar_t__ OwnerId; int DeviceCount; int NonSerialMethodCount; int SerializedMethodCount; int SerialMethodCount; int MethodCount; int OpRegionCount; int ObjectCount; } ;
struct TYPE_11__ {scalar_t__ OwnerId; } ;
struct TYPE_9__ {int InfoFlags; } ;
struct TYPE_10__ {TYPE_1__ Method; } ;
typedef int ACPI_STATUS ;
typedef TYPE_2__ ACPI_OPERAND_OBJECT ;
typedef TYPE_3__ ACPI_NAMESPACE_NODE ;
typedef TYPE_4__ ACPI_INIT_WALK_INFO ;
typedef scalar_t__ ACPI_HANDLE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_4 (scalar_t__) ;
 int VAR_3 ;
 TYPE_2__* FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;

__attribute__((used)) static ACPI_STATUS
FUNC_8 (
    ACPI_HANDLE VAR_4,
    UINT32 VAR_5,
    void *VAR_6,
    void **VAR_7)
{
    ACPI_INIT_WALK_INFO *VAR_8 = (ACPI_INIT_WALK_INFO *) VAR_6;
    ACPI_NAMESPACE_NODE *VAR_9 = (ACPI_NAMESPACE_NODE *) VAR_4;
    ACPI_STATUS VAR_10;
    ACPI_OPERAND_OBJECT *VAR_11;


    FUNC_2 ();






    if (VAR_9->OwnerId != VAR_8->OwnerId)
    {
        return (VAR_2);
    }

    VAR_8->ObjectCount++;



    switch (FUNC_6 (VAR_4))
    {
    case 128:

        VAR_10 = FUNC_4 (VAR_4);
        if (FUNC_1 (VAR_10))
        {
            FUNC_0 ((VAR_1, VAR_10,
                "During Region initialization %p [%4.4s]",
                VAR_4, FUNC_7 (VAR_4)));
        }

        VAR_8->OpRegionCount++;
        break;

    case 129:
        VAR_8->MethodCount++;
        VAR_11 = FUNC_5 (VAR_9);
        if (!VAR_11)
        {
            break;
        }



        if (VAR_11->Method.InfoFlags & VAR_0)
        {
            VAR_8->SerialMethodCount++;
            break;
        }

        if (VAR_3)
        {


            FUNC_3 (VAR_9, VAR_11);
            if (VAR_11->Method.InfoFlags & VAR_0)
            {


                VAR_8->SerialMethodCount++;
                VAR_8->SerializedMethodCount++;
                break;
            }
        }

        VAR_8->NonSerialMethodCount++;
        break;

    case 130:

        VAR_8->DeviceCount++;
        break;

    default:

        break;
    }





    return (VAR_2);
}
