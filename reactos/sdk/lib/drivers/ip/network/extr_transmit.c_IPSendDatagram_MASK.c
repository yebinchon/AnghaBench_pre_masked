
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* Interface; } ;
struct TYPE_5__ {int MTU; } ;
typedef TYPE_2__* PNEIGHBOR_CACHE_ENTRY ;
typedef int PIP_PACKET ;
typedef int NTSTATUS ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,TYPE_2__*,int ) ;
 int FUNC_2 (int ,char*) ;

NTSTATUS FUNC_3(PIP_PACKET VAR_2, PNEIGHBOR_CACHE_ENTRY VAR_3)
{
    FUNC_2(VAR_0, ("Called. IPPacket (0x%X)  NCE (0x%X)\n", VAR_2, VAR_3));

    FUNC_0(VAR_2);


    FUNC_2(VAR_1,("PathMTU: %d\n", VAR_3->Interface->MTU));

    return FUNC_1(VAR_2, VAR_3, VAR_3->Interface->MTU);
}
