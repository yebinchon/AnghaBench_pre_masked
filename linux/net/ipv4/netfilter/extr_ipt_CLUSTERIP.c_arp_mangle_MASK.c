
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct nf_hook_state {TYPE_1__* out; struct net* net; } ;
struct net {int dummy; } ;
struct clusterip_config {scalar_t__ ifindex; int clustermac; } ;
struct arphdr {scalar_t__ ar_hrd; scalar_t__ ar_pro; int ar_pln; scalar_t__ ar_hln; scalar_t__ ar_op; } ;
struct arp_payload {int src_hw; int src_ip; } ;
struct TYPE_2__ {scalar_t__ ifindex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 struct arphdr* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct arp_payload*) ;
 struct clusterip_config* FUNC_2 (struct net*,int ,int ) ;
 int FUNC_3 (struct clusterip_config*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,scalar_t__) ;
 int FUNC_6 (char*,...) ;

__attribute__((used)) static unsigned int
FUNC_7(void *VAR_6,
    struct sk_buff *VAR_7,
    const struct nf_hook_state *VAR_8)
{
 struct arphdr *VAR_9 = FUNC_0(VAR_7);
 struct arp_payload *VAR_10;
 struct clusterip_config *VAR_11;
 struct net *VAR_12 = VAR_8->net;


 if (VAR_9->ar_hrd != FUNC_4(VAR_0) ||
     VAR_9->ar_pro != FUNC_4(VAR_4) ||
     VAR_9->ar_pln != 4 || VAR_9->ar_hln != VAR_3)
  return VAR_5;


 if (VAR_9->ar_op != FUNC_4(VAR_1) &&
     VAR_9->ar_op != FUNC_4(VAR_2))
  return VAR_5;

 VAR_10 = (void *)(VAR_9+1);



 VAR_11 = FUNC_2(VAR_12, VAR_10->src_ip, 0);
 if (!VAR_11)
  return VAR_5;





 if (VAR_11->ifindex != VAR_8->out->ifindex) {
  FUNC_6("not mangling arp reply on different interface: cip'%d'-skb'%d'\n",
    VAR_11->ifindex, VAR_8->out->ifindex);
  FUNC_3(VAR_11);
  return VAR_5;
 }


 FUNC_5(VAR_10->src_hw, VAR_11->clustermac, VAR_9->ar_hln);






 FUNC_3(VAR_11);

 return VAR_5;
}
