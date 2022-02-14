
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct panda_usb_can_msg {int bus_dat_len; int rir; int data; } ;
struct panda_inf_priv {TYPE_1__* netdev; } ;
struct panda_dev_priv {int dummy; } ;
struct net_device_stats {int rx_bytes; int rx_packets; } ;
struct can_frame {int can_id; scalar_t__ can_dlc; int data; } ;
struct TYPE_3__ {struct net_device_stats stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sk_buff* FUNC_0 (TYPE_1__*,struct can_frame**) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,int ,scalar_t__) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct sk_buff*) ;
 struct panda_inf_priv* FUNC_5 (struct panda_dev_priv*,int) ;
 int FUNC_6 (char*,int) ;

__attribute__((used)) static void FUNC_7(struct panda_dev_priv *VAR_3,
         struct panda_usb_can_msg *VAR_4)
{
  struct can_frame *VAR_5;
  struct sk_buff *VAR_6;
  int VAR_7;
  struct panda_inf_priv *VAR_8;
  struct net_device_stats *VAR_9;

  VAR_7 = (VAR_4->bus_dat_len >> 4) & 0xf;
  VAR_8 = FUNC_5(VAR_3, VAR_7);
  if(!VAR_8){
    FUNC_6("Got something on an unused interface %d\n", VAR_7);
    return;
  }
  FUNC_6("Recv bus %d\n", VAR_7);

  VAR_9 = &VAR_8->netdev->stats;


  if (!FUNC_3(VAR_8->netdev))
    return;

  VAR_6 = FUNC_0(VAR_8->netdev, &VAR_5);
  if (!VAR_6)
    return;

  if(VAR_4->rir & VAR_1){
    VAR_5->can_id = (VAR_4->rir >> 3) | VAR_0;
  }else{
    VAR_5->can_id = (VAR_4->rir >> 21);
  }





  VAR_5->can_dlc = FUNC_1(VAR_4->bus_dat_len & VAR_2);

  FUNC_2(VAR_5->data, VAR_4->data, VAR_5->can_dlc);

  VAR_9->rx_packets++;
  VAR_9->rx_bytes += VAR_5->can_dlc;

  FUNC_4(VAR_6);
}
