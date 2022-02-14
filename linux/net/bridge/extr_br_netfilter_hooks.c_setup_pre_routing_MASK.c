
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ pkt_type; scalar_t__ protocol; struct net_device* dev; } ;
struct nf_bridge_info {int pkt_otherhost; int in_prerouting; int orig_proto; struct net_device* physindev; } ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 struct net_device* FUNC_0 (struct sk_buff*,struct net_device*,struct net const*) ;
 scalar_t__ FUNC_1 (int ) ;
 struct nf_bridge_info* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;

struct net_device *FUNC_4(struct sk_buff *VAR_6, const struct net *VAR_7)
{
 struct nf_bridge_info *VAR_8 = FUNC_2(VAR_6);

 if (VAR_6->pkt_type == VAR_5) {
  VAR_6->pkt_type = VAR_4;
  VAR_8->pkt_otherhost = 1;
 }

 VAR_8->in_prerouting = 1;
 VAR_8->physindev = VAR_6->dev;
 VAR_6->dev = FUNC_0(VAR_6, VAR_6->dev, VAR_7);

 if (VAR_6->protocol == FUNC_1(VAR_2))
  VAR_8->orig_proto = VAR_0;
 else if (VAR_6->protocol == FUNC_1(VAR_3))
  VAR_8->orig_proto = VAR_1;


 FUNC_3(VAR_6);
 return VAR_6->dev;
}
