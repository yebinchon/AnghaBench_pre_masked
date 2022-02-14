
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {scalar_t__ protocol; int dev; scalar_t__ cb; int pkt_type; } ;
struct nf_bridge_info {int pkt_otherhost; struct net_device* physindev; int frag_max_size; } ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct TYPE_4__ {int frag_max_size; } ;
struct TYPE_3__ {int frag_max_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 TYPE_1__* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,struct net*,struct sock*,struct sk_buff*,struct net_device*,int ,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct sk_buff*,struct net*) ;
 struct nf_bridge_info* FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_9(struct net *VAR_5, struct sock *VAR_6, struct sk_buff *VAR_7)
{
 struct nf_bridge_info *VAR_8 = FUNC_6(VAR_7);
 struct net_device *VAR_9;

 if (!FUNC_2(VAR_7) && !FUNC_5(VAR_7, VAR_5)) {

  if (VAR_7->protocol == FUNC_4(VAR_0))
   VAR_8->frag_max_size = FUNC_1(VAR_7)->frag_max_size;

  if (VAR_7->protocol == FUNC_4(VAR_1))
   VAR_8->frag_max_size = FUNC_0(VAR_7)->frag_max_size;

  VAR_9 = VAR_8->physindev;
  if (VAR_8->pkt_otherhost) {
   VAR_7->pkt_type = VAR_3;
   VAR_8->pkt_otherhost = 0;
  }
  FUNC_8(VAR_7);
 } else {
  VAR_9 = *((struct net_device **)(VAR_7->cb));
 }
 FUNC_7(VAR_7);

 FUNC_3(VAR_2, VAR_5, VAR_6, VAR_7, VAR_9, VAR_7->dev,
     VAR_4);
 return 0;
}
