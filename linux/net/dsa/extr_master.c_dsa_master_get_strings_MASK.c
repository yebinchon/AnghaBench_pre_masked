
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char uint8_t ;
typedef int uint32_t ;
struct net_device {scalar_t__ phydev; struct dsa_port* dsa_ptr; } ;
struct ethtool_ops {int (* get_sset_count ) (struct net_device*,int ) ;int (* get_strings ) (struct net_device*,int ,char*) ;int get_ethtool_phy_stats; } ;
struct dsa_switch {TYPE_1__* ops; } ;
struct dsa_port {int index; struct dsa_switch* ds; struct ethtool_ops* orig_ethtool_ops; } ;
typedef int pfx ;
struct TYPE_2__ {int (* get_sset_count ) (struct dsa_switch*,int,int ) ;int (* get_strings ) (struct dsa_switch*,int,int ,char*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,char*) ;
 int FUNC_4 (char*,int,char*,int) ;
 int FUNC_5 (struct net_device*,int ) ;
 int FUNC_6 (struct net_device*,int ,char*) ;
 int FUNC_7 (struct dsa_switch*,int,int ,char*) ;
 int FUNC_8 (struct dsa_switch*,int,int ) ;

__attribute__((used)) static void FUNC_9(struct net_device *VAR_2, uint32_t VAR_3,
       uint8_t *VAR_4)
{
 struct dsa_port *VAR_5 = VAR_2->dsa_ptr;
 const struct ethtool_ops *VAR_6 = VAR_5->orig_ethtool_ops;
 struct dsa_switch *VAR_7 = VAR_5->ds;
 int VAR_8 = VAR_5->index;
 int VAR_9 = VAR_0;
 int VAR_10 = 0, VAR_11;
 unsigned int VAR_12;
 uint8_t VAR_13[4];
 uint8_t *VAR_14;

 FUNC_4(VAR_13, sizeof(VAR_13), "p%.2d", VAR_8);

 VAR_13[sizeof(VAR_13) - 1] = '_';

 if (VAR_3 == VAR_1 && VAR_2->phydev &&
     !VAR_6->get_ethtool_phy_stats) {
  VAR_10 = FUNC_2(VAR_2->phydev);
  if (VAR_10 < 0)
   VAR_10 = 0;
  else
   FUNC_3(VAR_2->phydev, VAR_4);
 } else if (VAR_6->get_sset_count && VAR_6->get_strings) {
  VAR_10 = VAR_6->get_sset_count(VAR_2, VAR_3);
  if (VAR_10 < 0)
   VAR_10 = 0;
  VAR_6->get_strings(VAR_2, VAR_3, VAR_4);
 }

 if (VAR_7->ops->get_strings) {
  VAR_14 = VAR_4 + VAR_10 * VAR_9;




  VAR_7->ops->get_strings(VAR_7, VAR_8, VAR_3, VAR_14);
  VAR_11 = VAR_7->ops->get_sset_count(VAR_7, VAR_8, VAR_3);
  for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++) {
   FUNC_1(VAR_14 + (VAR_12 * VAR_9 + sizeof(VAR_13)),
    VAR_14 + VAR_12 * VAR_9, VAR_9 - sizeof(VAR_13));
   FUNC_0(VAR_14 + VAR_12 * VAR_9, VAR_13, sizeof(VAR_13));
  }
 }
}
