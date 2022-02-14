
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct xt_action_param {struct ebt_nat_info* targinfo; } ;
struct sk_buff {int pkt_type; } ;
struct net_device {int dev_addr; } ;
struct ebt_nat_info {unsigned int target; int mac; } ;
struct TYPE_6__ {TYPE_1__* br; } ;
struct TYPE_5__ {int h_dest; } ;
struct TYPE_4__ {struct net_device* dev; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_3__* FUNC_0 (struct net_device*) ;
 TYPE_2__* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ) ;
 int FUNC_7 (struct xt_action_param const*) ;
 struct net_device* FUNC_8 (struct xt_action_param const*) ;

__attribute__((used)) static unsigned int
FUNC_9(struct sk_buff *VAR_6, const struct xt_action_param *VAR_7)
{
 const struct ebt_nat_info *VAR_8 = VAR_7->targinfo;

 if (FUNC_6(VAR_6, VAR_1))
  return VAR_0;

 FUNC_2(FUNC_1(VAR_6)->h_dest, VAR_8->mac);

 if (FUNC_5(VAR_8->mac)) {
  if (FUNC_4(VAR_8->mac))
   VAR_6->pkt_type = VAR_2;
  else
   VAR_6->pkt_type = VAR_4;
 } else {
  const struct net_device *VAR_9;

  switch (FUNC_7(VAR_7)) {
  case 129:
   VAR_9 = FUNC_8(VAR_7);
   break;
  case 128:
   VAR_9 = FUNC_0(FUNC_8(VAR_7))->br->dev;
   break;
  default:
   VAR_9 = ((void*)0);
   break;
  }

  if (!VAR_9)
   return VAR_8->target;

  if (FUNC_3(VAR_8->mac, VAR_9->dev_addr))
   VAR_6->pkt_type = VAR_3;
  else
   VAR_6->pkt_type = VAR_5;
 }

 return VAR_8->target;
}
