
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {struct net_device* dev; } ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct dst_entry {struct net_device* dev; } ;
struct dn_skb_cb {scalar_t__ hops; int rt_flags; int dst; int src; } ;
struct dn_route {int rt_daddr; int rt_saddr; int * n; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct dn_skb_cb* FUNC_0 (struct sk_buff*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int *,struct sock*,struct sk_buff*,int *,struct net_device*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (char*) ;
 struct dst_entry* FUNC_4 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_5(struct net *VAR_7, struct sock *VAR_8, struct sk_buff *VAR_9)
{
 struct dst_entry *VAR_10 = FUNC_4(VAR_9);
 struct dn_route *VAR_11 = (struct dn_route *)VAR_10;
 struct net_device *VAR_12 = VAR_10->dev;
 struct dn_skb_cb *VAR_13 = FUNC_0(VAR_9);

 int VAR_14 = -VAR_2;

 if (VAR_11->n == ((void*)0))
  goto error;

 VAR_9->dev = VAR_12;

 VAR_13->src = VAR_11->rt_saddr;
 VAR_13->dst = VAR_11->rt_daddr;






 VAR_13->rt_flags &= ~VAR_1;
 VAR_13->rt_flags |= VAR_0;
 VAR_13->hops = 0;

 return FUNC_1(VAR_3, VAR_4,
         &VAR_6, VAR_8, VAR_9, ((void*)0), VAR_12,
         VAR_5);

error:
 FUNC_3("dn_output: This should not happen\n");

 FUNC_2(VAR_9);

 return VAR_14;
}
