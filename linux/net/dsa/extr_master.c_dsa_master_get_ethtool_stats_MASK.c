
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct net_device {struct dsa_port* dsa_ptr; } ;
struct ethtool_stats {int dummy; } ;
struct ethtool_ops {int (* get_sset_count ) (struct net_device*,int ) ;int (* get_ethtool_stats ) (struct net_device*,struct ethtool_stats*,int *) ;} ;
struct dsa_switch {TYPE_1__* ops; } ;
struct dsa_port {int index; struct dsa_switch* ds; struct ethtool_ops* orig_ethtool_ops; } ;
struct TYPE_2__ {int (* get_ethtool_stats ) (struct dsa_switch*,int,int *) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,int ) ;
 int FUNC_1 (struct net_device*,struct ethtool_stats*,int *) ;
 int FUNC_2 (struct dsa_switch*,int,int *) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_1,
      struct ethtool_stats *VAR_2,
      uint64_t *VAR_3)
{
 struct dsa_port *VAR_4 = VAR_1->dsa_ptr;
 const struct ethtool_ops *VAR_5 = VAR_4->orig_ethtool_ops;
 struct dsa_switch *VAR_6 = VAR_4->ds;
 int VAR_7 = VAR_4->index;
 int VAR_8 = 0;

 if (VAR_5->get_sset_count && VAR_5->get_ethtool_stats) {
  VAR_8 = VAR_5->get_sset_count(VAR_1, VAR_0);
  VAR_5->get_ethtool_stats(VAR_1, VAR_2, VAR_3);
 }

 if (VAR_6->ops->get_ethtool_stats)
  VAR_6->ops->get_ethtool_stats(VAR_6, VAR_7, VAR_3 + VAR_8);
}
