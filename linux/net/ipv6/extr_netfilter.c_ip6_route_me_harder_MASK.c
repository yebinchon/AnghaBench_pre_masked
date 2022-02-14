
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sock {int sk_bound_dev_if; } ;
struct sk_buff {int mark; int sk; } ;
struct net {int dummy; } ;
struct ipv6hdr {int saddr; int daddr; } ;
struct flowi6 {int saddr; int daddr; int flowi6_uid; int flowi6_mark; int flowi6_oif; } ;
struct dst_entry {int error; } ;
struct TYPE_6__ {int flags; } ;
struct TYPE_5__ {TYPE_1__* dev; } ;
struct TYPE_4__ {unsigned int hard_header_len; int ifindex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned int) ;
 TYPE_3__* FUNC_1 (struct sk_buff*) ;
 int VAR_3 ;
 int FUNC_2 (struct net*,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (struct dst_entry*) ;
 int FUNC_4 (struct dst_entry*) ;
 int FUNC_5 (struct dst_entry*) ;
 int FUNC_6 (struct flowi6*) ;
 int FUNC_7 (struct dst_entry*) ;
 struct dst_entry* FUNC_8 (struct net*,struct sock*,struct flowi6*) ;
 int FUNC_9 (int *) ;
 struct ipv6hdr* FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (char*) ;
 scalar_t__ FUNC_12 (struct sk_buff*,int ,int ,int ) ;
 struct sock* FUNC_13 (int ) ;
 TYPE_2__* FUNC_14 (struct sk_buff*) ;
 int FUNC_15 (struct sk_buff*) ;
 int FUNC_16 (struct sk_buff*,struct dst_entry*) ;
 unsigned int FUNC_17 (struct sk_buff*) ;
 int FUNC_18 (struct net*,struct sock*) ;
 scalar_t__ FUNC_19 (struct sk_buff*,int ,int ) ;
 struct dst_entry* FUNC_20 (struct net*,struct dst_entry*,int ,struct sock*,int ) ;

int FUNC_21(struct net *VAR_7, struct sk_buff *VAR_8)
{
 const struct ipv6hdr *VAR_9 = FUNC_10(VAR_8);
 struct sock *VAR_10 = FUNC_13(VAR_8->sk);
 unsigned int VAR_11;
 struct dst_entry *VAR_12;
 int VAR_13 = (FUNC_9(&VAR_9->daddr) &
        (VAR_6 | VAR_5));
 struct flowi6 VAR_14 = {
  .flowi6_oif = VAR_10 && VAR_10->sk_bound_dev_if ? VAR_10->sk_bound_dev_if :
   VAR_13 ? FUNC_14(VAR_8)->dev->ifindex : 0,
  .flowi6_mark = VAR_8->mark,
  .flowi6_uid = FUNC_18(VAR_7, VAR_10),
  .daddr = VAR_9->daddr,
  .saddr = VAR_9->saddr,
 };
 int VAR_15;

 VAR_12 = FUNC_8(VAR_7, VAR_10, &VAR_14);
 VAR_15 = VAR_12->error;
 if (VAR_15) {
  FUNC_2(VAR_7, FUNC_7(VAR_12), VAR_4);
  FUNC_11("ip6_route_me_harder: No more route\n");
  FUNC_5(VAR_12);
  return VAR_15;
 }


 FUNC_15(VAR_8);

 FUNC_16(VAR_8, VAR_12);
 VAR_11 = FUNC_14(VAR_8)->dev->hard_header_len;
 if (FUNC_17(VAR_8) < VAR_11 &&
     FUNC_12(VAR_8, FUNC_0(VAR_11 - FUNC_17(VAR_8)),
        0, VAR_2))
  return -VAR_1;

 return 0;
}
