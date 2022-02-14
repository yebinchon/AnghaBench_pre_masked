
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_2__ {int tx_dropped; } ;
struct net_device {TYPE_1__ stats; int needed_headroom; } ;
struct ip_tunnel_key {int tun_flags; int tun_id; } ;
struct ip_tunnel_info {int mode; struct ip_tunnel_key key; } ;
struct ip_tunnel {int o_seqno; } ;
typedef int __be16 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sk_buff*,int,int,int,int ,int ) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct sk_buff*,struct net_device*,int ,int) ;
 scalar_t__ FUNC_5 (struct ip_tunnel_info*) ;
 int FUNC_6 (struct sk_buff*) ;
 struct ip_tunnel* FUNC_7 (struct net_device*) ;
 scalar_t__ FUNC_8 (struct sk_buff*,int ) ;
 struct ip_tunnel_info* FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static void FUNC_12(struct sk_buff *VAR_6, struct net_device *VAR_7,
   __be16 VAR_8)
{
 struct ip_tunnel *VAR_9 = FUNC_7(VAR_7);
 struct ip_tunnel_info *VAR_10;
 const struct ip_tunnel_key *VAR_11;
 int VAR_12;
 __be16 VAR_13;

 VAR_10 = FUNC_9(VAR_6);
 if (FUNC_11(!VAR_10 || !(VAR_10->mode & VAR_2) ||
       FUNC_5(VAR_10) != VAR_0))
  goto err_free_skb;

 VAR_11 = &VAR_10->key;
 VAR_12 = FUNC_1(VAR_11->tun_flags);

 if (FUNC_8(VAR_6, VAR_7->needed_headroom))
  goto err_free_skb;


 if (FUNC_2(VAR_6, !!(VAR_10->key.tun_flags & VAR_3)))
  goto err_free_skb;

 VAR_13 = VAR_10->key.tun_flags &
  (VAR_3 | VAR_4 | VAR_5);
 FUNC_0(VAR_6, VAR_12, VAR_13, VAR_8,
    FUNC_10(VAR_10->key.tun_id),
    (VAR_13 & VAR_5) ? FUNC_3(VAR_9->o_seqno++) : 0);

 FUNC_4(VAR_6, VAR_7, VAR_1, VAR_12);

 return;

err_free_skb:
 FUNC_6(VAR_6);
 VAR_7->stats.tx_dropped++;
}
