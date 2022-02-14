
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {TYPE_3__* dev; int mark; } ;
struct net {int dummy; } ;
struct ipv6hdr {scalar_t__ nexthdr; int saddr; int daddr; } ;
struct TYPE_6__ {int tun_id; } ;
struct ip_tunnel_info {int mode; TYPE_2__ key; } ;
struct TYPE_5__ {int tun_id; } ;
struct flowi6 {scalar_t__ flowi6_proto; int mp_hash; TYPE_1__ flowi6_tun_key; int flowi6_mark; int flowlabel; int saddr; int daddr; int flowi6_iif; } ;
struct flow_keys {int dummy; } ;
struct TYPE_7__ {int ifindex; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct net* FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (struct net*,struct sk_buff*,struct flowi6*,struct flow_keys*) ;
 int FUNC_2 (struct ipv6hdr const*) ;
 int FUNC_3 (struct net*,TYPE_3__*,struct flowi6*,struct sk_buff*,int) ;
 struct ipv6hdr* FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct net*,struct flowi6*,struct sk_buff*,struct flow_keys*) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*,int ) ;
 struct ip_tunnel_info* FUNC_8 (struct sk_buff*) ;
 scalar_t__ FUNC_9 (int) ;

void FUNC_10(struct sk_buff *VAR_4)
{
 const struct ipv6hdr *VAR_5 = FUNC_4(VAR_4);
 struct net *VAR_6 = FUNC_0(VAR_4->dev);
 int VAR_7 = VAR_3 | VAR_2;
 struct ip_tunnel_info *VAR_8;
 struct flowi6 VAR_9 = {
  .flowi6_iif = VAR_4->dev->ifindex,
  .daddr = VAR_5->daddr,
  .saddr = VAR_5->saddr,
  .flowlabel = FUNC_2(VAR_5),
  .flowi6_mark = VAR_4->mark,
  .flowi6_proto = VAR_5->nexthdr,
 };
 struct flow_keys *VAR_10 = ((void*)0), VAR_11;

 VAR_8 = FUNC_8(VAR_4);
 if (VAR_8 && !(VAR_8->mode & VAR_1))
  VAR_9 = VAR_8->key.tun_id;

 if (FUNC_1(VAR_6, VAR_4, &VAR_9, &VAR_11))
  VAR_10 = &VAR_11;

 if (FUNC_9(VAR_9 == VAR_0))
  VAR_9 = FUNC_5(VAR_6, &VAR_9, VAR_4, VAR_10);
 FUNC_6(VAR_4);
 FUNC_7(VAR_4, FUNC_3(VAR_6, VAR_4->dev,
            &VAR_9, VAR_4, VAR_7));
}
