
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct neigh_parms {TYPE_1__* tbl; } ;
struct TYPE_2__ {scalar_t__ family; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct neigh_parms*,int ,int ) ;
 int VAR_2 ;

int FUNC_1(struct net_device *VAR_3, struct neigh_parms *VAR_4)
{

 FUNC_0(VAR_4, VAR_1, 0);





 if (VAR_4->tbl->family != VAR_0)
  FUNC_0(VAR_4, VAR_2, 0);
 return 0;
}
