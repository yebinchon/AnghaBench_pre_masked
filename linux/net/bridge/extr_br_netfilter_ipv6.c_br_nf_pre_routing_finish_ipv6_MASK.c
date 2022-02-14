
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {struct net_device* dev; int pkt_type; } ;
struct rtable {int dst; } ;
struct nf_ipv6_ops {int (* route_input ) (struct sk_buff*) ;} ;
struct nf_bridge_info {int pkt_otherhost; struct net_device* physindev; scalar_t__ in_prerouting; int frag_max_size; } ;
struct net_device {int dev_addr; } ;
struct net {int dummy; } ;
struct TYPE_6__ {int frag_max_size; } ;
struct TYPE_5__ {int h_dest; } ;
struct TYPE_4__ {struct net_device* dev; scalar_t__ error; } ;


 TYPE_3__* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,struct net*,struct sock*,struct sk_buff*,struct net_device*,int *,int ) ;
 scalar_t__ FUNC_2 (struct sk_buff*,struct nf_bridge_info*) ;
 int VAR_4 ;
 struct rtable* FUNC_3 (struct net_device*) ;
 TYPE_2__* FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct sk_buff*) ;
 struct nf_bridge_info* FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*) ;
 struct nf_ipv6_ops* FUNC_10 () ;
 TYPE_1__* FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (struct sk_buff*) ;
 int FUNC_13 (struct sk_buff*,int *) ;
 int FUNC_14 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_15(struct net *VAR_5, struct sock *VAR_6, struct sk_buff *VAR_7)
{
 struct nf_bridge_info *VAR_8 = FUNC_7(VAR_7);
 struct rtable *VAR_9;
 struct net_device *VAR_10 = VAR_7->dev;
 const struct nf_ipv6_ops *VAR_11 = FUNC_10();

 VAR_8->frag_max_size = FUNC_0(VAR_7)->frag_max_size;

 if (VAR_8->pkt_otherhost) {
  VAR_7->pkt_type = VAR_2;
  VAR_8->pkt_otherhost = 0;
 }
 VAR_8->in_prerouting = 0;
 if (FUNC_2(VAR_7, VAR_8)) {
  FUNC_12(VAR_7);
  VAR_11->route_input(VAR_7);

  if (FUNC_11(VAR_7)->error) {
   FUNC_6(VAR_7);
   return 0;
  }

  if (FUNC_11(VAR_7)->dev == VAR_10) {
   VAR_7->dev = VAR_8->physindev;
   FUNC_9(VAR_7);
   FUNC_8(VAR_7);
   FUNC_1(VAR_0,
       VAR_5, VAR_6, VAR_7, VAR_7->dev, ((void*)0),
       VAR_4);
   return 0;
  }
  FUNC_5(FUNC_4(VAR_7)->h_dest, VAR_10->dev_addr);
  VAR_7->pkt_type = VAR_1;
 } else {
  VAR_9 = FUNC_3(VAR_8->physindev);
  if (!VAR_9) {
   FUNC_6(VAR_7);
   return 0;
  }
  FUNC_13(VAR_7, &VAR_9->dst);
 }

 VAR_7->dev = VAR_8->physindev;
 FUNC_9(VAR_7);
 FUNC_8(VAR_7);
 FUNC_1(VAR_0, VAR_5, VAR_6, VAR_7,
     VAR_7->dev, ((void*)0), VAR_3);

 return 0;
}
