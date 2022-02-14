
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct vif_device {int flags; TYPE_2__* dev; int remote; int local; int bytes_out; int pkt_out; int link; } ;
struct sk_buff {scalar_t__ len; int dev; } ;
struct TYPE_8__ {scalar_t__ header_len; struct net_device* dev; } ;
struct rtable {TYPE_3__ dst; } ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct mr_table {struct vif_device* vif_table; } ;
struct iphdr {int frag_off; int tos; int daddr; } ;
struct flowi4 {int dummy; } ;
struct TYPE_9__ {int flags; } ;
struct TYPE_6__ {int tx_bytes; int tx_packets; } ;
struct TYPE_7__ {TYPE_1__ stats; } ;


 int VAR_0 ;
 TYPE_5__* FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct net*,int ) ;
 scalar_t__ FUNC_2 (struct rtable*) ;
 scalar_t__ FUNC_3 (struct net_device*) ;
 int VAR_5 ;
 int FUNC_4 (int ,int ,struct net*,int *,struct sk_buff*,int ,struct net_device*,int ) ;
 int VAR_6 ;
 int FUNC_5 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (struct iphdr*) ;
 int FUNC_8 (struct net*,struct sk_buff*,int ,int ) ;
 struct iphdr* FUNC_9 (struct sk_buff*) ;
 struct rtable* FUNC_10 (struct net*,struct flowi4*,int *,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_11 (struct rtable*) ;
 int FUNC_12 (struct mr_table*,struct sk_buff*,int,int ) ;
 int VAR_9 ;
 scalar_t__ FUNC_13 (struct sk_buff*,struct mr_table*,int,int) ;
 int FUNC_14 (struct sk_buff*) ;
 int FUNC_15 (int ) ;
 scalar_t__ FUNC_16 (struct sk_buff*,int) ;
 int FUNC_17 (struct sk_buff*) ;
 int FUNC_18 (struct sk_buff*,TYPE_3__*) ;

__attribute__((used)) static void FUNC_19(struct net *VAR_10, struct mr_table *VAR_11,
       int VAR_12, struct sk_buff *VAR_13, int VAR_14)
{
 const struct iphdr *VAR_15 = FUNC_9(VAR_13);
 struct vif_device *VAR_16 = &VAR_11->vif_table[VAR_14];
 struct net_device *VAR_17;
 struct rtable *VAR_18;
 struct flowi4 VAR_19;
 int VAR_20 = 0;

 if (!VAR_16->dev)
  goto out_free;

 if (VAR_16->flags & VAR_7) {
  VAR_16->pkt_out++;
  VAR_16->bytes_out += VAR_13->len;
  VAR_16->dev->stats.tx_bytes += VAR_13->len;
  VAR_16->dev->stats.tx_packets++;
  FUNC_12(VAR_11, VAR_13, VAR_14, VAR_0);
  goto out_free;
 }

 if (FUNC_13(VAR_13, VAR_11, VAR_12, VAR_14))
  goto out_free;

 if (VAR_16->flags & VAR_8) {
  VAR_18 = FUNC_10(VAR_10, &VAR_19, ((void*)0),
        VAR_16->remote, VAR_16->local,
        0, 0,
        VAR_1,
        FUNC_5(VAR_15->tos), VAR_16->link);
  if (FUNC_2(VAR_18))
   goto out_free;
  VAR_20 = sizeof(struct iphdr);
 } else {
  VAR_18 = FUNC_10(VAR_10, &VAR_19, ((void*)0), VAR_15->daddr, 0,
        0, 0,
        VAR_1,
        FUNC_5(VAR_15->tos), VAR_16->link);
  if (FUNC_2(VAR_18))
   goto out_free;
 }

 VAR_17 = VAR_18->dst.dev;

 if (VAR_13->len+VAR_20 > FUNC_6(&VAR_18->dst) && (FUNC_15(VAR_15->frag_off) & VAR_4)) {




  FUNC_1(VAR_10, VAR_3);
  FUNC_11(VAR_18);
  goto out_free;
 }

 VAR_20 += FUNC_3(VAR_17) + VAR_18->dst.header_len;

 if (FUNC_16(VAR_13, VAR_20)) {
  FUNC_11(VAR_18);
  goto out_free;
 }

 VAR_16->pkt_out++;
 VAR_16->bytes_out += VAR_13->len;

 FUNC_17(VAR_13);
 FUNC_18(VAR_13, &VAR_18->dst);
 FUNC_7(FUNC_9(VAR_13));




 if (VAR_16->flags & VAR_8) {
  FUNC_8(VAR_10, VAR_13, VAR_16->local, VAR_16->remote);

  VAR_16->dev->stats.tx_packets++;
  VAR_16->dev->stats.tx_bytes += VAR_13->len;
 }

 FUNC_0(VAR_13)->flags |= VAR_2;
 FUNC_4(VAR_5, VAR_6,
  VAR_10, ((void*)0), VAR_13, VAR_13->dev, VAR_17,
  VAR_9);
 return;

out_free:
 FUNC_14(VAR_13);
}
