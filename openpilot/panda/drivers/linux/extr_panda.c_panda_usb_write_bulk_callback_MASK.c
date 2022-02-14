
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct urb {int status; int transfer_dma; int transfer_buffer; int transfer_buffer_length; int dev; struct panda_usb_ctx* context; } ;
struct panda_usb_ctx {int ndx; scalar_t__ dlc; TYPE_2__* priv; } ;
struct TYPE_3__ {int tx_bytes; int tx_packets; } ;
struct net_device {TYPE_1__ stats; } ;
struct TYPE_4__ {struct net_device* netdev; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct net_device*,int ) ;
 int FUNC_2 (struct net_device*,char*,int ) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct panda_usb_ctx*) ;
 int FUNC_5 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct urb *VAR_0)
{
  struct panda_usb_ctx *VAR_1 = VAR_0->context;
  struct net_device *VAR_2;

  FUNC_0(!VAR_1);

  VAR_2 = VAR_1->priv->netdev;


  FUNC_5(VAR_0->dev, VAR_0->transfer_buffer_length,
      VAR_0->transfer_buffer, VAR_0->transfer_dma);

  if (!FUNC_3(VAR_2))
    return;

  VAR_2->stats.tx_packets++;
  VAR_2->stats.tx_bytes += VAR_1->dlc;

  FUNC_1(VAR_2, VAR_1->ndx);

  if (VAR_0->status)
    FUNC_2(VAR_2, "Tx URB aborted (%d)\n", VAR_0->status);


  FUNC_4(VAR_1);
}
