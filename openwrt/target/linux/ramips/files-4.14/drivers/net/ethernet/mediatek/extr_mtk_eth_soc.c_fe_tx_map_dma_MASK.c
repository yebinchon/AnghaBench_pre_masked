
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u16 ;
struct skb_frag_struct {int page_offset; } ;
struct sk_buff {scalar_t__ ip_summed; int xmit_more; int len; } ;
struct net_device {int dev; } ;
struct fe_tx_ring {size_t tx_next_idx; scalar_t__ tx_thresh; TYPE_2__* tx_dma; struct fe_tx_buf* tx_buf; } ;
struct fe_tx_buf {struct sk_buff* skb; } ;
struct fe_priv {TYPE_1__* soc; } ;
struct TYPE_9__ {int txd4; int txd2; } ;
struct fe_map_state {size_t ring_idx; int def_txd4; int i; TYPE_4__ txd; int * dev; } ;
struct TYPE_10__ {int gso_type; unsigned int nr_frags; struct skb_frag_struct* frags; int gso_size; } ;
struct TYPE_8__ {int check; } ;
struct TYPE_7__ {int txd2; } ;
struct TYPE_6__ {int (* tx_dma ) (TYPE_4__*) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_2 (struct fe_tx_ring*) ;
 struct sk_buff* FUNC_3 (struct sk_buff*,struct sk_buff*) ;
 int FUNC_4 (size_t,int ) ;
 scalar_t__ FUNC_5 (struct fe_tx_ring*,struct fe_map_state*,int ,int ,int ) ;
 scalar_t__ FUNC_6 (struct fe_tx_ring*,struct fe_map_state*,struct sk_buff*) ;
 int FUNC_7 (struct fe_tx_ring*,struct fe_map_state*) ;
 int FUNC_8 (int *,struct fe_tx_buf*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct net_device*,int ) ;
 struct fe_priv* FUNC_11 (struct net_device*) ;
 int FUNC_12 (struct net_device*,int ) ;
 int FUNC_13 (struct net_device*) ;
 int FUNC_14 (struct net_device*) ;
 int FUNC_15 (struct fe_priv*,int ,struct net_device*,char*) ;
 scalar_t__ FUNC_16 (int ) ;
 scalar_t__ FUNC_17 (struct sk_buff*,int ) ;
 int FUNC_18 (struct skb_frag_struct*) ;
 int FUNC_19 (struct skb_frag_struct*) ;
 scalar_t__ FUNC_20 (struct sk_buff*) ;
 scalar_t__ FUNC_21 (struct sk_buff*) ;
 TYPE_5__* FUNC_22 (struct sk_buff*) ;
 int FUNC_23 (struct sk_buff*) ;
 int FUNC_24 (struct sk_buff*) ;
 scalar_t__ FUNC_25 (struct sk_buff*) ;
 int FUNC_26 () ;
 int FUNC_27 (TYPE_4__*) ;
 TYPE_3__* FUNC_28 (struct sk_buff*) ;
 int VAR_14 ;
 scalar_t__ FUNC_29 (int) ;
 int FUNC_30 () ;

__attribute__((used)) static int FUNC_31(struct sk_buff *VAR_15, struct net_device *VAR_16,
    int VAR_17, struct fe_tx_ring *VAR_18)
{
 struct fe_priv *VAR_19 = FUNC_11(VAR_16);
 struct fe_map_state VAR_20 = {
  .dev = &VAR_16->dev,
  .ring_idx = VAR_18->tx_next_idx,
 };
 struct sk_buff *VAR_21 = VAR_15;
 struct fe_tx_buf *VAR_22;
 unsigned int VAR_23;
 int VAR_24, VAR_25;


 if (VAR_19->soc->tx_dma)
  VAR_19->soc->tx_dma(&VAR_20.txd);
 else
  VAR_20.txd.txd4 = VAR_7;
 VAR_20.def_txd4 = VAR_20.txd.txd4;


 if (VAR_15->ip_summed == VAR_0)
  VAR_20.txd.txd4 |= VAR_5;


 if (FUNC_25(VAR_15)) {
  u16 VAR_26 = FUNC_24(VAR_15);

  if (FUNC_0(VAR_1))
   VAR_20.txd.txd4 |= VAR_9 | VAR_26;
  else
   VAR_20.txd.txd4 |= VAR_8 |
    ((VAR_26 >> VAR_13) << 4) |
    (VAR_26 & 0xF);
 }


 if (FUNC_21(VAR_15)) {
  if (FUNC_17(VAR_15, 0)) {
   FUNC_15(VAR_19, VAR_14, VAR_16,
       "GSO expand head fail.\n");
   goto err_out;
  }
  if (FUNC_22(VAR_15)->gso_type &
    (VAR_3 | VAR_4)) {
   VAR_20.txd.txd4 |= VAR_12;
   FUNC_28(VAR_15)->check = FUNC_9(FUNC_22(VAR_15)->gso_size);
  }
 }

next_frag:
 if (FUNC_20(VAR_15) && FUNC_6(VAR_18, &VAR_20, VAR_15))
  goto err_dma;


 VAR_23 = FUNC_22(VAR_15)->nr_frags;
 for (VAR_24 = 0; VAR_24 < VAR_23; VAR_24++) {
  struct skb_frag_struct *VAR_27;

  VAR_27 = &FUNC_22(VAR_15)->frags[VAR_24];
  if (FUNC_5(VAR_18, &VAR_20, FUNC_18(VAR_27),
           VAR_27->page_offset, FUNC_19(VAR_27)))
   goto err_dma;
 }

 VAR_15 = FUNC_3(VAR_21, VAR_15);
 if (VAR_15)
  goto next_frag;


 if (VAR_20.i & 0x1)
  VAR_20.txd.txd2 |= VAR_10;
 else
  VAR_20.txd.txd2 |= VAR_11;


 VAR_22 = &VAR_18->tx_buf[VAR_20.ring_idx];
 VAR_22->skb = VAR_21;

 FUNC_12(VAR_16, VAR_21->len);
 FUNC_23(VAR_21);

 FUNC_7(VAR_18, &VAR_20);
 VAR_18->tx_next_idx = VAR_20.ring_idx;




 FUNC_30();
 if (FUNC_29(FUNC_2(VAR_18) <= VAR_18->tx_thresh)) {
  FUNC_13(VAR_16);
  FUNC_26();
  if (FUNC_29(FUNC_2(VAR_18) > VAR_18->tx_thresh))
   FUNC_14(VAR_16);
 }

 if (FUNC_16(FUNC_10(VAR_16, 0)) || !VAR_21->xmit_more)
  FUNC_4(VAR_18->tx_next_idx, VAR_2);

 return 0;

err_dma:
 VAR_25 = VAR_18->tx_next_idx;
 for (VAR_24 = 0; VAR_24 < VAR_17; VAR_24++) {

  FUNC_8(&VAR_16->dev, &VAR_18->tx_buf[VAR_25]);
  VAR_18->tx_dma[VAR_25].txd2 = VAR_6;

  VAR_25 = FUNC_1(VAR_25);
 }



 FUNC_30();

err_out:
 return -1;
}
