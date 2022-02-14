
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vif_device {int const flags; struct net_device* dev; } ;
struct net_device {int ifindex; } ;
struct net {int dummy; } ;
struct mr_table {int mroute_reg_vif_num; int maxvif; int id; struct vif_device* vif_table; } ;
struct mif6ctl {int mif6c_mifi; int mif6c_flags; int vifc_threshold; int vifc_rate_limit; int mif6c_pifi; } ;
struct TYPE_2__ {int mc_forwarding; } ;
struct inet6_dev {TYPE_1__ cnf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct mr_table*,int) ;
 struct inet6_dev* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net*,int ,struct vif_device*,int,int ) ;
 struct net_device* FUNC_3 (struct net*,int ) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*,int) ;
 int FUNC_7 (int ,int ,int ,int ,TYPE_1__*) ;
 struct net_device* FUNC_8 (struct net*,struct mr_table*) ;
 int VAR_8 ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct vif_device*,struct net_device*,int ,int ,int,int const) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(struct net *VAR_9, struct mr_table *VAR_10,
      struct mif6ctl *VAR_11, int VAR_12)
{
 int VAR_13 = VAR_11->mif6c_mifi;
 struct vif_device *VAR_14 = &VAR_10->vif_table[VAR_13];
 struct net_device *VAR_15;
 struct inet6_dev *VAR_16;
 int VAR_17;


 if (FUNC_0(VAR_10, VAR_13))
  return -VAR_0;

 switch (VAR_11->mif6c_flags) {
 case 0:
  VAR_15 = FUNC_3(VAR_9, VAR_11->mif6c_pifi);
  if (!VAR_15)
   return -VAR_1;
  VAR_17 = FUNC_6(VAR_15, 1);
  if (VAR_17) {
   FUNC_5(VAR_15);
   return VAR_17;
  }
  break;
 default:
  return -VAR_2;
 }

 VAR_16 = FUNC_1(VAR_15);
 if (VAR_16) {
  VAR_16->cnf.mc_forwarding++;
  FUNC_7(FUNC_4(VAR_15), VAR_6,
          VAR_5,
          VAR_15->ifindex, &VAR_16->cnf);
 }


 FUNC_10(VAR_14, VAR_15, VAR_11->vifc_rate_limit, VAR_11->vifc_threshold,
   VAR_11->mif6c_flags | (!VAR_12 ? VAR_7 : 0),
   128);


 FUNC_11(&VAR_8);
 VAR_14->dev = VAR_15;




 if (VAR_13 + 1 > VAR_10->maxvif)
  VAR_10->maxvif = VAR_13 + 1;
 FUNC_12(&VAR_8);
 FUNC_2(VAR_9, VAR_4,
           VAR_14, VAR_13, VAR_10->id);
 return 0;
}
