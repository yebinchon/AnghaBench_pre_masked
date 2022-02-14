
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; } ;
struct TYPE_4__ {int tx_dropped; } ;
struct net_device {scalar_t__ mtu; scalar_t__ hard_header_len; TYPE_2__ stats; int needed_headroom; } ;
struct TYPE_3__ {int iph; int o_flags; int o_key; } ;
struct ip_tunnel {int erspan_ver; TYPE_1__ parms; int hwid; int dir; int index; scalar_t__ collect_md; } ;
typedef int netdev_tx_t ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sk_buff*,struct net_device*,int *,int ) ;
 int FUNC_1 (struct sk_buff*,int ,int ,int,int) ;
 int FUNC_2 (struct sk_buff*,int ,int ,int ,int,int) ;
 int FUNC_3 (struct sk_buff*,struct net_device*) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct sk_buff*) ;
 struct ip_tunnel* FUNC_7 (struct net_device*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct sk_buff*,scalar_t__) ;
 scalar_t__ FUNC_11 (struct sk_buff*,int ) ;

__attribute__((used)) static netdev_tx_t FUNC_12(struct sk_buff *VAR_4,
          struct net_device *VAR_5)
{
 struct ip_tunnel *VAR_6 = FUNC_7(VAR_5);
 bool VAR_7 = 0;
 __be16 VAR_8;

 if (!FUNC_9(VAR_4))
  goto free_skb;

 if (VAR_6->collect_md) {
  FUNC_3(VAR_4, VAR_5);
  return VAR_2;
 }

 if (FUNC_4(VAR_4, 0))
  goto free_skb;

 if (FUNC_11(VAR_4, VAR_5->needed_headroom))
  goto free_skb;

 if (VAR_4->len > VAR_5->mtu + VAR_5->hard_header_len) {
  FUNC_10(VAR_4, VAR_5->mtu + VAR_5->hard_header_len);
  VAR_7 = 1;
 }


 if (VAR_6->erspan_ver == 1) {
  FUNC_1(VAR_4, FUNC_8(VAR_6->parms.o_key),
        VAR_6->index,
        VAR_7, 1);
  VAR_8 = FUNC_5(VAR_0);
 } else if (VAR_6->erspan_ver == 2) {
  FUNC_2(VAR_4, FUNC_8(VAR_6->parms.o_key),
           VAR_6->dir, VAR_6->hwid,
           VAR_7, 1);
  VAR_8 = FUNC_5(VAR_1);
 } else {
  goto free_skb;
 }

 VAR_6->parms.o_flags &= ~VAR_3;
 FUNC_0(VAR_4, VAR_5, &VAR_6->parms.iph, VAR_8);
 return VAR_2;

free_skb:
 FUNC_6(VAR_4);
 VAR_5->stats.tx_dropped++;
 return VAR_2;
}
