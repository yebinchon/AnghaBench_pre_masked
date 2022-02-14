
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ ULONG_PTR ;
struct TYPE_6__ {scalar_t__ Information; } ;
struct TYPE_8__ {TYPE_1__ IoStatus; } ;
struct TYPE_7__ {scalar_t__ BusNumber; int LegacyBusType; int BusTypeGuid; } ;
typedef TYPE_2__* PPNP_BUS_INFORMATION ;
typedef int PPDO_DEVICE_DATA ;
typedef int PNP_BUS_INFORMATION ;
typedef TYPE_3__* PIRP ;
typedef int NTSTATUS ;


 TYPE_2__* FUNC_0 (int ,int,char) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

NTSTATUS
FUNC_2(
     PPDO_DEVICE_DATA VAR_5,
      PIRP VAR_6 )
{

    PPNP_BUS_INFORMATION VAR_7;

    FUNC_1 ();

    VAR_7 = FUNC_0(VAR_2,
                                    sizeof(PNP_BUS_INFORMATION),
                                    'IpcA');

    if (VAR_7 == ((void*)0)) {
      return VAR_3;
    }

    VAR_7->BusTypeGuid = VAR_0;

    VAR_7->LegacyBusType = VAR_1;

    VAR_7->BusNumber = 0;

    VAR_6->IoStatus.Information = (ULONG_PTR)VAR_7;

    return VAR_4;
}
