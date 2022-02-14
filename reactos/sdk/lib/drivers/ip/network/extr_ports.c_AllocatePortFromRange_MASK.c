
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ ULONG ;
struct TYPE_3__ {scalar_t__ StartingPort; scalar_t__ PortsToOversee; int Lock; int ProtoBitmap; } ;
typedef TYPE_1__* PPORT_SET ;
typedef int KIRQL ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *,int,scalar_t__) ;
 int FUNC_3 (int *,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;

ULONG FUNC_5( PPORT_SET VAR_0, ULONG VAR_1, ULONG VAR_2 ) {
    ULONG VAR_3;
    KIRQL VAR_4;

    if ((VAR_1 < VAR_0->StartingPort) ||
        (VAR_2 >= VAR_0->StartingPort + VAR_0->PortsToOversee))
    {
        return -1;
    }

    VAR_1 -= VAR_0->StartingPort;
    VAR_2 -= VAR_0->StartingPort;

    FUNC_0( &VAR_0->Lock, &VAR_4 );
    VAR_3 = FUNC_2( &VAR_0->ProtoBitmap, 1, VAR_1 );
    if( VAR_3 != (ULONG)-1 && VAR_3 <= VAR_2) {
 FUNC_3( &VAR_0->ProtoBitmap, VAR_3 );
 VAR_3 += VAR_0->StartingPort;
 FUNC_1( &VAR_0->Lock, VAR_4 );
 return FUNC_4(VAR_3);
    }
    FUNC_1( &VAR_0->Lock, VAR_4 );

    return -1;
}
