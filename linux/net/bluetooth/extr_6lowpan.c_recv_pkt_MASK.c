
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; void* pkt_type; void* protocol; struct net_device* dev; } ;
struct TYPE_2__ {int rx_dropped; int rx_packets; int rx_bytes; } ;
struct net_device {scalar_t__ type; TYPE_1__ stats; } ;
struct lowpan_peer {int dummy; } ;
struct ipv6hdr {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 void* VAR_6 ;
 int FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (struct sk_buff*,struct net_device*) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (struct sk_buff*,struct net_device*,struct lowpan_peer*) ;
 int FUNC_5 (struct sk_buff*) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (struct net_device*) ;
 struct sk_buff* FUNC_9 (struct sk_buff*,int ) ;
 struct sk_buff* FUNC_10 (struct sk_buff*,scalar_t__,int ,int ) ;
 int * FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (struct sk_buff*,int) ;
 int FUNC_13 (struct sk_buff*) ;
 int FUNC_14 (struct sk_buff*,int) ;
 struct sk_buff* FUNC_15 (struct sk_buff*,int ) ;
 int FUNC_16 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_17(struct sk_buff *VAR_7, struct net_device *VAR_8,
      struct lowpan_peer *VAR_9)
{
 struct sk_buff *VAR_10;
 int VAR_11;

 if (!FUNC_8(VAR_8))
  goto drop;

 if (VAR_8->type != VAR_0 || !VAR_7->len)
  goto drop;

 FUNC_13(VAR_7);

 VAR_7 = FUNC_15(VAR_7, VAR_2);
 if (!VAR_7)
  goto drop;


 if (FUNC_7(*FUNC_11(VAR_7))) {

  FUNC_12(VAR_7, 1);




  VAR_10 = FUNC_10(VAR_7, VAR_5 - 1,
         FUNC_16(VAR_7), VAR_2);
  if (!VAR_10)
   goto drop;

  VAR_10->protocol = FUNC_3(VAR_1);
  VAR_10->pkt_type = VAR_6;
  VAR_10->dev = VAR_8;

  FUNC_14(VAR_10, sizeof(struct ipv6hdr));

  if (FUNC_2(VAR_10, VAR_8) != VAR_4) {
   FUNC_5(VAR_10);
   goto drop;
  }

  VAR_8->stats.rx_bytes += VAR_7->len;
  VAR_8->stats.rx_packets++;

  FUNC_1(VAR_10);
  FUNC_1(VAR_7);
 } else if (FUNC_6(*FUNC_11(VAR_7))) {
  VAR_10 = FUNC_9(VAR_7, VAR_2);
  if (!VAR_10)
   goto drop;

  VAR_10->dev = VAR_8;

  VAR_11 = FUNC_4(VAR_10, VAR_8, VAR_9);
  if (VAR_11 < 0) {
   FUNC_0("iphc_decompress failed: %d", VAR_11);
   FUNC_5(VAR_10);
   goto drop;
  }

  VAR_10->protocol = FUNC_3(VAR_1);
  VAR_10->pkt_type = VAR_6;

  if (FUNC_2(VAR_10, VAR_8)
    != VAR_4) {
   FUNC_5(VAR_10);
   goto drop;
  }

  VAR_8->stats.rx_bytes += VAR_7->len;
  VAR_8->stats.rx_packets++;

  FUNC_1(VAR_10);
  FUNC_1(VAR_7);
 } else {
  FUNC_0("unknown packet type");
  goto drop;
 }

 return VAR_4;

drop:
 VAR_8->stats.rx_dropped++;
 return VAR_3;
}
