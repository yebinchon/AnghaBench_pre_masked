
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {int dev; } ;
struct nf_bridge_info {int bridged_dnat; int neigh_header; int physindev; } ;
struct net {int dummy; } ;
struct TYPE_2__ {scalar_t__ hh_len; } ;
struct neighbour {int nud_state; int (* output ) (struct neighbour*,struct sk_buff*) ;TYPE_1__ hh; } ;
struct dst_entry {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net*,struct sock*,struct sk_buff*) ;
 int FUNC_1 (int ) ;
 struct neighbour* FUNC_2 (struct dst_entry*,struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (TYPE_1__*,struct sk_buff*) ;
 int FUNC_5 (struct neighbour*) ;
 struct nf_bridge_info* FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*,scalar_t__,int ,scalar_t__) ;
 struct dst_entry* FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct neighbour*,struct sk_buff*) ;

int FUNC_10(struct net *VAR_3, struct sock *VAR_4, struct sk_buff *VAR_5)
{
 struct neighbour *VAR_6;
 struct dst_entry *VAR_7;

 VAR_5->dev = FUNC_1(VAR_5->dev);
 if (!VAR_5->dev)
  goto free_skb;
 VAR_7 = FUNC_8(VAR_5);
 VAR_6 = FUNC_2(VAR_7, VAR_5);
 if (VAR_6) {
  struct nf_bridge_info *VAR_8 = FUNC_6(VAR_5);
  int VAR_9;

  if ((VAR_6->nud_state & VAR_2) && VAR_6->hh.hh_len) {
   FUNC_4(&VAR_6->hh, VAR_5);
   VAR_5->dev = VAR_8->physindev;
   VAR_9 = FUNC_0(VAR_3, VAR_4, VAR_5);
  } else {




   FUNC_7(VAR_5,
        -(VAR_1-VAR_0),
        VAR_8->neigh_header,
        VAR_1-VAR_0);

   VAR_8->bridged_dnat = 1;

   VAR_9 = VAR_6->output(VAR_6, VAR_5);
  }
  FUNC_5(VAR_6);
  return VAR_9;
 }
free_skb:
 FUNC_3(VAR_5);
 return 0;
}
