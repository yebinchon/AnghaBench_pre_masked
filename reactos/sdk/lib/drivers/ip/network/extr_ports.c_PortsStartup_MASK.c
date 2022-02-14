
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void* UINT ;
struct TYPE_3__ {int PortsToOversee; int Lock; int ProtoBitmap; int ProtoBitBuffer; void* StartingPort; } ;
typedef TYPE_1__* PPORT_SET ;
typedef int NTSTATUS ;


 int FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;

NTSTATUS FUNC_4( PPORT_SET VAR_4,
     UINT VAR_5,
     UINT VAR_6 ) {
    VAR_4->StartingPort = VAR_5;
    VAR_4->PortsToOversee = VAR_6;

    VAR_4->ProtoBitBuffer =
 FUNC_0( VAR_0, (VAR_4->PortsToOversee + 7) / 8,
                               VAR_1 );
    if(!VAR_4->ProtoBitBuffer) return VAR_2;
    FUNC_3( &VAR_4->ProtoBitmap,
    VAR_4->ProtoBitBuffer,
    VAR_4->PortsToOversee );
    FUNC_2( &VAR_4->ProtoBitmap );
    FUNC_1( &VAR_4->Lock );
    return VAR_3;
}
