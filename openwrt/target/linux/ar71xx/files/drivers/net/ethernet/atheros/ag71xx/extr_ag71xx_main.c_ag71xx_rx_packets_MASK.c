
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff_head {int dummy; } ;
struct sk_buff {int protocol; int ip_summed; struct net_device* dev; } ;
struct TYPE_5__ {int rx_bytes; int rx_dropped; int rx_packets; } ;
struct net_device {int name; TYPE_2__ stats; } ;
struct ag71xx_ring {int curr; int dirty; TYPE_3__* buf; int order; } ;
struct ag71xx_desc {unsigned int ctrl; } ;
struct ag71xx {unsigned int desc_pktlen_mask; int rx_buf_size; TYPE_1__* pdev; struct ag71xx_ring rx_ring; struct net_device* dev; } ;
struct TYPE_6__ {int * rx_buf; int dma_addr; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (char*,int ,int,int,int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 struct sk_buff* FUNC_2 (struct sk_buff_head*) ;
 int FUNC_3 (struct sk_buff_head*,struct sk_buff*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct ag71xx*) ;
 int FUNC_6 (struct ag71xx*) ;
 scalar_t__ FUNC_7 (struct ag71xx_desc*) ;
 scalar_t__ FUNC_8 (struct ag71xx*) ;
 int FUNC_9 (struct ag71xx*,struct sk_buff*,int) ;
 struct ag71xx_desc* FUNC_10 (struct ag71xx_ring*,unsigned int) ;
 int FUNC_11 (struct ag71xx*) ;
 int FUNC_12 (struct ag71xx*,int ,int ) ;
 struct sk_buff* FUNC_13 (int *,int ) ;
 int FUNC_14 (int *,int ,int ,int ) ;
 int FUNC_15 (struct sk_buff*,struct net_device*) ;
 int FUNC_16 (struct sk_buff*) ;
 int FUNC_17 (struct sk_buff*) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (struct sk_buff*,int) ;
 int FUNC_20 (struct sk_buff_head*) ;
 int FUNC_21 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_22(struct ag71xx *VAR_5, int VAR_6)
{
 struct net_device *VAR_7 = VAR_5->dev;
 struct ag71xx_ring *VAR_8 = &VAR_5->rx_ring;
 int VAR_9 = FUNC_5(VAR_5);
 unsigned int VAR_10 = VAR_5->desc_pktlen_mask;
 int VAR_11 = FUNC_0(VAR_8->order) - 1;
 int VAR_12 = FUNC_0(VAR_8->order);
 struct sk_buff_head VAR_13;
 struct sk_buff *VAR_14;
 int VAR_15 = 0;

 FUNC_1("%s: rx packets, limit=%d, curr=%u, dirty=%u\n",
   VAR_7->name, VAR_6, VAR_8->curr, VAR_8->dirty);

 FUNC_20(&VAR_13);

 while (VAR_15 < VAR_6) {
  unsigned int VAR_16 = VAR_8->curr & VAR_11;
  struct ag71xx_desc *VAR_17 = FUNC_10(VAR_8, VAR_16);
  int VAR_18;
  int VAR_19 = 0;

  if (FUNC_7(VAR_17))
   break;

  if ((VAR_8->dirty + VAR_12) == VAR_8->curr) {
   FUNC_4(0);
   break;
  }

  FUNC_12(VAR_5, VAR_0, VAR_4);

  VAR_18 = VAR_17->ctrl & VAR_10;
  VAR_18 -= VAR_3;

  FUNC_14(&VAR_5->pdev->dev, VAR_8->buf[VAR_16].dma_addr,
     VAR_5->rx_buf_size, VAR_2);

  VAR_7->stats.rx_packets++;
  VAR_7->stats.rx_bytes += VAR_18;

  VAR_14 = FUNC_13(VAR_8->buf[VAR_16].rx_buf, FUNC_6(VAR_5));
  if (!VAR_14) {
   FUNC_18(VAR_8->buf[VAR_16].rx_buf);
   goto next;
  }

  FUNC_21(VAR_14, VAR_9);
  FUNC_19(VAR_14, VAR_18);

  if (FUNC_8(VAR_5))
   VAR_19 = FUNC_9(VAR_5, VAR_14, VAR_18);

  if (VAR_19) {
   VAR_7->stats.rx_dropped++;
   FUNC_16(VAR_14);
  } else {
   VAR_14->dev = VAR_7;
   VAR_14->ip_summed = VAR_1;
   FUNC_3(&VAR_13, VAR_14);
  }

next:
  VAR_8->buf[VAR_16].rx_buf = ((void*)0);
  VAR_15++;

  VAR_8->curr++;
 }

 FUNC_11(VAR_5);

 while ((VAR_14 = FUNC_2(&VAR_13)) != ((void*)0)) {
  VAR_14->protocol = FUNC_15(VAR_14, VAR_7);
  FUNC_17(VAR_14);
 }

 FUNC_1("%s: rx finish, curr=%u, dirty=%u, done=%d\n",
  VAR_7->name, VAR_8->curr, VAR_8->dirty, VAR_15);

 return VAR_15;
}
