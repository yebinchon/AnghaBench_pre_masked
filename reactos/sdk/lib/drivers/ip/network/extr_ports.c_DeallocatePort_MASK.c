
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VOID ;
typedef scalar_t__ ULONG ;
struct TYPE_3__ {scalar_t__ StartingPort; scalar_t__ PortsToOversee; int Lock; int ProtoBitmap; } ;
typedef TYPE_1__* PPORT_SET ;
typedef int KIRQL ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,scalar_t__,int) ;
 scalar_t__ FUNC_4 (scalar_t__) ;

VOID FUNC_5( PPORT_SET VAR_0, ULONG VAR_1 ) {
    KIRQL VAR_2;

    VAR_1 = FUNC_4(VAR_1);
    FUNC_0(VAR_1 >= VAR_0->StartingPort);
    FUNC_0(VAR_1 < VAR_0->StartingPort + VAR_0->PortsToOversee);

    FUNC_1( &VAR_0->Lock, &VAR_2 );
    FUNC_3( &VAR_0->ProtoBitmap, VAR_1 - VAR_0->StartingPort, 1 );
    FUNC_2( &VAR_0->Lock, VAR_2 );
}
