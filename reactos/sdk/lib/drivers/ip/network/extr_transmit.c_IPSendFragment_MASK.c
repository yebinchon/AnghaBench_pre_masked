
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int State; } ;
typedef TYPE_1__* PNEIGHBOR_CACHE_ENTRY ;
typedef int PNDIS_PACKET ;
typedef int PIPFRAGMENT_CONTEXT ;
typedef int NTSTATUS ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_1 (int ,char*) ;

NTSTATUS FUNC_2(
    PNDIS_PACKET VAR_2,
    PNEIGHBOR_CACHE_ENTRY VAR_3,
    PIPFRAGMENT_CONTEXT VAR_4)
{
    FUNC_1(VAR_1, ("Called. NdisPacket (0x%X)  NCE (0x%X).\n", VAR_2, VAR_3));

    FUNC_1(VAR_1, ("NCE->State = %d.\n", VAR_3->State));
    return FUNC_0(VAR_3, VAR_2, VAR_0, VAR_4);
}
