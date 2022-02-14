
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int ifindex; TYPE_1__* dcbnl_ops; } ;
struct dcb_app_type {int dcbx; int app; int ifindex; } ;
struct dcb_app {int priority; } ;
struct TYPE_2__ {int (* getdcbx ) (struct net_device*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct dcb_app_type*) ;
 int FUNC_1 (struct dcb_app*,int ) ;
 scalar_t__ FUNC_2 (struct dcb_app*,int ,int ) ;
 int VAR_2 ;
 int FUNC_3 (int *,struct dcb_app*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct net_device*) ;

int FUNC_7(struct net_device *VAR_3, struct dcb_app *VAR_4)
{
 struct dcb_app_type VAR_5;
 int VAR_6 = 0;

 VAR_5.ifindex = VAR_3->ifindex;
 FUNC_3(&VAR_5.app, VAR_4, sizeof(VAR_5.app));
 if (VAR_3->dcbnl_ops->getdcbx)
  VAR_5.dcbx = VAR_3->dcbnl_ops->getdcbx(VAR_3);

 FUNC_4(&VAR_2);

 if (FUNC_2(VAR_4, VAR_3->ifindex, VAR_4->priority)) {
  VAR_6 = -VAR_1;
  goto out;
 }

 VAR_6 = FUNC_1(VAR_4, VAR_3->ifindex);
out:
 FUNC_5(&VAR_2);
 if (!VAR_6)
  FUNC_0(VAR_0, &VAR_5);
 return VAR_6;
}
