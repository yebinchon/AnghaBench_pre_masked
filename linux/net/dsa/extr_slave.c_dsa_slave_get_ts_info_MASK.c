
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ethtool_ts_info {int dummy; } ;
struct dsa_switch {TYPE_1__* ops; } ;
struct dsa_slave_priv {TYPE_2__* dp; } ;
struct TYPE_4__ {int index; struct dsa_switch* ds; } ;
struct TYPE_3__ {int (* get_ts_info ) (struct dsa_switch*,int ,struct ethtool_ts_info*) ;} ;


 int VAR_0 ;
 struct dsa_slave_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct dsa_switch*,int ,struct ethtool_ts_info*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1,
     struct ethtool_ts_info *VAR_2)
{
 struct dsa_slave_priv *VAR_3 = FUNC_0(VAR_1);
 struct dsa_switch *VAR_4 = VAR_3->dp->ds;

 if (!VAR_4->ops->get_ts_info)
  return -VAR_0;

 return VAR_4->ops->get_ts_info(VAR_4, VAR_3->dp->index, VAR_2);
}
