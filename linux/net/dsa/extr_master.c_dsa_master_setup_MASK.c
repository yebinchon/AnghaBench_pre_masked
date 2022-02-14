
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int kobj; } ;
struct net_device {TYPE_1__ dev; struct dsa_port* dsa_ptr; } ;
struct dsa_port {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*,struct dsa_port*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 () ;

int FUNC_7(struct net_device *VAR_1, struct dsa_port *VAR_2)
{
 int VAR_3;

 FUNC_4(VAR_1, VAR_2);





 FUNC_6();

 VAR_1->dsa_ptr = VAR_2;
 VAR_3 = FUNC_0(VAR_1);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_2(VAR_1);
 if (VAR_3)
  goto out_err_ethtool_teardown;

 VAR_3 = FUNC_5(&VAR_1->dev.kobj, &VAR_0);
 if (VAR_3)
  goto out_err_ndo_teardown;

 return VAR_3;

out_err_ndo_teardown:
 FUNC_3(VAR_1);
out_err_ethtool_teardown:
 FUNC_1(VAR_1);
 return VAR_3;
}
