
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ ULONG ;
struct TYPE_3__ {scalar_t__ StartingPort; scalar_t__ PortsToOversee; int Lock; int ProtoBitmap; } ;
typedef TYPE_1__* PPORT_SET ;
typedef int KIRQL ;
typedef scalar_t__ BOOLEAN ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *,scalar_t__,int) ;
 int FUNC_3 (int *,scalar_t__,int) ;
 scalar_t__ FUNC_4 (scalar_t__) ;

BOOLEAN FUNC_5( PPORT_SET VAR_1, ULONG VAR_2 ) {
    BOOLEAN VAR_3;
    KIRQL VAR_4;

    VAR_2 = FUNC_4(VAR_2);

    if ((VAR_2 < VAR_1->StartingPort) ||
        (VAR_2 >= VAR_1->StartingPort + VAR_1->PortsToOversee))
    {
       return VAR_0;
    }

    VAR_2 -= VAR_1->StartingPort;

    FUNC_0( &VAR_1->Lock, &VAR_4 );
    VAR_3 = FUNC_2( &VAR_1->ProtoBitmap, VAR_2, 1 );
    if( VAR_3 ) FUNC_3( &VAR_1->ProtoBitmap, VAR_2, 1 );
    FUNC_1( &VAR_1->Lock, VAR_4 );

    return VAR_3;
}
