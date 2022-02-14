
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct tnl_ptk_info {int flags; int seq; } ;
struct sk_buff {TYPE_3__* dev; int protocol; scalar_t__ len; int pkt_type; } ;
struct pcpu_sw_netstats {int syncp; int rx_bytes; int rx_packets; } ;
struct metadata_dst {int dummy; } ;
struct iphdr {int tos; int saddr; int daddr; } ;
struct TYPE_5__ {int i_flags; } ;
struct ip_tunnel {int gro_cells; TYPE_3__* dev; int net; scalar_t__ i_seqno; TYPE_1__ parms; } ;
struct dst_entry {int dummy; } ;
typedef scalar_t__ s32 ;
struct TYPE_6__ {int rx_errors; int rx_frame_errors; int rx_fifo_errors; int rx_crc_errors; int multicast; } ;
struct TYPE_7__ {scalar_t__ type; int tstats; TYPE_2__ stats; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iphdr const*,struct sk_buff*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (struct dst_entry*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*,TYPE_3__*) ;
 int FUNC_5 (int *,struct sk_buff*) ;
 struct iphdr* FUNC_6 (struct sk_buff*) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (char*,int *,int ) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (struct sk_buff*,struct dst_entry*) ;
 int FUNC_13 (struct sk_buff*,int ,int ) ;
 int FUNC_14 (struct sk_buff*) ;
 int FUNC_15 (struct sk_buff*,int) ;
 struct pcpu_sw_netstats* FUNC_16 (int ) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 scalar_t__ FUNC_19 (int) ;

int FUNC_20(struct ip_tunnel *VAR_5, struct sk_buff *VAR_6,
    const struct tnl_ptk_info *VAR_7, struct metadata_dst *VAR_8,
    bool VAR_9)
{
 struct pcpu_sw_netstats *VAR_10;
 const struct iphdr *VAR_11 = FUNC_6(VAR_6);
 int VAR_12;
 if ((!(VAR_7->flags&VAR_3) && (VAR_5->parms.i_flags&VAR_3)) ||
      ((VAR_7->flags&VAR_3) && !(VAR_5->parms.i_flags&VAR_3))) {
  VAR_5->dev->stats.rx_crc_errors++;
  VAR_5->dev->stats.rx_errors++;
  goto drop;
 }

 if (VAR_5->parms.i_flags&VAR_4) {
  if (!(VAR_7->flags&VAR_4) ||
      (VAR_5->i_seqno && (s32)(FUNC_11(VAR_7->seq) - VAR_5->i_seqno) < 0)) {
   VAR_5->dev->stats.rx_fifo_errors++;
   VAR_5->dev->stats.rx_errors++;
   goto drop;
  }
  VAR_5->i_seqno = FUNC_11(VAR_7->seq) + 1;
 }

 FUNC_14(VAR_6);

 VAR_12 = FUNC_0(VAR_11, VAR_6);
 if (FUNC_19(VAR_12)) {
  if (VAR_9)
   FUNC_10("non-ECT from %pI4 with TOS=%#x\n",
     &VAR_11->saddr, VAR_11->tos);
  if (VAR_12 > 1) {
   ++VAR_5->dev->stats.rx_frame_errors;
   ++VAR_5->dev->stats.rx_errors;
   goto drop;
  }
 }

 VAR_10 = FUNC_16(VAR_5->dev->tstats);
 FUNC_17(&VAR_10->syncp);
 VAR_10->rx_packets++;
 VAR_10->rx_bytes += VAR_6->len;
 FUNC_18(&VAR_10->syncp);

 FUNC_15(VAR_6, !FUNC_9(VAR_5->net, FUNC_1(VAR_5->dev)));

 if (VAR_5->dev->type == VAR_0) {
  VAR_6->protocol = FUNC_4(VAR_6, VAR_5->dev);
  FUNC_13(VAR_6, FUNC_3(VAR_6), VAR_1);
 } else {
  VAR_6->dev = VAR_5->dev;
 }

 if (VAR_8)
  FUNC_12(VAR_6, (struct dst_entry *)VAR_8);

 FUNC_5(&VAR_5->gro_cells, VAR_6);
 return 0;

drop:
 if (VAR_8)
  FUNC_2((struct dst_entry *)VAR_8);
 FUNC_8(VAR_6);
 return 0;
}
