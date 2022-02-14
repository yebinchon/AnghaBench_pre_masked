
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tei_instance; } ;
typedef TYPE_1__ TDIEntityID ;
typedef int PVOID ;
typedef int PDWORD ;
typedef int NTSTATUS ;
typedef int IPRouteEntry ;
typedef int HANDLE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ,int ,int,int *,int ) ;

NTSTATUS FUNC_2
( HANDLE VAR_5, TDIEntityID *VAR_6, IPRouteEntry **VAR_7, PDWORD VAR_8 ) {
    NTSTATUS VAR_9 = VAR_4;

    FUNC_0("TdiGetRoutesForIpEntity(tcpFile 0x%p, entityId 0x%x)\n",
          VAR_5, VAR_6->tei_instance);

    VAR_9 = FUNC_1( VAR_5,
                                VAR_1,
                                VAR_2,
                                VAR_3,
                                VAR_0,
    VAR_6->tei_instance,
                                0,
                                sizeof(IPRouteEntry),
                                (PVOID *)VAR_7,
                                VAR_8);

    return VAR_9;
}
