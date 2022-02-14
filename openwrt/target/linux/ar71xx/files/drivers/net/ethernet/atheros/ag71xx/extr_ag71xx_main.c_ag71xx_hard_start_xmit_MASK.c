
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int len; int data; } ;
struct TYPE_8__ {int tx_dropped; } ;
struct net_device {TYPE_4__ stats; int name; } ;
struct ag71xx_ring {int curr; int dirty; scalar_t__ desc_split; TYPE_1__* buf; int order; } ;
struct ag71xx_desc {int ctrl; } ;
struct ag71xx {int desc_pktlen_mask; TYPE_3__* pdev; TYPE_2__* dev; struct ag71xx_ring tx_ring; } ;
typedef int netdev_tx_t ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_7__ {int dev; } ;
struct TYPE_6__ {int name; } ;
struct TYPE_5__ {int len; struct sk_buff* skb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct ag71xx*,struct sk_buff*) ;
 int FUNC_3 (struct ag71xx_ring*,int ,int) ;
 scalar_t__ FUNC_4 (struct ag71xx*) ;
 struct ag71xx_desc* FUNC_5 (struct ag71xx_ring*,int) ;
 int FUNC_6 (struct ag71xx*,int ,int ) ;
 int FUNC_7 (struct sk_buff*) ;
 scalar_t__ FUNC_8 (int *,int ,int,int ) ;
 int FUNC_9 (int *,scalar_t__,int,int ) ;
 struct ag71xx* FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct net_device*,int) ;
 int FUNC_12 (struct net_device*) ;
 int FUNC_13 (struct sk_buff*) ;
 int FUNC_14 () ;

__attribute__((used)) static netdev_tx_t FUNC_15(struct sk_buff *VAR_6,
       struct net_device *VAR_7)
{
 struct ag71xx *VAR_8 = FUNC_10(VAR_7);
 struct ag71xx_ring *VAR_9 = &VAR_8->tx_ring;
 int VAR_10 = FUNC_0(VAR_9->order) - 1;
 int VAR_11 = FUNC_0(VAR_9->order);
 struct ag71xx_desc *VAR_12;
 dma_addr_t VAR_13;
 int VAR_14, VAR_15, VAR_16;

 if (FUNC_4(VAR_8))
  FUNC_2(VAR_8, VAR_6);

 if (VAR_6->len <= 4) {
  FUNC_1("%s: packet len is too small\n", VAR_8->dev->name);
  goto err_drop;
 }

 VAR_13 = FUNC_8(&VAR_8->pdev->dev, VAR_6->data, VAR_6->len,
      VAR_3);

 VAR_14 = VAR_9->curr & VAR_10;
 VAR_12 = FUNC_5(VAR_9, VAR_14);


 VAR_15 = FUNC_3(VAR_9, (u32) VAR_13, VAR_6->len & VAR_8->desc_pktlen_mask);
 if (VAR_15 < 0)
  goto err_drop_unmap;

 VAR_14 = (VAR_9->curr + VAR_15 - 1) & VAR_10;
 VAR_9->buf[VAR_14].len = VAR_6->len;
 VAR_9->buf[VAR_14].skb = VAR_6;

 FUNC_11(VAR_7, VAR_6->len);

 FUNC_13(VAR_6);

 VAR_12->ctrl &= ~VAR_2;
 VAR_9->curr += VAR_15;


 FUNC_14();

 VAR_16 = 2;
 if (VAR_9->desc_split)
     VAR_16 *= VAR_1;

 if (VAR_9->curr - VAR_9->dirty >= VAR_11 - VAR_16) {
  FUNC_1("%s: tx queue full\n", VAR_7->name);
  FUNC_12(VAR_7);
 }

 FUNC_1("%s: packet injected into TX queue\n", VAR_8->dev->name);


 FUNC_6(VAR_8, VAR_0, VAR_5);

 return VAR_4;

err_drop_unmap:
 FUNC_9(&VAR_8->pdev->dev, VAR_13, VAR_6->len, VAR_3);

err_drop:
 VAR_7->stats.tx_dropped++;

 FUNC_7(VAR_6);
 return VAR_4;
}
