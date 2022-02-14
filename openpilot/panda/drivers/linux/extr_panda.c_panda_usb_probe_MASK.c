
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_interface {int dev; } ;
struct usb_device_id {int dummy; } ;
struct usb_device {int dummy; } ;
struct TYPE_3__ {int bitrate; } ;
struct TYPE_4__ {TYPE_1__ bittiming; int state; } ;
struct panda_inf_priv {int interface_num; struct net_device* netdev; TYPE_2__ can; int tx_submitted; int mcu_can_ifnum; struct panda_dev_priv* priv_dev; } ;
struct panda_dev_priv {struct panda_inf_priv** interfaces; int rx_submitted; int * dev; struct usb_device* udev; } ;
struct net_device {int flags; int * netdev_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct net_device*,int *) ;
 struct net_device* FUNC_1 (int,int ) ;
 int * VAR_7 ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (int *) ;
 struct usb_device* FUNC_6 (struct usb_interface*) ;
 int FUNC_7 (struct panda_dev_priv*) ;
 struct panda_dev_priv* FUNC_8 (int,int ) ;
 int FUNC_9 (struct net_device*,char*,int) ;
 struct panda_inf_priv* FUNC_10 (struct net_device*) ;
 int VAR_8 ;
 int FUNC_11 (struct panda_inf_priv*,int) ;
 int FUNC_12 (struct panda_dev_priv*) ;
 int FUNC_13 (struct net_device*) ;
 int FUNC_14 (struct net_device*) ;
 int FUNC_15 (struct usb_interface*,struct panda_dev_priv*) ;

__attribute__((used)) static int FUNC_16(struct usb_interface *VAR_9,
      const struct usb_device_id *VAR_10)
{
  struct net_device *VAR_11;
  struct panda_inf_priv *VAR_12;
  int VAR_13 = -VAR_1;
  int VAR_14;
  struct panda_dev_priv *VAR_15;
  struct usb_device *VAR_16 = FUNC_6(VAR_9);

  VAR_15 = FUNC_8(sizeof(struct panda_dev_priv), VAR_2);
  if (!VAR_15) {
    FUNC_2(&VAR_9->dev, "Couldn't alloc priv_dev\n");
    return -VAR_1;
  }
  VAR_15->udev = VAR_16;
  VAR_15->dev = &VAR_9->dev;
  FUNC_15(VAR_9, VAR_15);


  for(VAR_14 = 0; VAR_14 < VAR_6; VAR_14++){
    VAR_11 = FUNC_1(sizeof(struct panda_inf_priv), VAR_5);
    if (!VAR_11) {
      FUNC_2(&VAR_9->dev, "Couldn't alloc candev\n");
      goto cleanup_candev;
    }
    VAR_11->netdev_ops = &VAR_8;
    VAR_11->flags |= VAR_3;

    VAR_12 = FUNC_10(VAR_11);
    VAR_12->netdev = VAR_11;
    VAR_12->priv_dev = VAR_15;
    VAR_12->interface_num = VAR_14;
    VAR_12->mcu_can_ifnum = VAR_7[VAR_14];

    FUNC_5(&VAR_15->rx_submitted);
    FUNC_5(&VAR_12->tx_submitted);


    VAR_12->can.state = VAR_0;
    VAR_12->can.bittiming.bitrate = VAR_4;

    FUNC_0(VAR_11, &VAR_9->dev);

    VAR_13 = FUNC_13(VAR_11);
    if (VAR_13) {
      FUNC_9(VAR_11, "couldn't register PANDA CAN device: %d\n", VAR_13);
      FUNC_4(VAR_12->netdev);
      goto cleanup_candev;
    }

    VAR_15->interfaces[VAR_14] = VAR_12;
  }

  VAR_13 = FUNC_12(VAR_15);
  if (VAR_13) {
    FUNC_2(&VAR_9->dev, "Failed to initialize Comma.ai Panda CAN controller\n");
    goto cleanup_candev;
  }

  VAR_13 = FUNC_11(VAR_12, 1);
  if (VAR_13) {
    FUNC_3(&VAR_9->dev, "Failed to initialize send enable message to Panda.\n");
    goto cleanup_candev;
  }

  FUNC_3(&VAR_9->dev, "Comma.ai Panda CAN controller connected\n");

  return 0;

 cleanup_candev:
  for(VAR_14 = 0; VAR_14 < VAR_6; VAR_14++){
    VAR_12 = VAR_15->interfaces[VAR_14];
    if(VAR_12){
      FUNC_14(VAR_12->netdev);
      FUNC_4(VAR_12->netdev);
    }else
      break;
  }

  FUNC_7(VAR_15);

  return VAR_13;
}
