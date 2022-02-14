
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ pkt_type; unsigned long _skb_refdst; } ;
struct rtable {scalar_t__ rt_type; } ;
struct net_device {int dummy; } ;
struct iphdr {void* daddr; int tos; int saddr; } ;
struct ip_options {int srr; int is_changed; int srr_is_hit; void* nexthop; int is_strictroute; } ;
typedef void* __be32 ;
struct TYPE_2__ {struct ip_options opt; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct sk_buff*,int ,int ,int ) ;
 struct iphdr* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*,void*,int ,int ,struct net_device*) ;
 int FUNC_5 (void**,unsigned char*,int) ;
 int FUNC_6 (unsigned long) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*,int *) ;
 unsigned char* FUNC_9 (struct sk_buff*) ;
 struct rtable* FUNC_10 (struct sk_buff*) ;

int FUNC_11(struct sk_buff *VAR_5, struct net_device *VAR_6)
{
 struct ip_options *VAR_7 = &(FUNC_0(VAR_5)->opt);
 int VAR_8, VAR_9;
 __be32 VAR_10;
 struct iphdr *VAR_11 = FUNC_3(VAR_5);
 unsigned char *VAR_12 = FUNC_9(VAR_5) + VAR_7->srr;
 struct rtable *VAR_13 = FUNC_10(VAR_5);
 struct rtable *VAR_14;
 unsigned long VAR_15;
 int VAR_16;

 if (!VAR_13)
  return 0;

 if (VAR_5->pkt_type != VAR_2)
  return -VAR_0;
 if (VAR_13->rt_type == VAR_4) {
  if (!VAR_7->is_strictroute)
   return 0;
  FUNC_2(VAR_5, VAR_1, 0, FUNC_1(16<<24));
  return -VAR_0;
 }
 if (VAR_13->rt_type != VAR_3)
  return -VAR_0;

 for (VAR_9 = VAR_12[2], VAR_8 = VAR_12[1]; VAR_9 <= VAR_8; VAR_9 += 4) {
  if (VAR_9 + 3 > VAR_8) {
   FUNC_2(VAR_5, VAR_1, 0, FUNC_1((VAR_7->srr+2)<<24));
   return -VAR_0;
  }
  FUNC_5(&VAR_10, &VAR_12[VAR_9-1], 4);

  VAR_15 = VAR_5->_skb_refdst;
  FUNC_8(VAR_5, ((void*)0));
  VAR_16 = FUNC_4(VAR_5, VAR_10, VAR_11->saddr, VAR_11->tos, VAR_6);
  VAR_14 = FUNC_10(VAR_5);
  if (VAR_16 || (VAR_14->rt_type != VAR_4 && VAR_14->rt_type != VAR_3)) {
   FUNC_7(VAR_5);
   VAR_5->_skb_refdst = VAR_15;
   return -VAR_0;
  }
  FUNC_6(VAR_15);
  if (VAR_14->rt_type != VAR_3)
   break;

  VAR_11->daddr = VAR_10;
  VAR_7->is_changed = 1;
 }
 if (VAR_9 <= VAR_8) {
  VAR_7->srr_is_hit = 1;
  VAR_7->nexthop = VAR_10;
  VAR_7->is_changed = 1;
 }
 return 0;
}
