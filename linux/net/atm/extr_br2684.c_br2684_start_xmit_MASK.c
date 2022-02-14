
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_2__ {int tx_fifo_errors; int tx_errors; int tx_dropped; int tx_carrier_errors; } ;
struct net_device {TYPE_1__ stats; int name; } ;
struct br2684_vcc {int device; struct atm_vcc* atmvcc; } ;
struct br2684_dev {int dummy; } ;
struct atm_vcc {int flags; } ;
typedef int netdev_tx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct br2684_dev* FUNC_0 (struct net_device*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sk_buff*,struct net_device*,struct br2684_vcc*) ;
 int FUNC_4 (struct sk_buff*) ;
 int VAR_5 ;
 int FUNC_5 (int ) ;
 struct br2684_vcc* FUNC_6 (struct sk_buff*,struct br2684_dev*) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct atm_vcc*) ;
 int FUNC_11 (struct sk_buff*) ;
 scalar_t__ FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ,int *) ;

__attribute__((used)) static netdev_tx_t FUNC_14(struct sk_buff *VAR_6,
         struct net_device *VAR_7)
{
 struct br2684_dev *VAR_8 = FUNC_0(VAR_7);
 struct br2684_vcc *VAR_9;
 struct atm_vcc *VAR_10;
 netdev_tx_t VAR_11 = VAR_4;

 FUNC_7("skb_dst(skb)=%p\n", FUNC_11(VAR_6));
 FUNC_8(&VAR_5);
 VAR_9 = FUNC_6(VAR_6, VAR_8);
 if (VAR_9 == ((void*)0)) {
  FUNC_7("no vcc attached to dev %s\n", VAR_7->name);
  VAR_7->stats.tx_errors++;
  VAR_7->stats.tx_carrier_errors++;

  FUNC_4(VAR_6);
  goto out_devs;
 }
 VAR_10 = VAR_9->atmvcc;

 FUNC_1(FUNC_10(VAR_10));

 if (FUNC_13(VAR_2, &VAR_10->flags) ||
     FUNC_13(VAR_0, &VAR_10->flags) ||
     !FUNC_13(VAR_1, &VAR_10->flags)) {
  VAR_7->stats.tx_dropped++;
  FUNC_4(VAR_6);
  goto out;
 }

 if (FUNC_12(FUNC_10(VAR_10))) {
  FUNC_5(VAR_9->device);
  VAR_11 = VAR_3;
  goto out;
 }

 if (!FUNC_3(VAR_6, VAR_7, VAR_9)) {







  VAR_7->stats.tx_errors++;
  VAR_7->stats.tx_fifo_errors++;
 }
 out:
 FUNC_2(FUNC_10(VAR_10));
 out_devs:
 FUNC_9(&VAR_5);
 return VAR_11;
}
