
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_4__ {int PacketPoolHandle; } ;
typedef int PVOID ;
typedef int * PNDIS_PACKET ;
typedef TYPE_1__* PNDISUIO_ADAPTER_CONTEXT ;
typedef scalar_t__ NDIS_STATUS ;


 scalar_t__ FUNC_0 (TYPE_1__*,int *,int ,int ,int ) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (scalar_t__*,int **,int ) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;

PNDIS_PACKET
FUNC_4(PNDISUIO_ADAPTER_CONTEXT VAR_2,
                           PVOID VAR_3,
                           ULONG VAR_4)
{
    PNDIS_PACKET VAR_5;
    NDIS_STATUS VAR_6;


    FUNC_2(&VAR_6,
                       &VAR_5,
                       VAR_2->PacketPoolHandle);
    if (VAR_6 != VAR_0)
    {
        FUNC_1("No free packet descriptors\n");
        return ((void*)0);
    }


    VAR_6 = FUNC_0(VAR_2, VAR_5,
                                    VAR_3, VAR_4, VAR_1);
    if (VAR_6 != VAR_0)
    {
        FUNC_3(VAR_5);
        return ((void*)0);
    }


    return VAR_5;
}
