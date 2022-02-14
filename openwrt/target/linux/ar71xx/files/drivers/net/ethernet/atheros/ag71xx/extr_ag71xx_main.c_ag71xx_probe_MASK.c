
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct resource {scalar_t__ start; scalar_t__ end; } ;
struct TYPE_16__ {struct ag71xx_platform_data* platform_data; } ;
struct platform_device {TYPE_5__ dev; } ;
struct net_device {unsigned long base_addr; int irq; int name; int dev_addr; int * ethtool_ops; int * netdev_ops; } ;
struct ag71xx_platform_data {int phy_if_mode; int mac_addr; int is_ar91xx; int is_ar724x; scalar_t__ desc_pktlen_mask; scalar_t__ max_frame_len; scalar_t__ phy_mask; int * mii_bus_dev; } ;
struct ag71xx_desc {int dummy; } ;
struct TYPE_13__ {void* order; int desc_split; } ;
struct TYPE_12__ {void* order; } ;
struct TYPE_14__ {unsigned long data; int function; } ;
struct ag71xx {scalar_t__ mac_base; int napi; scalar_t__ stop_desc_dma; TYPE_4__* stop_desc; TYPE_2__ tx_ring; scalar_t__ desc_pktlen_mask; scalar_t__ max_frame_len; TYPE_1__ rx_ring; TYPE_3__ oom_timer; int restart_work; int lock; int msg_enable; struct net_device* dev; struct platform_device* pdev; } ;
struct TYPE_15__ {scalar_t__ next; scalar_t__ ctrl; scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int *,int ) ;
 int VAR_12 ;
 int FUNC_1 (struct net_device*,TYPE_5__*) ;
 int FUNC_2 (struct ag71xx*) ;
 int FUNC_3 (struct ag71xx*) ;
 int FUNC_4 (struct ag71xx*) ;
 int VAR_13 ;
 int FUNC_5 (struct ag71xx*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_6 (struct ag71xx*) ;
 int FUNC_7 (struct ag71xx*) ;
 int VAR_18 ;
 int VAR_19 ;
 void* FUNC_8 (int) ;
 int FUNC_9 (struct ag71xx*,int ,int ) ;
 int FUNC_10 (TYPE_5__*,char*,...) ;
 int FUNC_11 (TYPE_5__*) ;
 struct net_device* FUNC_12 (TYPE_5__*,int) ;
 scalar_t__ FUNC_13 (TYPE_5__*,scalar_t__,scalar_t__) ;
 int FUNC_14 (TYPE_5__*,int ,int ,int,int ,struct net_device*) ;
 TYPE_4__* FUNC_15 (TYPE_5__*,int,scalar_t__*,int ) ;
 int FUNC_16 (TYPE_3__*) ;
 int FUNC_17 (int ,int ,int ) ;
 struct ag71xx* FUNC_18 (struct net_device*) ;
 int FUNC_19 (int ,int ) ;
 int FUNC_20 (struct net_device*,int *,int ,int ) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (struct platform_device*,int ) ;
 struct resource* FUNC_23 (struct platform_device*,int ,int ) ;
 struct resource* FUNC_24 (struct platform_device*,int ,char*) ;
 int FUNC_25 (struct platform_device*,struct net_device*) ;
 int FUNC_26 (char*,int ,unsigned long,int ,int ) ;
 int FUNC_27 (struct net_device*) ;
 int FUNC_28 (int *) ;

__attribute__((used)) static int FUNC_29(struct platform_device *VAR_20)
{
 struct net_device *VAR_21;
 struct resource *VAR_22;
 struct ag71xx *VAR_23;
 struct ag71xx_platform_data *VAR_24;
 int VAR_25, VAR_26;

 VAR_24 = VAR_20->dev.platform_data;
 if (!VAR_24) {
  FUNC_10(&VAR_20->dev, "no platform data specified\n");
  return -VAR_9;

 }

 if (VAR_24->mii_bus_dev == ((void*)0) && VAR_24->phy_mask) {
  FUNC_10(&VAR_20->dev, "no MII bus device specified\n");
  return -VAR_7;
 }

 VAR_21 = FUNC_12(&VAR_20->dev, sizeof(*VAR_23));
 if (!VAR_21)
  return -VAR_8;

 if (!VAR_24->max_frame_len || !VAR_24->desc_pktlen_mask)
  return -VAR_7;

 VAR_22 = FUNC_23(VAR_20, VAR_12, 0);
 if (!VAR_22)
  return -VAR_7;

 FUNC_1(VAR_21, &VAR_20->dev);

 VAR_23 = FUNC_18(VAR_21);
 VAR_23->pdev = VAR_20;
 VAR_23->dev = VAR_21;
 VAR_23->msg_enable = FUNC_19(VAR_15,
     VAR_0);
 FUNC_28(&VAR_23->lock);

 VAR_22 = FUNC_24(VAR_20, VAR_12, "mac_base");
 if (!VAR_22) {
  FUNC_10(&VAR_20->dev, "no mac_base resource found\n");
  return -VAR_9;
 }

 VAR_23->mac_base = FUNC_13(&VAR_20->dev, VAR_22->start,
         VAR_22->end - VAR_22->start + 1);
 if (!VAR_23->mac_base)
  return -VAR_8;

 VAR_21->irq = FUNC_22(VAR_20, 0);
 VAR_26 = FUNC_14(&VAR_20->dev, VAR_21->irq, VAR_14,
          0x0, FUNC_11(&VAR_20->dev), VAR_21);
 if (VAR_26) {
  FUNC_10(&VAR_20->dev, "unable to request IRQ %d\n", VAR_21->irq);
  return VAR_26;
 }

 VAR_21->base_addr = (unsigned long)VAR_23->mac_base;
 VAR_21->netdev_ops = &VAR_16;
 VAR_21->ethtool_ops = &VAR_13;

 FUNC_0(&VAR_23->restart_work, VAR_19);

 FUNC_16(&VAR_23->oom_timer);
 VAR_23->oom_timer.data = (unsigned long) VAR_21;
 VAR_23->oom_timer.function = VAR_17;

 VAR_25 = VAR_5;
 VAR_23->rx_ring.order = FUNC_8(VAR_3);

 VAR_23->max_frame_len = VAR_24->max_frame_len;
 VAR_23->desc_pktlen_mask = VAR_24->desc_pktlen_mask;

 if (!VAR_24->is_ar724x && !VAR_24->is_ar91xx) {
  VAR_23->tx_ring.desc_split = VAR_6;
  VAR_25 *= VAR_4;
 }
 VAR_23->tx_ring.order = FUNC_8(VAR_25);

 VAR_23->stop_desc = FUNC_15(&VAR_20->dev,
     sizeof(struct ag71xx_desc),
     &VAR_23->stop_desc_dma, VAR_11);

 if (!VAR_23->stop_desc)
  return -VAR_8;

 VAR_23->stop_desc->data = 0;
 VAR_23->stop_desc->ctrl = 0;
 VAR_23->stop_desc->next = (u32) VAR_23->stop_desc_dma;

 FUNC_17(VAR_21->dev_addr, VAR_24->mac_addr, VAR_10);

 FUNC_20(VAR_21, &VAR_23->napi, VAR_18, VAR_1);

 FUNC_4(VAR_23);

 FUNC_9(VAR_23, VAR_2, 0);

 FUNC_5(VAR_23);

 FUNC_4(VAR_23);

 VAR_26 = FUNC_6(VAR_23);
 if (VAR_26)
  return VAR_26;

 VAR_26 = FUNC_3(VAR_23);
 if (VAR_26)
  goto err_phy_disconnect;

 FUNC_25(VAR_20, VAR_21);

 VAR_26 = FUNC_27(VAR_21);
 if (VAR_26) {
  FUNC_10(&VAR_20->dev, "unable to register net device\n");
  FUNC_25(VAR_20, ((void*)0));
  FUNC_2(VAR_23);
  goto err_phy_disconnect;
 }

 FUNC_26("%s: Atheros AG71xx at 0x%08lx, irq %d, mode: %s\n",
  VAR_21->name, (unsigned long) VAR_23->mac_base, VAR_21->irq,
  FUNC_21(VAR_24->phy_if_mode));

 return 0;

err_phy_disconnect:
 FUNC_7(VAR_23);
 return VAR_26;
}
