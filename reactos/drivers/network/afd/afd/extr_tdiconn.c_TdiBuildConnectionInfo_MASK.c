
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* Address; } ;
struct TYPE_5__ {int AddressType; } ;
typedef TYPE_2__* PTRANSPORT_ADDRESS ;
typedef int PTDI_CONNECTION_INFORMATION ;
typedef int NTSTATUS ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,TYPE_2__*) ;
 int FUNC_2 (int *,int ) ;

NTSTATUS
FUNC_3
( PTDI_CONNECTION_INFORMATION *VAR_0,
  PTRANSPORT_ADDRESS VAR_1 ) {
    NTSTATUS VAR_2 = FUNC_2
        ( VAR_0, VAR_1->Address[0].AddressType );

    if( FUNC_0(VAR_2) )
        FUNC_1( *VAR_0, VAR_1 );

    return VAR_2;
}
