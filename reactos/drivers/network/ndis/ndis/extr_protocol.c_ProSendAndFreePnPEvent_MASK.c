
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef void* ULONG_PTR ;
struct TYPE_16__ {int ProtocolBindingContext; } ;
struct TYPE_20__ {TYPE_3__ NdisOpenBlock; TYPE_2__* ProtocolBinding; } ;
struct TYPE_19__ {struct TYPE_19__* Flink; } ;
struct TYPE_18__ {TYPE_6__ ProtocolListHead; } ;
struct TYPE_17__ {struct TYPE_17__* Buffer; void** NdisReserved; } ;
struct TYPE_14__ {scalar_t__ (* PnPEventHandler ) (int ,TYPE_4__*) ;} ;
struct TYPE_15__ {TYPE_1__ Chars; } ;
typedef TYPE_4__* PNET_PNP_EVENT ;
typedef TYPE_5__* PLOGICAL_ADAPTER ;
typedef TYPE_6__* PLIST_ENTRY ;
typedef scalar_t__ PIRP ;
typedef TYPE_7__* PADAPTER_BINDING ;
typedef scalar_t__ NDIS_STATUS ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_7__* FUNC_0 (TYPE_6__*,int ,int ) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_3 (int ,TYPE_4__*) ;

NDIS_STATUS
FUNC_4(
   PLOGICAL_ADAPTER VAR_4,
   PNET_PNP_EVENT VAR_5,
   PIRP VAR_6)
{
  PLIST_ENTRY VAR_7;
  NDIS_STATUS VAR_8;
  PADAPTER_BINDING VAR_9;

  VAR_7 = VAR_4->ProtocolListHead.Flink;

  while (VAR_7 != &VAR_4->ProtocolListHead)
  {
     VAR_9 = FUNC_0(VAR_7, VAR_0, VAR_1);

     VAR_8 = (*VAR_9->ProtocolBinding->Chars.PnPEventHandler)(
      VAR_9->NdisOpenBlock.ProtocolBindingContext,
      VAR_5);

     if (VAR_8 == VAR_2)
     {
         FUNC_2(VAR_6);

         VAR_5->NdisReserved[0] = (ULONG_PTR)VAR_6;
         VAR_5->NdisReserved[1] = (ULONG_PTR)VAR_7->Flink;
         return VAR_2;
     }
     else if (VAR_8 != VAR_3)
     {
         if (VAR_5->Buffer) FUNC_1(VAR_5->Buffer);
         FUNC_1(VAR_5);
         return VAR_8;
     }

     VAR_7 = VAR_7->Flink;
  }

  if (VAR_5->Buffer) FUNC_1(VAR_5->Buffer);
  FUNC_1(VAR_5);

  return VAR_3;
}
