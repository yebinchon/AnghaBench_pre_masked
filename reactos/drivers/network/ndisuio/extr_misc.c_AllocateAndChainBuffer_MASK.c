
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_3__ {int BufferPoolHandle; } ;
typedef int PVOID ;
typedef int PNDIS_PACKET ;
typedef int PNDIS_BUFFER ;
typedef TYPE_1__* PNDISUIO_ADAPTER_CONTEXT ;
typedef scalar_t__ NDIS_STATUS ;
typedef scalar_t__ BOOLEAN ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__*,int *,int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;

NDIS_STATUS
FUNC_4(PNDISUIO_ADAPTER_CONTEXT VAR_1,
                       PNDIS_PACKET VAR_2,
                       PVOID VAR_3,
                       ULONG VAR_4,
                       BOOLEAN VAR_5)
{
    NDIS_STATUS VAR_6;
    PNDIS_BUFFER VAR_7;


    FUNC_1(&VAR_6,
                       &VAR_7,
                       VAR_1->BufferPoolHandle,
                       VAR_3,
                       VAR_4);
    if (VAR_6 != VAR_0)
    {
        FUNC_0("No free buffer descriptors\n");
        return VAR_6;
    }

    if (VAR_5)
    {

        FUNC_3(VAR_2, VAR_7);
    }
    else
    {

        FUNC_2(VAR_2, VAR_7);
    }


    return VAR_0;
}
