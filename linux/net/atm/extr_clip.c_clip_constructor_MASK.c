
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct neighbour {scalar_t__ type; TYPE_2__* ops; int output; int nud_state; TYPE_1__* tbl; } ;
struct atmarp_entry {scalar_t__ expires; int * vccs; struct neighbour* neigh; } ;
struct TYPE_4__ {int output; } ;
struct TYPE_3__ {scalar_t__ family; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_2__ VAR_4 ;
 scalar_t__ VAR_5 ;
 struct atmarp_entry* FUNC_0 (struct neighbour*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_6, struct neighbour *VAR_7)
{
 struct atmarp_entry *VAR_8 = FUNC_0(VAR_7);

 if (VAR_7->tbl->family != VAR_0)
  return -VAR_1;

 if (VAR_7->type != VAR_3)
  return -VAR_1;

 VAR_7->nud_state = VAR_2;
 VAR_7->ops = &VAR_4;
 VAR_7->output = VAR_7->ops->output;
 VAR_8->neigh = VAR_7;
 VAR_8->vccs = ((void*)0);
 VAR_8->expires = VAR_5 - 1;

 return 0;
}
