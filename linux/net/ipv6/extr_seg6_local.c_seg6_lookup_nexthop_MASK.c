
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {TYPE_3__* dev; int mark; } ;
struct dst_entry {int error; TYPE_1__* dev; } ;
struct rt6_info {struct dst_entry dst; } ;
struct TYPE_6__ {struct rt6_info* ip6_blk_hole_entry; } ;
struct net {TYPE_2__ ipv6; } ;
struct in6_addr {int dummy; } ;
struct ipv6hdr {int nexthdr; int saddr; struct in6_addr daddr; } ;
struct flowi6 {int flowi6_flags; int flowi6_proto; int flowi6_mark; int flowlabel; int saddr; struct in6_addr daddr; int flowi6_iif; } ;
struct fib6_table {int dummy; } ;
struct TYPE_7__ {int ifindex; } ;
struct TYPE_5__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct net* FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (struct dst_entry*) ;
 int FUNC_2 (struct dst_entry*) ;
 struct fib6_table* FUNC_3 (struct net*,int ) ;
 int FUNC_4 (struct ipv6hdr*) ;
 struct rt6_info* FUNC_5 (struct net*,struct fib6_table*,int ,struct flowi6*,struct sk_buff*,int) ;
 struct dst_entry* FUNC_6 (struct net*,TYPE_3__*,struct flowi6*,struct sk_buff*,int) ;
 struct ipv6hdr* FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*,struct dst_entry*) ;

int FUNC_10(struct sk_buff *VAR_3, struct in6_addr *VAR_4,
   u32 VAR_5)
{
 struct net *VAR_6 = FUNC_0(VAR_3->dev);
 struct ipv6hdr *VAR_7 = FUNC_7(VAR_3);
 int VAR_8 = VAR_2;
 struct dst_entry *VAR_9 = ((void*)0);
 struct rt6_info *VAR_10;
 struct flowi6 VAR_11;

 VAR_11 = VAR_3->dev->ifindex;
 VAR_11 = VAR_4 ? *VAR_4 : VAR_7->daddr;
 VAR_11 = VAR_7->saddr;
 VAR_11 = FUNC_4(VAR_7);
 VAR_11 = VAR_3->mark;
 VAR_11 = VAR_7->nexthdr;

 if (VAR_4)
  VAR_11 = VAR_0;

 if (!VAR_5) {
  VAR_9 = FUNC_6(VAR_6, VAR_3->dev, &VAR_11, VAR_3, VAR_8);
 } else {
  struct fib6_table *VAR_12;

  VAR_12 = FUNC_3(VAR_6, VAR_5);
  if (!VAR_12)
   goto out;

  VAR_10 = FUNC_5(VAR_6, VAR_12, 0, &VAR_11, VAR_3, VAR_8);
  VAR_9 = &VAR_10->dst;
 }

 if (VAR_9 && VAR_9->dev->flags & VAR_1 && !VAR_9->error) {
  FUNC_2(VAR_9);
  VAR_9 = ((void*)0);
 }

out:
 if (!VAR_9) {
  VAR_10 = VAR_6->ipv6.ip6_blk_hole_entry;
  VAR_9 = &VAR_10->dst;
  FUNC_1(VAR_9);
 }

 FUNC_8(VAR_3);
 FUNC_9(VAR_3, VAR_9);
 return VAR_9->error;
}
