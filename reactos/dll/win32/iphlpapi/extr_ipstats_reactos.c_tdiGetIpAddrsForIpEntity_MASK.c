
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
typedef int IPAddrEntry ;
typedef int HANDLE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ,int ,int,int *,int ) ;

NTSTATUS FUNC_2
( HANDLE VAR_4, TDIEntityID *VAR_5, IPAddrEntry **VAR_6, PDWORD VAR_7 ) {
    NTSTATUS VAR_8;

    FUNC_0("TdiGetIpAddrsForIpEntity(tcpFile 0x%p, entityId 0x%x)\n",
          VAR_4, VAR_5->tei_instance);

    VAR_8 = FUNC_1( VAR_4,
                                VAR_1,
                                VAR_2,
                                VAR_3,
                                VAR_0,
    VAR_5->tei_instance,
                                0,
                                sizeof(IPAddrEntry),
                                (PVOID *)VAR_6,
                                VAR_7 );

    return VAR_8;
}
