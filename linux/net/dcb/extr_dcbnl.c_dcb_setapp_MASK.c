
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int ifindex; TYPE_1__* dcbnl_ops; } ;
struct TYPE_4__ {scalar_t__ priority; } ;
struct dcb_app_type {int list; TYPE_2__ app; int dcbx; int ifindex; } ;
struct dcb_app {scalar_t__ priority; } ;
struct TYPE_3__ {int (* getdcbx ) (struct net_device*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,struct dcb_app_type*) ;
 int FUNC_1 (struct dcb_app*,int ) ;
 struct dcb_app_type* FUNC_2 (struct dcb_app*,int ,int) ;
 int VAR_1 ;
 int FUNC_3 (struct dcb_app_type*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*,struct dcb_app*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct net_device*) ;

int FUNC_9(struct net_device *VAR_2, struct dcb_app *VAR_3)
{
 struct dcb_app_type *VAR_4;
 struct dcb_app_type VAR_5;
 int VAR_6 = 0;

 VAR_5.ifindex = VAR_2->ifindex;
 FUNC_5(&VAR_5.app, VAR_3, sizeof(VAR_5.app));
 if (VAR_2->dcbnl_ops->getdcbx)
  VAR_5.dcbx = VAR_2->dcbnl_ops->getdcbx(VAR_2);

 FUNC_6(&VAR_1);

 VAR_4 = FUNC_2(VAR_3, VAR_2->ifindex, -1);
 if (VAR_4) {
  if (VAR_3->priority)
   VAR_4->app.priority = VAR_3->priority;
  else {
   FUNC_4(&VAR_4->list);
   FUNC_3(VAR_4);
  }
  goto out;
 }

 if (VAR_3->priority)
  VAR_6 = FUNC_1(VAR_3, VAR_2->ifindex);
out:
 FUNC_7(&VAR_1);
 if (!VAR_6)
  FUNC_0(VAR_0, &VAR_5);
 return VAR_6;
}
