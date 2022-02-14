
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {scalar_t__ data; } ;
struct panda_usb_ctx {int ndx; } ;
struct panda_usb_can_msg {int data; void* bus_dat_len; void* rir; } ;
struct panda_inf_priv {int mcu_can_ifnum; TYPE_1__* netdev; } ;
struct net_device_stats {int tx_dropped; } ;
struct net_device {int dummy; } ;
struct can_frame {int can_id; int can_dlc; int data; } ;
typedef int netdev_tx_t ;
struct TYPE_3__ {struct net_device_stats stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct net_device*,struct sk_buff*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (struct sk_buff*,TYPE_1__*,int ) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (struct net_device*,char*,int,int) ;
 struct panda_inf_priv* FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct panda_usb_ctx*) ;
 struct panda_usb_ctx* FUNC_9 (struct panda_inf_priv*,struct can_frame*) ;
 int FUNC_10 (struct panda_inf_priv*,struct panda_usb_can_msg*,struct panda_usb_ctx*) ;
 int FUNC_11 (char*) ;

__attribute__((used)) static netdev_tx_t FUNC_12(struct sk_buff *VAR_4,
     struct net_device *VAR_5)
{
  struct panda_inf_priv *VAR_6 = FUNC_7(VAR_5);
  struct can_frame *VAR_7 = (struct can_frame *)VAR_4->data;
  struct panda_usb_ctx *VAR_8 = ((void*)0);
  struct net_device_stats *VAR_9 = &VAR_6->netdev->stats;
  int VAR_10;
  struct panda_usb_can_msg VAR_11 = {};
  int VAR_12 = VAR_6->mcu_can_ifnum;

  if (FUNC_0(VAR_5, VAR_4)){
    FUNC_11("Invalid CAN packet");
    return VAR_1;
  }

  VAR_8 = FUNC_9(VAR_6, VAR_7);



  FUNC_2(VAR_4, VAR_6->netdev, VAR_8->ndx);

  if(VAR_7->can_id & VAR_0){
    VAR_11.rir = FUNC_3(((VAR_7->can_id & 0x1FFFFFFF) << 3) |
         VAR_3 | VAR_2);
  }else{
    VAR_11.rir = FUNC_3(((VAR_7->can_id & 0x7FF) << 21) | VAR_3);
  }
  VAR_11.bus_dat_len = FUNC_3((VAR_7->can_dlc & 0x0F) | (VAR_12 << 4));

  FUNC_5(VAR_11.data, VAR_7->data, VAR_7->can_dlc);





  FUNC_6(VAR_5, "Received data from socket. canid: %x; len: %d\n", VAR_7->can_id, VAR_7->can_dlc);

  VAR_10 = FUNC_10(VAR_6, &VAR_11, VAR_8);
  if (VAR_10)
    goto xmit_failed;

  return VAR_1;

 xmit_failed:
  FUNC_1(VAR_6->netdev, VAR_8->ndx);
  FUNC_8(VAR_8);
  FUNC_4(VAR_4);
  VAR_9->tx_dropped++;

  return VAR_1;
}
