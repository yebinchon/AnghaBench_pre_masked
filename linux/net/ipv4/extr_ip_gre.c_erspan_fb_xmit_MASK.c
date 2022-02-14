
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sk_buff {int len; scalar_t__ protocol; } ;
struct TYPE_7__ {int tx_dropped; } ;
struct net_device {int mtu; int hard_header_len; TYPE_2__ stats; int needed_headroom; } ;
struct ip_tunnel_key {int tun_flags; int tun_id; } ;
struct ip_tunnel_info {int mode; int options_len; struct ip_tunnel_key key; } ;
struct ip_tunnel {int o_seqno; } ;
struct TYPE_10__ {int dir; } ;
struct TYPE_6__ {TYPE_5__ md2; int index; } ;
struct erspan_metadata {int version; TYPE_1__ u; } ;
typedef scalar_t__ __be16 ;
struct TYPE_9__ {int tot_len; } ;
struct TYPE_8__ {int payload_len; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct sk_buff*,int ,int ,int,int) ;
 int FUNC_1 (struct sk_buff*,int ,int ,int ,int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (struct sk_buff*,int,int ,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 TYPE_4__* FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*,struct net_device*,int ,int) ;
 scalar_t__ FUNC_10 (struct ip_tunnel_info*) ;
 struct erspan_metadata* FUNC_11 (struct ip_tunnel_info*) ;
 TYPE_3__* FUNC_12 (struct sk_buff*) ;
 int FUNC_13 (struct sk_buff*) ;
 struct ip_tunnel* FUNC_14 (struct net_device*) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (struct sk_buff*,int) ;
 scalar_t__ FUNC_18 (struct sk_buff*,int ) ;
 int FUNC_19 (struct sk_buff*) ;
 int FUNC_20 (struct sk_buff*) ;
 int FUNC_21 (struct sk_buff*) ;
 struct ip_tunnel_info* FUNC_22 (struct sk_buff*) ;
 int FUNC_23 (int ) ;
 scalar_t__ FUNC_24 (int) ;

__attribute__((used)) static void FUNC_25(struct sk_buff *VAR_9, struct net_device *VAR_10)
{
 struct ip_tunnel *VAR_11 = FUNC_14(VAR_10);
 struct ip_tunnel_info *VAR_12;
 const struct ip_tunnel_key *VAR_13;
 struct erspan_metadata *VAR_14;
 bool VAR_15 = 0;
 __be16 VAR_16;
 int VAR_17;
 int VAR_18;
 int VAR_19;
 int VAR_20;

 VAR_12 = FUNC_22(VAR_9);
 if (FUNC_24(!VAR_12 || !(VAR_12->mode & VAR_6) ||
       FUNC_10(VAR_12) != VAR_0))
  goto err_free_skb;

 VAR_13 = &VAR_12->key;
 if (!(VAR_12->key.tun_flags & VAR_7))
  goto err_free_skb;
 if (VAR_12->options_len < sizeof(*VAR_14))
  goto err_free_skb;
 VAR_14 = FUNC_11(VAR_12);


 VAR_18 = VAR_14->version;
 VAR_17 = 8 + FUNC_2(VAR_18);

 if (FUNC_18(VAR_9, VAR_10->needed_headroom))
  goto err_free_skb;

 if (FUNC_5(VAR_9, 0))
  goto err_free_skb;

 if (VAR_9->len > VAR_10->mtu + VAR_10->hard_header_len) {
  FUNC_17(VAR_9, VAR_10->mtu + VAR_10->hard_header_len);
  VAR_15 = 1;
 }

 VAR_19 = FUNC_20(VAR_9) - FUNC_19(VAR_9);
 if (VAR_9->protocol == FUNC_7(VAR_3) &&
     (FUNC_16(FUNC_8(VAR_9)->tot_len) > VAR_9->len - VAR_19))
  VAR_15 = 1;

 VAR_20 = FUNC_21(VAR_9) - FUNC_19(VAR_9);
 if (VAR_9->protocol == FUNC_7(VAR_4) &&
     (FUNC_16(FUNC_12(VAR_9)->payload_len) > VAR_9->len - VAR_20))
  VAR_15 = 1;

 if (VAR_18 == 1) {
  FUNC_0(VAR_9, FUNC_15(FUNC_23(VAR_13->tun_id)),
        FUNC_15(VAR_14->u.index), VAR_15, 1);
  VAR_16 = FUNC_7(VAR_1);
 } else if (VAR_18 == 2) {
  FUNC_1(VAR_9,
           FUNC_15(FUNC_23(VAR_13->tun_id)),
           VAR_14->u.md2.dir,
           FUNC_3(&VAR_14->u.md2),
           VAR_15, 1);
  VAR_16 = FUNC_7(VAR_2);
 } else {
  goto err_free_skb;
 }

 FUNC_4(VAR_9, 8, VAR_8,
    VAR_16, 0, FUNC_6(VAR_11->o_seqno++));

 FUNC_9(VAR_9, VAR_10, VAR_5, VAR_17);

 return;

err_free_skb:
 FUNC_13(VAR_9);
 VAR_10->stats.tx_dropped++;
}
