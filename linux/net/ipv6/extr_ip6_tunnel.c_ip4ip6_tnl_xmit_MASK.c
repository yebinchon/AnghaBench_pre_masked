
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct sk_buff {int mark; } ;
struct net_device {int dummy; } ;
struct iphdr {int dummy; } ;
struct TYPE_7__ {int dst; int src; } ;
struct TYPE_8__ {TYPE_1__ ipv6; } ;
struct ip_tunnel_key {int tos; int label; TYPE_2__ u; } ;
struct ip_tunnel_info {int mode; struct ip_tunnel_key key; } ;
struct TYPE_11__ {int flags; int encap_limit; int fwmark; int flowinfo; scalar_t__ collect_md; int proto; } ;
struct TYPE_9__ {int ip6; } ;
struct TYPE_10__ {TYPE_3__ u; } ;
struct ip6_tnl {TYPE_5__ parms; TYPE_4__ fl; } ;
struct flowi6 {int flowi6_uid; int flowi6_mark; scalar_t__ flowi6_proto; int flowlabel; int daddr; int saddr; } ;
typedef int fl6 ;
typedef int __u8 ;
typedef int __u32 ;
struct TYPE_12__ {struct flowi6 opt; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_6__* FUNC_1 (struct sk_buff*) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_9 ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct sk_buff*,int ,int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct sk_buff*,struct net_device*,int ,struct flowi6*,int,int *,scalar_t__) ;
 struct iphdr* FUNC_8 (struct sk_buff*) ;
 scalar_t__ FUNC_9 (struct ip_tunnel_info*) ;
 scalar_t__ FUNC_10 (struct sk_buff*,int ) ;
 int FUNC_11 (struct iphdr const*) ;
 int FUNC_12 (struct flowi6*,int *,int) ;
 int FUNC_13 (struct flowi6*,int ,int) ;
 struct ip6_tnl* FUNC_14 (struct net_device*) ;
 int FUNC_15 (struct sk_buff*,scalar_t__) ;
 struct ip_tunnel_info* FUNC_16 (struct sk_buff*) ;
 int FUNC_17 (int ,int *) ;
 scalar_t__ FUNC_18 (int) ;

__attribute__((used)) static inline int
FUNC_19(struct sk_buff *VAR_10, struct net_device *VAR_11)
{
 struct ip6_tnl *VAR_12 = FUNC_14(VAR_11);
 const struct iphdr *VAR_13;
 int VAR_14 = -1;
 struct flowi6 VAR_15;
 __u8 VAR_16;
 __u32 VAR_17;
 u8 VAR_18;
 int VAR_19;

 VAR_13 = FUNC_8(VAR_10);
 FUNC_13(&(FUNC_1(VAR_10)->opt), 0, sizeof(FUNC_1(VAR_10)->opt));

 VAR_18 = FUNC_2(VAR_12->parms.proto);
 if (VAR_18 != VAR_7 && VAR_18 != 0)
  return -1;

 if (VAR_12->parms.collect_md) {
  struct ip_tunnel_info *VAR_20;
  const struct ip_tunnel_key *VAR_21;

  VAR_20 = FUNC_16(VAR_10);
  if (FUNC_18(!VAR_20 || !(VAR_20->mode & VAR_8) ||
        FUNC_9(VAR_20) != VAR_0))
   return -1;
  VAR_21 = &VAR_20->key;
  FUNC_13(&VAR_15, 0, sizeof(VAR_15));
  VAR_15 = VAR_7;
  VAR_15 = VAR_21->u.ipv6.src;
  VAR_15 = VAR_21->u.ipv6.dst;
  VAR_15 = VAR_21->label;
  VAR_16 = VAR_21->tos;
 } else {
  if (!(VAR_12->parms.flags & VAR_4))
   VAR_14 = VAR_12->parms.encap_limit;

  FUNC_12(&VAR_15, &VAR_12->fl.u.ip6, sizeof(VAR_15));
  VAR_15 = VAR_7;

  if (VAR_12->parms.flags & VAR_6)
   VAR_16 = FUNC_11(VAR_13);
  else
   VAR_16 = FUNC_6(VAR_12->parms.flowinfo);
  if (VAR_12->parms.flags & VAR_5)
   VAR_15 = VAR_10->mark;
  else
   VAR_15 = VAR_12->parms.fwmark;
 }

 VAR_15 = FUNC_17(FUNC_3(VAR_11), ((void*)0));
 VAR_16 = FUNC_0(VAR_16, FUNC_11(VAR_13));

 if (FUNC_10(VAR_10, VAR_9))
  return -1;

 FUNC_15(VAR_10, VAR_7);

 VAR_19 = FUNC_7(VAR_10, VAR_11, VAR_16, &VAR_15, VAR_14, &VAR_17,
      VAR_7);
 if (VAR_19 != 0) {

  if (VAR_19 == -VAR_1)
   FUNC_5(VAR_10, VAR_2, VAR_3,
      FUNC_4(VAR_17));
  return -1;
 }

 return 0;
}
