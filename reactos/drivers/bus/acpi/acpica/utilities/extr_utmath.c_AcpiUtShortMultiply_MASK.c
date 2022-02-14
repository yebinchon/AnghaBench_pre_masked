
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Hi; int Lo; } ;
struct TYPE_4__ {int Full; TYPE_1__ Part; } ;
typedef TYPE_2__ UINT64_OVERLAY ;
typedef int UINT64 ;
typedef scalar_t__ UINT32 ;
typedef int ACPI_STATUS ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,scalar_t__,int ,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;

ACPI_STATUS
FUNC_3 (
    UINT64 VAR_2,
    UINT32 VAR_3,
    UINT64 *VAR_4)
{
    UINT64_OVERLAY VAR_5;
    UINT64_OVERLAY VAR_6;
    UINT32 VAR_7;


    FUNC_0 (VAR_1);


    VAR_5.Full = VAR_2;





    FUNC_1 (0, VAR_5.Part.Hi, VAR_3,
        VAR_6.Part.Hi, VAR_7);

    FUNC_1 (0, VAR_5.Part.Lo, VAR_3,
        VAR_6.Part.Lo, VAR_7);

    VAR_6.Part.Hi += VAR_7;



    if (VAR_4)
    {
        *VAR_4 = VAR_6.Full;
    }

    FUNC_2 (VAR_0);
}
