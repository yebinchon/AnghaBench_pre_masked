
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {scalar_t__ phydev; struct ethtool_ops* ethtool_ops; } ;
struct ethtool_ops {int (* get_sset_count ) (struct net_device*,int) ;scalar_t__ get_strings; int get_ethtool_phy_stats; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct net_device*,int) ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_10, int VAR_11)
{
 const struct ethtool_ops *VAR_12 = VAR_10->ethtool_ops;

 if (VAR_11 == VAR_1)
  return FUNC_0(VAR_6);

 if (VAR_11 == VAR_4)
  return FUNC_0(VAR_8);

 if (VAR_11 == VAR_5)
  return FUNC_0(VAR_9);

 if (VAR_11 == VAR_3)
  return FUNC_0(VAR_7);

 if (VAR_11 == VAR_2 && VAR_10->phydev &&
     !VAR_12->get_ethtool_phy_stats)
  return FUNC_1(VAR_10->phydev);

 if (VAR_12->get_sset_count && VAR_12->get_strings)
  return VAR_12->get_sset_count(VAR_10, VAR_11);
 else
  return -VAR_0;
}
