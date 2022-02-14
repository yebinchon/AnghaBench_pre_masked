
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct net_device {int flags; TYPE_1__* header_ops; int addr_len; int broadcast; int dev_addr; } ;
struct neighbour {int nud_state; TYPE_2__* ops; int output; int ha; int type; int parms; struct net_device* dev; int primary_key; } ;
struct neigh_parms {int dummy; } ;
struct inet6_dev {struct neigh_parms* nd_parms; } ;
struct in6_addr {int dummy; } ;
struct TYPE_6__ {int output; int connected_output; } ;
struct TYPE_5__ {scalar_t__ cache; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 struct inet6_dev* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct inet6_dev*) ;
 int FUNC_3 (struct in6_addr*) ;
 int FUNC_4 (int ,int ,int ) ;
 TYPE_2__ VAR_9 ;
 TYPE_2__ VAR_10 ;
 TYPE_2__ VAR_11 ;
 int FUNC_5 (struct in6_addr*,int ,struct net_device*,int) ;
 int VAR_12 ;
 int FUNC_6 (struct neigh_parms*) ;

__attribute__((used)) static int FUNC_7(struct neighbour *VAR_13)
{
 struct in6_addr *VAR_14 = (struct in6_addr *)&VAR_13->primary_key;
 struct net_device *VAR_15 = VAR_13->dev;
 struct inet6_dev *VAR_16;
 struct neigh_parms *VAR_17;
 bool VAR_18 = FUNC_3(VAR_14);

 VAR_16 = FUNC_1(VAR_15);
 if (!VAR_16) {
  return -VAR_0;
 }

 VAR_17 = VAR_16->nd_parms;
 FUNC_0(VAR_13->parms);
 VAR_13->parms = FUNC_6(VAR_17);

 VAR_13->type = VAR_18 ? VAR_7 : VAR_8;
 if (!VAR_15->header_ops) {
  VAR_13->nud_state = VAR_4;
  VAR_13->ops = &VAR_9;
  VAR_13->output = VAR_12;
 } else {
  if (VAR_18) {
   VAR_13->nud_state = VAR_4;
   FUNC_5(VAR_14, VAR_13->ha, VAR_15, 1);
  } else if (VAR_15->flags&(VAR_2|VAR_1)) {
   VAR_13->nud_state = VAR_4;
   FUNC_4(VAR_13->ha, VAR_15->dev_addr, VAR_15->addr_len);
   if (VAR_15->flags&VAR_1)
    VAR_13->type = VAR_6;
  } else if (VAR_15->flags&VAR_3) {
   VAR_13->nud_state = VAR_4;
   FUNC_4(VAR_13->ha, VAR_15->broadcast, VAR_15->addr_len);
  }
  if (VAR_15->header_ops->cache)
   VAR_13->ops = &VAR_11;
  else
   VAR_13->ops = &VAR_10;
  if (VAR_13->nud_state&VAR_5)
   VAR_13->output = VAR_13->ops->connected_output;
  else
   VAR_13->output = VAR_13->ops->output;
 }
 FUNC_2(VAR_16);
 return 0;
}
