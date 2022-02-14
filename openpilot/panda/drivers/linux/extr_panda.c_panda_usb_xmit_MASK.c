
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct urb {int transfer_dma; int transfer_flags; } ;
struct panda_usb_ctx {int dummy; } ;
struct panda_usb_can_msg {int dummy; } ;
struct panda_inf_priv {int netdev; TYPE_1__* priv_dev; int tx_submitted; } ;
typedef int netdev_tx_t ;
struct TYPE_2__ {int udev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,struct panda_usb_can_msg*,int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (int) ;
 int * FUNC_4 (int ,int ,int ,int *) ;
 struct urb* FUNC_5 (int ,int ) ;
 int FUNC_6 (struct urb*,int *) ;
 int FUNC_7 (struct urb*,int ,int ,int *,int ,int ,struct panda_usb_ctx*) ;
 int FUNC_8 (int ,int ,int *,int ) ;
 int FUNC_9 (struct urb*) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (struct urb*,int ) ;
 int FUNC_12 (struct urb*) ;

__attribute__((used)) static netdev_tx_t FUNC_13(struct panda_inf_priv *VAR_6,
      struct panda_usb_can_msg *VAR_7,
      struct panda_usb_ctx *VAR_8)
{
  struct urb *VAR_9;
  u8 *VAR_10;
  int VAR_11;


  VAR_9 = FUNC_5(0, VAR_2);
  if (!VAR_9)
    return -VAR_1;

  VAR_10 = FUNC_4(VAR_6->priv_dev->udev,
      VAR_3, VAR_2,
      &VAR_9->transfer_dma);
  if (!VAR_10) {
    VAR_11 = -VAR_1;
    goto nomembuf;
  }

  FUNC_0(VAR_10, VAR_7, VAR_3);

  FUNC_7(VAR_9, VAR_6->priv_dev->udev,
      FUNC_10(VAR_6->priv_dev->udev, 3), VAR_10,
      VAR_3, VAR_5,
      VAR_8);

  VAR_9->transfer_flags |= VAR_4;
  FUNC_6(VAR_9, &VAR_6->tx_submitted);

  VAR_11 = FUNC_11(VAR_9, VAR_2);
  if (FUNC_3(VAR_11))
    goto failed;


  FUNC_9(VAR_9);

  return 0;

 failed:
  FUNC_12(VAR_9);
  FUNC_8(VAR_6->priv_dev->udev, VAR_3, VAR_10, VAR_9->transfer_dma);

  if (VAR_11 == -VAR_0)
    FUNC_2(VAR_6->netdev);
  else
    FUNC_1(VAR_6->netdev, "failed tx_urb %d\n", VAR_11);

 nomembuf:
  FUNC_9(VAR_9);

  return VAR_11;
}
