
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {struct ethtool_ops* ethtool_ops; struct dsa_port* dsa_ptr; } ;
struct ethtool_ops {int get_ethtool_phy_stats; int get_strings; int get_ethtool_stats; int get_sset_count; int get_regs; int get_regs_len; } ;
struct dsa_switch {int dev; } ;
struct dsa_port {struct ethtool_ops* orig_ethtool_ops; struct dsa_switch* ds; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ethtool_ops* FUNC_0 (int ,int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct ethtool_ops*,struct ethtool_ops*,int) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_8)
{
 struct dsa_port *VAR_9 = VAR_8->dsa_ptr;
 struct dsa_switch *VAR_10 = VAR_9->ds;
 struct ethtool_ops *VAR_11;

 VAR_11 = FUNC_0(VAR_10->dev, sizeof(*VAR_11), VAR_1);
 if (!VAR_11)
  return -VAR_0;

 VAR_9->orig_ethtool_ops = VAR_8->ethtool_ops;
 if (VAR_9->orig_ethtool_ops)
  FUNC_1(VAR_11, VAR_9->orig_ethtool_ops, sizeof(*VAR_11));

 VAR_11->get_regs_len = VAR_5;
 VAR_11->get_regs = VAR_4;
 VAR_11->get_sset_count = VAR_6;
 VAR_11->get_ethtool_stats = VAR_3;
 VAR_11->get_strings = VAR_7;
 VAR_11->get_ethtool_phy_stats = VAR_2;

 VAR_8->ethtool_ops = VAR_11;

 return 0;
}
