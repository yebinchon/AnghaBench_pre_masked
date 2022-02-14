
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int daddr; int saddr; } ;
struct ip_tunnel_parm {TYPE_1__ iph; int o_key; int i_key; int link; } ;
struct ip_tunnel {int fwmark; struct ip_tunnel_parm parms; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct ip_tunnel* FUNC_0 (struct net_device const*) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_7, const struct net_device *VAR_8)
{
 struct ip_tunnel *VAR_9 = FUNC_0(VAR_8);
 struct ip_tunnel_parm *VAR_10 = &VAR_9->parms;

 if (FUNC_3(VAR_7, VAR_3, VAR_10->link) ||
     FUNC_1(VAR_7, VAR_2, VAR_10->i_key) ||
     FUNC_1(VAR_7, VAR_5, VAR_10->o_key) ||
     FUNC_2(VAR_7, VAR_4, VAR_10->iph.saddr) ||
     FUNC_2(VAR_7, VAR_6, VAR_10->iph.daddr) ||
     FUNC_3(VAR_7, VAR_1, VAR_9->fwmark))
  return -VAR_0;

 return 0;
}
