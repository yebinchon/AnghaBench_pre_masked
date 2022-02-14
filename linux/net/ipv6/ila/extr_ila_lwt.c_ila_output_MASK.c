
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {scalar_t__ protocol; } ;
struct rt6_info {int rt6i_flags; } ;
struct net {int dummy; } ;
struct ipv6hdr {int daddr; } ;
struct ila_lwt {int dst_cache; scalar_t__ connected; scalar_t__ lwt_output; } ;
struct flowi6 {int saddr; int daddr; int flowi6_iif; int flowi6_oif; } ;
struct dst_entry {scalar_t__ error; TYPE_1__* dev; TYPE_2__* lwtstate; } ;
typedef int fl6 ;
struct TYPE_5__ {int (* orig_output ) (struct net*,struct sock*,struct sk_buff*) ;} ;
struct TYPE_4__ {int ifindex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct dst_entry*) ;
 int VAR_3 ;
 int FUNC_1 (struct dst_entry*) ;
 int VAR_4 ;
 int VAR_5 ;
 struct dst_entry* FUNC_2 (int *) ;
 int FUNC_3 (int *,struct dst_entry*,int *) ;
 int FUNC_4 (struct net*,struct sock*,struct sk_buff*) ;
 int FUNC_5 (struct dst_entry*) ;
 int FUNC_6 (struct flowi6*) ;
 scalar_t__ FUNC_7 (int ) ;
 struct ila_lwt* FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (struct sk_buff*,int ,int) ;
 struct dst_entry* FUNC_11 (struct net*,int *,struct flowi6*) ;
 struct ipv6hdr* FUNC_12 (struct sk_buff*) ;
 int FUNC_13 (struct sk_buff*) ;
 int FUNC_14 (struct flowi6*,int ,int) ;
 int * FUNC_15 (struct rt6_info*,int *) ;
 struct dst_entry* FUNC_16 (struct sk_buff*) ;
 int FUNC_17 (struct sk_buff*,struct dst_entry*) ;
 int FUNC_18 (struct net*,struct sock*,struct sk_buff*) ;
 scalar_t__ FUNC_19 (int) ;
 struct dst_entry* FUNC_20 (struct net*,struct dst_entry*,int ,int *,int ) ;

__attribute__((used)) static int FUNC_21(struct net *VAR_6, struct sock *VAR_7, struct sk_buff *VAR_8)
{
 struct dst_entry *VAR_9 = FUNC_16(VAR_8);
 struct rt6_info *VAR_10 = (struct rt6_info *)VAR_9;
 struct ila_lwt *VAR_11 = FUNC_8(VAR_9->lwtstate);
 struct dst_entry *VAR_12;
 int VAR_13 = -VAR_1;

 if (VAR_8->protocol != FUNC_7(VAR_2))
  goto drop;

 if (VAR_11->lwt_output)
  FUNC_10(VAR_8,
     FUNC_9(VAR_9->lwtstate),
     1);

 if (VAR_10->rt6i_flags & (VAR_5 | VAR_4)) {



  return VAR_9->lwtstate->orig_output(VAR_6, VAR_7, VAR_8);
 }

 VAR_12 = FUNC_2(&VAR_11->dst_cache);
 if (FUNC_19(!VAR_12)) {
  struct ipv6hdr *VAR_14 = FUNC_12(VAR_8);
  struct flowi6 VAR_15;





  FUNC_14(&VAR_15, 0, sizeof(VAR_15));
  VAR_15 = VAR_9->dev->ifindex;
  VAR_15 = VAR_3;
  VAR_15 = *FUNC_15((struct rt6_info *)VAR_9,
      &VAR_14->daddr);

  VAR_12 = FUNC_11(VAR_6, ((void*)0), &VAR_15);
  if (VAR_12->error) {
   VAR_13 = -VAR_0;
   FUNC_5(VAR_12);
   goto drop;
  }

  VAR_12 = FUNC_20(VAR_6, VAR_12, FUNC_6(&VAR_15), ((void*)0), 0);
  if (FUNC_0(VAR_12)) {
   VAR_13 = FUNC_1(VAR_12);
   goto drop;
  }

  if (VAR_11->connected)
   FUNC_3(&VAR_11->dst_cache, VAR_12, &VAR_15);
 }

 FUNC_17(VAR_8, VAR_12);
 return FUNC_4(VAR_6, VAR_7, VAR_8);

drop:
 FUNC_13(VAR_8);
 return VAR_13;
}
