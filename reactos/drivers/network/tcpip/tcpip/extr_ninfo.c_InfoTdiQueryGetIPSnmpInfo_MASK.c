
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void* UINT ;
struct TYPE_3__ {int ipsi_numaddr; void* ipsi_numroutes; void* ipsi_numif; } ;
typedef int TDI_STATUS ;
typedef int TDIEntityID ;
typedef int SnmpInfo ;
typedef int PUINT ;
typedef int PNDIS_BUFFER ;
typedef int PIP_INTERFACE ;
typedef int PCHAR ;
typedef TYPE_1__ IPSNMPInfo ;


 void* FUNC_0 (int ) ;
 void* FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (int ,int,int ,int ) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int VAR_1 ;
 int FUNC_4 (int ,char*) ;

TDI_STATUS FUNC_5( TDIEntityID VAR_2,
                                      PIP_INTERFACE VAR_3,
          PNDIS_BUFFER VAR_4,
          PUINT VAR_5 ) {
    IPSNMPInfo VAR_6;
    UINT VAR_7 = FUNC_1();
    UINT VAR_8 = FUNC_0(VAR_3);
    TDI_STATUS VAR_9 = VAR_1;

    FUNC_4(VAR_0, ("Called.\n"));

    FUNC_3(&VAR_6, sizeof(VAR_6));

    VAR_6.ipsi_numif = VAR_7;
    VAR_6.ipsi_numaddr = 1;
    VAR_6.ipsi_numroutes = VAR_8;

    VAR_9 = FUNC_2( (PCHAR)&VAR_6, sizeof(VAR_6),
     VAR_4, VAR_5 );

    FUNC_4(VAR_0, ("Returning %08x\n", VAR_9));

    return VAR_9;
}
