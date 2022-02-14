
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct sk_buff {int mark; } ;
struct net_device {int dummy; } ;
struct ipv6hdr {int dummy; } ;
struct ipv6_tlv_tnl_enc_lim {int encap_limit; } ;
struct TYPE_6__ {int dst; int src; } ;
struct TYPE_7__ {TYPE_1__ ipv6; } ;
struct ip_tunnel_key {int tos; int label; TYPE_2__ u; } ;
struct ip_tunnel_info {int mode; struct ip_tunnel_key key; } ;
struct TYPE_10__ {int flags; int encap_limit; int fwmark; int flowinfo; scalar_t__ collect_md; int proto; } ;
struct TYPE_8__ {int ip6; } ;
struct TYPE_9__ {TYPE_3__ u; } ;
struct ip6_tnl {TYPE_5__ parms; TYPE_4__ fl; } ;
struct flowi6 {int flowi6_uid; int flowi6_mark; int flowlabel; scalar_t__ flowi6_proto; int daddr; int saddr; } ;
typedef int fl6 ;
typedef int __u8 ;
typedef size_t __u32 ;
typedef size_t __u16 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_11 ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct sk_buff*,int ,int ,size_t) ;
 int FUNC_4 (struct ipv6hdr*) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct ip6_tnl*,struct ipv6hdr*) ;
 size_t FUNC_7 (struct sk_buff*,int *) ;
 int FUNC_8 (struct sk_buff*,struct net_device*,int ,struct flowi6*,int,size_t*,scalar_t__) ;
 scalar_t__ FUNC_9 (struct ip_tunnel_info*) ;
 scalar_t__ FUNC_10 (struct sk_buff*,int ) ;
 int FUNC_11 (struct ipv6hdr*) ;
 struct ipv6hdr* FUNC_12 (struct sk_buff*) ;
 int FUNC_13 (struct flowi6*,int *,int) ;
 int FUNC_14 (struct flowi6*,int ,int) ;
 struct ip6_tnl* FUNC_15 (struct net_device*) ;
 int * FUNC_16 (struct sk_buff*) ;
 int FUNC_17 (struct sk_buff*,scalar_t__) ;
 struct ip_tunnel_info* FUNC_18 (struct sk_buff*) ;
 int FUNC_19 (int ,int *) ;
 scalar_t__ FUNC_20 (int) ;

__attribute__((used)) static inline int
FUNC_21(struct sk_buff *VAR_12, struct net_device *VAR_13)
{
 struct ip6_tnl *VAR_14 = FUNC_15(VAR_13);
 struct ipv6hdr *VAR_15;
 int VAR_16 = -1;
 __u16 VAR_17;
 struct flowi6 VAR_18;
 __u8 VAR_19;
 __u32 VAR_20;
 u8 VAR_21;
 int VAR_22;

 VAR_15 = FUNC_12(VAR_12);
 VAR_21 = FUNC_1(VAR_14->parms.proto);
 if ((VAR_21 != VAR_9 && VAR_21 != 0) ||
     FUNC_6(VAR_14, VAR_15))
  return -1;

 if (VAR_14->parms.collect_md) {
  struct ip_tunnel_info *VAR_23;
  const struct ip_tunnel_key *VAR_24;

  VAR_23 = FUNC_18(VAR_12);
  if (FUNC_20(!VAR_23 || !(VAR_23->mode & VAR_10) ||
        FUNC_9(VAR_23) != VAR_0))
   return -1;
  VAR_24 = &VAR_23->key;
  FUNC_14(&VAR_18, 0, sizeof(VAR_18));
  VAR_18 = VAR_9;
  VAR_18 = VAR_24->u.ipv6.src;
  VAR_18 = VAR_24->u.ipv6.dst;
  VAR_18 = VAR_24->label;
  VAR_19 = VAR_24->tos;
 } else {
  VAR_17 = FUNC_7(VAR_12, FUNC_16(VAR_12));

  VAR_15 = FUNC_12(VAR_12);
  if (VAR_17 > 0) {
   struct ipv6_tlv_tnl_enc_lim *VAR_25;

   VAR_25 = (void *)&FUNC_16(VAR_12)[VAR_17];
   if (VAR_25->encap_limit == 0) {
    FUNC_3(VAR_12, VAR_3,
         VAR_2, VAR_17 + 2);
    return -1;
   }
   VAR_16 = VAR_25->encap_limit - 1;
  } else if (!(VAR_14->parms.flags & VAR_5)) {
   VAR_16 = VAR_14->parms.encap_limit;
  }

  FUNC_13(&VAR_18, &VAR_14->fl.u.ip6, sizeof(VAR_18));
  VAR_18 = VAR_9;

  if (VAR_14->parms.flags & VAR_8)
   VAR_19 = FUNC_11(VAR_15);
  else
   VAR_19 = FUNC_5(VAR_14->parms.flowinfo);
  if (VAR_14->parms.flags & VAR_6)
   VAR_18 |= FUNC_4(VAR_15);
  if (VAR_14->parms.flags & VAR_7)
   VAR_18 = VAR_12->mark;
  else
   VAR_18 = VAR_14->parms.fwmark;
 }

 VAR_18 = FUNC_19(FUNC_2(VAR_13), ((void*)0));
 VAR_19 = FUNC_0(VAR_19, FUNC_11(VAR_15));

 if (FUNC_10(VAR_12, VAR_11))
  return -1;

 FUNC_17(VAR_12, VAR_9);

 VAR_22 = FUNC_8(VAR_12, VAR_13, VAR_19, &VAR_18, VAR_16, &VAR_20,
      VAR_9);
 if (VAR_22 != 0) {
  if (VAR_22 == -VAR_1)
   FUNC_3(VAR_12, VAR_4, 0, VAR_20);
  return -1;
 }

 return 0;
}
