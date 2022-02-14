
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ ULONG ;
struct TYPE_4__ {int OptionsLength; scalar_t__ RemoteAddress; scalar_t__ RemoteAddressLength; } ;
typedef int TDI_CONNECTION_INFORMATION ;
typedef scalar_t__ PTRANSPORT_ADDRESS ;
typedef TYPE_1__* PTDI_CONNECTION_INFORMATION ;
typedef int NTSTATUS ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,scalar_t__) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;

NTSTATUS FUNC_4
( PTDI_CONNECTION_INFORMATION VAR_2,
  ULONG VAR_3 )
{
    ULONG VAR_4;
    PTRANSPORT_ADDRESS VAR_5;

    VAR_4 = FUNC_2(VAR_3);
    if (!VAR_4)
    {
        FUNC_0(VAR_0,("Invalid parameter\n"));
        return VAR_1;
    }

    FUNC_1(VAR_2,
                  sizeof(TDI_CONNECTION_INFORMATION) +
                  VAR_4);

    VAR_2->OptionsLength = sizeof(ULONG);
    VAR_2->RemoteAddressLength = VAR_4;
    VAR_2->RemoteAddress = VAR_5 =
        (PTRANSPORT_ADDRESS)&VAR_2[1];

    return FUNC_3(VAR_5, VAR_3);
}
