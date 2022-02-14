
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int flags; TYPE_1__* header_ops; int addr_len; int * broadcast; int * dev_addr; } ;
struct neighbour {int nud_state; TYPE_3__* ops; int output; scalar_t__ ha; int type; int parms; scalar_t__ primary_key; struct net_device* dev; } ;
struct neigh_parms {int dummy; } ;
struct in_device {struct neigh_parms* arp_parms; } ;
typedef int __be32 ;
struct TYPE_8__ {int output; int connected_output; } ;
struct TYPE_7__ {int key_len; } ;
struct TYPE_6__ {scalar_t__ cache; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct in_device* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ) ;
 TYPE_3__ VAR_9 ;
 TYPE_3__ VAR_10 ;
 TYPE_3__ VAR_11 ;
 int FUNC_2 (int ,scalar_t__,struct net_device*,int) ;
 TYPE_2__ VAR_12 ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ,struct net_device*,int ) ;
 int FUNC_5 (scalar_t__,int *,int ) ;
 int VAR_13 ;
 int FUNC_6 (struct neigh_parms*) ;
 int FUNC_7 () ;
 int FUNC_8 () ;

__attribute__((used)) static int FUNC_9(struct neighbour *VAR_14)
{
 __be32 VAR_15;
 struct net_device *VAR_16 = VAR_14->dev;
 struct in_device *VAR_17;
 struct neigh_parms *VAR_18;
 u32 VAR_19 = VAR_4;

 if (VAR_16->flags & (VAR_1 | VAR_3))
  FUNC_5(VAR_14->primary_key, &VAR_19, VAR_12.key_len);

 VAR_15 = *(__be32 *)VAR_14->primary_key;
 FUNC_7();
 VAR_17 = FUNC_0(VAR_16);
 if (!VAR_17) {
  FUNC_8();
  return -VAR_0;
 }

 VAR_14->type = FUNC_4(FUNC_3(VAR_16), VAR_16, VAR_15);

 VAR_18 = VAR_17->arp_parms;
 FUNC_1(VAR_14->parms);
 VAR_14->parms = FUNC_6(VAR_18);
 FUNC_8();

 if (!VAR_16->header_ops) {
  VAR_14->nud_state = VAR_5;
  VAR_14->ops = &VAR_9;
  VAR_14->output = VAR_13;
 } else {
  if (VAR_14->type == VAR_8) {
   VAR_14->nud_state = VAR_5;
   FUNC_2(VAR_15, VAR_14->ha, VAR_16, 1);
  } else if (VAR_16->flags & (VAR_2 | VAR_1)) {
   VAR_14->nud_state = VAR_5;
   FUNC_5(VAR_14->ha, VAR_16->dev_addr, VAR_16->addr_len);
  } else if (VAR_14->type == VAR_7 ||
      (VAR_16->flags & VAR_3)) {
   VAR_14->nud_state = VAR_5;
   FUNC_5(VAR_14->ha, VAR_16->broadcast, VAR_16->addr_len);
  }

  if (VAR_16->header_ops->cache)
   VAR_14->ops = &VAR_11;
  else
   VAR_14->ops = &VAR_10;

  if (VAR_14->nud_state & VAR_6)
   VAR_14->output = VAR_14->ops->connected_output;
  else
   VAR_14->output = VAR_14->ops->output;
 }
 return 0;
}
