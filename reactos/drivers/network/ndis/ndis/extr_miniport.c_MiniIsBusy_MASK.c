
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ ResetStatus; int Lock; scalar_t__ FirstPendingPacket; scalar_t__ PendingRequest; } ;
struct TYPE_6__ {TYPE_1__ NdisMiniportBlock; } ;
typedef TYPE_2__* PLOGICAL_ADAPTER ;
typedef scalar_t__ NDIS_WORK_ITEM_TYPE ;
typedef int KIRQL ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*,scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;

BOOLEAN
FUNC_3(
    PLOGICAL_ADAPTER VAR_6,
    NDIS_WORK_ITEM_TYPE VAR_7)
{
    BOOLEAN VAR_8 = VAR_0;
    KIRQL VAR_9;

    FUNC_0(&VAR_6->NdisMiniportBlock.Lock, &VAR_9);

    if (FUNC_2(VAR_6, VAR_7))
    {
        VAR_8 = VAR_5;
    }
    else if (VAR_7 == VAR_2 && VAR_6->NdisMiniportBlock.PendingRequest)
    {
       VAR_8 = VAR_5;
    }
    else if (VAR_7 == VAR_4 && VAR_6->NdisMiniportBlock.FirstPendingPacket)
    {
       VAR_8 = VAR_5;
    }
    else if (VAR_7 == VAR_3 &&
             VAR_6->NdisMiniportBlock.ResetStatus == VAR_1)
    {
       VAR_8 = VAR_5;
    }

    FUNC_1(&VAR_6->NdisMiniportBlock.Lock, VAR_9);

    return VAR_8;
}
