
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct resource {int dummy; } ;
struct TYPE_13__ {int of_node; } ;
struct platform_device {TYPE_3__ dev; } ;
struct of_device_id {scalar_t__ data; } ;
struct net_device {unsigned long base_addr; scalar_t__ irq; int vlan_features; int hw_features; int features; int max_mtu; int * netdev_ops; } ;
struct fe_soc_data {int (* init_data ) (struct fe_soc_data*,struct net_device*) ;scalar_t__* reg_table; } ;
struct TYPE_12__ {int rx_ring_size; int frag_size; int rx_buf_size; } ;
struct TYPE_11__ {int tx_ring_size; } ;
struct fe_priv {int flags; int rx_napi; TYPE_2__ rx_ring; TYPE_1__ tx_ring; TYPE_4__* hw_stats; int pending_work; int msg_enable; struct fe_soc_data* soc; TYPE_3__* dev; struct net_device* netdev; int switch_np; int sysclk; int page_lock; } ;
struct clk {int dummy; } ;
struct TYPE_14__ {int syncp; int stats_lock; } ;


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
 size_t VAR_10 ;
 size_t VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int *,int ) ;
 int VAR_13 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct clk*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 void* VAR_17 ;
 int FUNC_3 (struct net_device*,TYPE_3__*) ;
 struct net_device* FUNC_4 (int) ;
 int FUNC_5 (struct clk*) ;
 int FUNC_6 (TYPE_3__*,char*) ;
 int FUNC_7 (TYPE_3__*) ;
 struct clk* FUNC_8 (TYPE_3__*,int *) ;
 struct clk* FUNC_9 (TYPE_3__*,struct resource*) ;
 int FUNC_10 (TYPE_3__*,struct clk*) ;
 struct clk* VAR_18 ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__* VAR_23 ;
 int FUNC_13 (struct net_device*) ;
 int FUNC_14 (struct net_device*) ;
 TYPE_4__* FUNC_15 (int,int ) ;
 struct fe_priv* FUNC_16 (struct net_device*) ;
 int FUNC_17 (struct fe_priv*,int ,struct net_device*,char*,unsigned long,scalar_t__) ;
 int FUNC_18 (int ,int ) ;
 int FUNC_19 (struct net_device*,int *,int ,int) ;
 int VAR_24 ;
 struct of_device_id* FUNC_20 (int ,TYPE_3__*) ;
 int FUNC_21 (int ,char*,int ) ;
 scalar_t__ FUNC_22 (struct platform_device*,int ) ;
 struct resource* FUNC_23 (struct platform_device*,int ,int ) ;
 int FUNC_24 (struct platform_device*,struct net_device*) ;
 int VAR_25 ;
 int FUNC_25 (struct net_device*) ;
 int FUNC_26 (int *) ;
 int FUNC_27 (struct fe_soc_data*,struct net_device*) ;
 int FUNC_28 (int *) ;

