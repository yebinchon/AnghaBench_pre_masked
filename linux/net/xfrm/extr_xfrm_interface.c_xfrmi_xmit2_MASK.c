
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xfrm_state {scalar_t__ if_id; } ;
struct TYPE_4__ {scalar_t__ if_id; } ;
struct xfrm_if {int net; TYPE_2__ p; TYPE_1__* dev; } ;
struct sk_buff {unsigned int len; scalar_t__ protocol; int sk; struct net_device* dev; int ignore_df; } ;
struct pcpu_sw_netstats {unsigned int tx_bytes; int syncp; int tx_packets; } ;
struct net_device_stats {int tx_carrier_errors; int tx_aborted_errors; int tx_errors; int collisions; } ;
struct net_device {int tstats; int name; } ;
struct flowi {int dummy; } ;
struct dst_entry {struct net_device* dev; struct xfrm_state* xfrm; } ;
struct TYPE_3__ {struct net_device_stats stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct dst_entry*) ;
 int FUNC_1 (struct dst_entry*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct dst_entry*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct dst_entry*) ;
 int FUNC_6 (int ,int ,struct sk_buff*) ;
 int FUNC_7 (struct dst_entry*) ;
 int FUNC_8 (int) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (struct sk_buff*,int ,int ,int ) ;
 int FUNC_11 (struct sk_buff*,int ,int ,int) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (char*,int ) ;
 scalar_t__ FUNC_14 (int) ;
 struct xfrm_if* FUNC_15 (struct net_device*) ;
 struct dst_entry* FUNC_16 (struct sk_buff*) ;
 int FUNC_17 (struct sk_buff*,struct dst_entry*) ;
 int FUNC_18 (struct sk_buff*,int) ;
 struct pcpu_sw_netstats* FUNC_19 (int ) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 struct dst_entry* FUNC_22 (int ,struct dst_entry*,struct flowi*,int *,int ,scalar_t__) ;
 int FUNC_23 (struct sk_buff*,int) ;

__attribute__((used)) static int
FUNC_24(struct sk_buff *VAR_6, struct net_device *VAR_7, struct flowi *VAR_8)
{
 struct xfrm_if *VAR_9 = FUNC_15(VAR_7);
 struct net_device_stats *VAR_10 = &VAR_9->dev->stats;
 struct dst_entry *VAR_11 = FUNC_16(VAR_6);
 unsigned int VAR_12 = VAR_6->len;
 struct net_device *VAR_13;
 struct xfrm_state *VAR_14;
 int VAR_15 = -1;
 int VAR_16;

 if (!VAR_11)
  goto tx_err_link_failure;

 FUNC_3(VAR_11);
 VAR_11 = FUNC_22(VAR_9->net, VAR_11, VAR_8, ((void*)0), 0, VAR_9->p.if_id);
 if (FUNC_0(VAR_11)) {
  VAR_15 = FUNC_1(VAR_11);
  VAR_11 = ((void*)0);
  goto tx_err_link_failure;
 }

 VAR_14 = VAR_11->xfrm;
 if (!VAR_14)
  goto tx_err_link_failure;

 if (VAR_14->if_id != VAR_9->p.if_id)
  goto tx_err_link_failure;

 VAR_13 = VAR_11->dev;

 if (VAR_13 == VAR_7) {
  VAR_10->collisions++;
  FUNC_13("%s: Local routing loop detected!\n",
         VAR_7->name);
  goto tx_err_dst_release;
 }

 VAR_16 = FUNC_5(VAR_11);
 if (!VAR_6->ignore_df && VAR_6->len > VAR_16) {
  FUNC_18(VAR_6, VAR_16);

  if (VAR_6->protocol == FUNC_9(VAR_1)) {
   if (VAR_16 < VAR_5)
    VAR_16 = VAR_5;

   FUNC_11(VAR_6, VAR_2, 0, VAR_16);
  } else {
   FUNC_10(VAR_6, VAR_3, VAR_4,
      FUNC_8(VAR_16));
  }

  FUNC_7(VAR_11);
  return -VAR_0;
 }

 FUNC_23(VAR_6, !FUNC_12(VAR_9->net, FUNC_2(VAR_7)));
 FUNC_17(VAR_6, VAR_11);
 VAR_6->dev = VAR_13;

 VAR_15 = FUNC_6(VAR_9->net, VAR_6->sk, VAR_6);
 if (FUNC_14(VAR_15) == 0) {
  struct pcpu_sw_netstats *VAR_17 = FUNC_19(VAR_7->tstats);

  FUNC_20(&VAR_17->syncp);
  VAR_17->tx_bytes += VAR_12;
  VAR_17->tx_packets++;
  FUNC_21(&VAR_17->syncp);
 } else {
  VAR_10->tx_errors++;
  VAR_10->tx_aborted_errors++;
 }

 return 0;
tx_err_link_failure:
 VAR_10->tx_carrier_errors++;
 FUNC_4(VAR_6);
tx_err_dst_release:
 FUNC_7(VAR_11);
 return VAR_15;
}
