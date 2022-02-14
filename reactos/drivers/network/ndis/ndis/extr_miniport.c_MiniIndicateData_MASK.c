
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int VOID ;
typedef int UINT ;
struct TYPE_13__ {int ProtocolBindingContext; } ;
struct TYPE_17__ {TYPE_3__ NdisOpenBlock; TYPE_2__* ProtocolBinding; } ;
struct TYPE_16__ {struct TYPE_16__* Flink; } ;
struct TYPE_14__ {int Lock; } ;
struct TYPE_15__ {TYPE_4__ NdisMiniportBlock; TYPE_6__ ProtocolListHead; } ;
struct TYPE_11__ {int (* ReceiveHandler ) (int ,int ,int ,int ,int ,int ,int ) ;} ;
struct TYPE_12__ {TYPE_1__ Chars; } ;
typedef int PVOID ;
typedef TYPE_5__* PLOGICAL_ADAPTER ;
typedef TYPE_6__* PLIST_ENTRY ;
typedef TYPE_7__* PADAPTER_BINDING ;
typedef int NDIS_HANDLE ;
typedef int KIRQL ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_7__* FUNC_0 (TYPE_6__*,int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,int ,int ,int ,int ,int ,int ) ;

VOID
FUNC_6(
    PLOGICAL_ADAPTER VAR_6,
    NDIS_HANDLE VAR_7,
    PVOID VAR_8,
    UINT VAR_9,
    PVOID VAR_10,
    UINT VAR_11,
    UINT VAR_12)
{
  KIRQL VAR_13;
  PLIST_ENTRY VAR_14;
  PADAPTER_BINDING VAR_15;

  FUNC_4(VAR_2, ("Called. Adapter (0x%X)  HeaderBuffer (0x%X)  "
      "HeaderBufferSize (0x%X)  LookaheadBuffer (0x%X)  LookaheadBufferSize (0x%X).\n",
      VAR_6, VAR_8, VAR_9, VAR_10, VAR_11));





  FUNC_4(VAR_3, ("acquiring miniport block lock\n"));
  FUNC_1(&VAR_6->NdisMiniportBlock.Lock, &VAR_13);
    {
      VAR_14 = VAR_6->ProtocolListHead.Flink;
      FUNC_4(VAR_2, ("CurrentEntry = %x\n", VAR_14));

      if (VAR_14 == &VAR_6->ProtocolListHead)
        {
          FUNC_4(VAR_5, ("WARNING: No upper protocol layer.\n"));
        }

      while (VAR_14 != &VAR_6->ProtocolListHead)
        {
          VAR_15 = FUNC_0(VAR_14, VAR_0, VAR_1);
   FUNC_4(VAR_2, ("AdapterBinding = %x\n", VAR_15));

   FUNC_4
       (VAR_4,
        ("XXX (%x) %x %x %x %x %x %x %x XXX\n",
  *VAR_15->ProtocolBinding->Chars.ReceiveHandler,
  VAR_15->NdisOpenBlock.ProtocolBindingContext,
  VAR_7,
  VAR_8,
  VAR_9,
  VAR_10,
  VAR_11,
  VAR_12));


          (*VAR_15->ProtocolBinding->Chars.ReceiveHandler)(
              VAR_15->NdisOpenBlock.ProtocolBindingContext,
              VAR_7,
              VAR_8,
              VAR_9,
              VAR_10,
              VAR_11,
              VAR_12);

          VAR_14 = VAR_14->Flink;
        }
    }
  FUNC_2(&VAR_6->NdisMiniportBlock.Lock, VAR_13);

  FUNC_4(VAR_3, ("Leaving.\n"));
}