__attribute__((used)) static int FUNC_29(struct platform_device *VAR_26)
{
 struct resource *VAR_27 = FUNC_23(VAR_26, VAR_13, 0);
 const struct of_device_id *VAR_28;
 struct fe_soc_data *VAR_29;
 struct net_device *VAR_30;
 struct fe_priv *VAR_31;
 struct clk *VAR_32;
 int VAR_33, VAR_34;

 FUNC_7(&VAR_26->dev);

 VAR_28 = FUNC_20(VAR_24, &VAR_26->dev);
 VAR_29 = (struct fe_soc_data *)VAR_28->data;

 if (VAR_29->reg_table)
  VAR_23 = VAR_29->reg_table;
 else
  VAR_29->reg_table = VAR_23;

 VAR_18 = FUNC_9(&VAR_26->dev, VAR_27);
 if (FUNC_2(VAR_18)) {
  VAR_33 = -VAR_1;
  goto err_out;
 }

 VAR_30 = FUNC_4(sizeof(*VAR_31));
 if (!VAR_30) {
  FUNC_6(&VAR_26->dev, "alloc_etherdev failed\n");
  VAR_33 = -VAR_3;
  goto err_iounmap;
 }

 FUNC_3(VAR_30, &VAR_26->dev);
 VAR_30->netdev_ops = &VAR_20;
 VAR_30->base_addr = (unsigned long)VAR_18;

 VAR_30->irq = FUNC_22(VAR_26, 0);
 if (VAR_30->irq < 0) {
  FUNC_6(&VAR_26->dev, "no IRQ resource found\n");
  VAR_33 = -VAR_4;
  goto err_free_dev;
 }

 if (VAR_29->init_data)
  VAR_29->init_data(VAR_29, VAR_30);
 VAR_30->vlan_features = VAR_30->hw_features &
    ~(VAR_16 |
      VAR_15);
 VAR_30->features |= VAR_30->hw_features;

 if (FUNC_1(VAR_0))
  VAR_30->max_mtu = 2048;


 if (VAR_23[VAR_11])
  VAR_30->features |= VAR_14;

 VAR_31 = FUNC_16(VAR_30);
 FUNC_26(&VAR_31->page_lock);
 if (VAR_23[VAR_10]) {
  VAR_31->hw_stats = FUNC_15(sizeof(*VAR_31->hw_stats), VAR_12);
  if (!VAR_31->hw_stats) {
   VAR_33 = -VAR_3;
   goto err_free_dev;
  }
  FUNC_26(&VAR_31->hw_stats->stats_lock);
 }

 VAR_32 = FUNC_8(&VAR_26->dev, ((void*)0));
 if (!FUNC_2(VAR_32)) {
  VAR_31->sysclk = FUNC_5(VAR_32);
 } else if ((VAR_31->flags & VAR_7)) {
  FUNC_6(&VAR_26->dev, "this soc needs a clk for calibration\n");
  VAR_33 = -VAR_4;
  goto err_free_dev;
 }

 VAR_31->switch_np = FUNC_21(VAR_26->dev.of_node, "mediatek,switch", 0);
 if ((VAR_31->flags & VAR_8) && !VAR_31->switch_np) {
  FUNC_6(&VAR_26->dev, "failed to read switch phandle\n");
  VAR_33 = -VAR_2;
  goto err_free_dev;
 }

 VAR_31->netdev = VAR_30;
 VAR_31->dev = &VAR_26->dev;
 VAR_31->soc = VAR_29;
 VAR_31->msg_enable = FUNC_18(VAR_19, VAR_6);
 VAR_31->rx_ring.frag_size = FUNC_12(VAR_5);
 VAR_31->rx_ring.rx_buf_size = FUNC_11(VAR_31->rx_ring.frag_size);
 VAR_31->tx_ring.tx_ring_size = VAR_17;
 VAR_31->rx_ring.rx_ring_size = VAR_17;
 FUNC_0(&VAR_31->pending_work, VAR_21);
 FUNC_28(&VAR_31->hw_stats->syncp);

 VAR_34 = 16;
 if (VAR_31->flags & VAR_9) {
  VAR_34 *= 4;
  VAR_31->tx_ring.tx_ring_size *= 4;
  VAR_31->rx_ring.rx_ring_size *= 4;
 }
 FUNC_19(VAR_30, &VAR_31->rx_napi, VAR_22, VAR_34);
 FUNC_13(VAR_30);

 VAR_33 = FUNC_25(VAR_30);
 if (VAR_33) {
  FUNC_6(&VAR_26->dev, "error bringing up device\n");
  goto err_free_dev;
 }

 FUNC_24(VAR_26, VAR_30);

 FUNC_17(VAR_31, VAR_25, VAR_30, "mediatek frame engine at 0x%08lx, irq %d\n",
     VAR_30->base_addr, VAR_30->irq);

 return 0;

err_free_dev:
 FUNC_14(VAR_30);
err_iounmap:
 FUNC_10(&VAR_26->dev, VAR_18);
err_out:
 return VAR_33;
}
