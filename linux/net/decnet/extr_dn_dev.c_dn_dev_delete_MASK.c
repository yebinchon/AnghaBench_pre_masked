
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int * dn_ptr; } ;
struct TYPE_2__ {int (* down ) (struct net_device*) ;} ;
struct dn_dev {scalar_t__ peer; scalar_t__ router; int neigh_parms; TYPE_1__ parms; int timer; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_3 (struct dn_dev*) ;
 int FUNC_4 (int *,struct net_device*) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (scalar_t__) ;
 struct dn_dev* FUNC_7 (int *) ;
 int FUNC_8 (struct net_device*) ;

__attribute__((used)) static void FUNC_9(struct net_device *VAR_1)
{
 struct dn_dev *VAR_2 = FUNC_7(VAR_1->dn_ptr);

 if (VAR_2 == ((void*)0))
  return;

 FUNC_0(&VAR_2->timer);
 FUNC_2(&VAR_2->parms);
 FUNC_1(VAR_1);
 FUNC_4(&VAR_0, VAR_1);

 if (VAR_2->parms.down)
  VAR_2->parms.down(VAR_1);

 VAR_1->dn_ptr = ((void*)0);

 FUNC_5(&VAR_0, VAR_2->neigh_parms);
 FUNC_4(&VAR_0, VAR_1);

 if (VAR_2->router)
  FUNC_6(VAR_2->router);
 if (VAR_2->peer)
  FUNC_6(VAR_2->peer);

 FUNC_3(VAR_2);
}
