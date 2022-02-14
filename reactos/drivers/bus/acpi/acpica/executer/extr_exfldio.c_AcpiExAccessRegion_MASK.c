
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int UINT64 ;
typedef int UINT32 ;
struct TYPE_9__ {int Address; int SpaceId; } ;
struct TYPE_8__ {int BaseByteOffset; int AccessByteWidth; TYPE_3__* RegionObj; } ;
struct TYPE_10__ {TYPE_2__ Region; TYPE_1__ CommonField; } ;
typedef scalar_t__ ACPI_STATUS ;
typedef TYPE_3__ ACPI_OPERAND_OBJECT ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int VAR_1 ;
 int FUNC_6 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_7 (TYPE_3__*,TYPE_3__*,int,int,int ,int *) ;
 scalar_t__ FUNC_8 (TYPE_3__*,int) ;
 int FUNC_9 (int ) ;
 int VAR_6 ;
 int FUNC_10 (scalar_t__) ;

ACPI_STATUS
FUNC_11 (
    ACPI_OPERAND_OBJECT *VAR_7,
    UINT32 VAR_8,
    UINT64 *VAR_9,
    UINT32 VAR_10)
{
    ACPI_STATUS VAR_11;
    ACPI_OPERAND_OBJECT *VAR_12;
    UINT32 VAR_13;


    FUNC_5 (VAR_6);






    VAR_11 = FUNC_8 (VAR_7, VAR_8);
    if (FUNC_3 (VAR_11))
    {
        FUNC_10 (VAR_11);
    }
    VAR_12 = VAR_7->CommonField.RegionObj;
    VAR_13 =
        VAR_7->CommonField.BaseByteOffset +
        VAR_8;

    if ((VAR_10 & VAR_1) == VAR_2)
    {
        FUNC_0 ((VAR_0, "[READ]"));
    }
    else
    {
        FUNC_0 ((VAR_0, "[WRITE]"));
    }

    FUNC_1 ((VAR_0,
        " Region [%s:%X], Width %X, ByteBase %X, Offset %X at %8.8X%8.8X\n",
        FUNC_9 (VAR_12->Region.SpaceId),
        VAR_12->Region.SpaceId,
        VAR_7->CommonField.AccessByteWidth,
        VAR_7->CommonField.BaseByteOffset,
        VAR_8,
        FUNC_4 (VAR_12->Region.Address + VAR_13)));



    VAR_11 = FUNC_7 (VAR_12, VAR_7,
        VAR_10, VAR_13,
        FUNC_6 (VAR_7->CommonField.AccessByteWidth), VAR_9);

    if (FUNC_3 (VAR_11))
    {
        if (VAR_11 == VAR_5)
        {
            FUNC_2 ((VAR_3,
                "Region %s (ID=%u) not implemented",
                FUNC_9 (VAR_12->Region.SpaceId),
                VAR_12->Region.SpaceId));
        }
        else if (VAR_11 == VAR_4)
        {
            FUNC_2 ((VAR_3,
                "Region %s (ID=%u) has no handler",
                FUNC_9 (VAR_12->Region.SpaceId),
                VAR_12->Region.SpaceId));
        }
    }

    FUNC_10 (VAR_11);
}
