
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vif_device {int flags; struct net_device* dev; } ;
struct net_device {int ifindex; } ;
struct mr_table {int maxvif; int mroute_reg_vif_num; int id; int net; struct vif_device* vif_table; } ;
struct list_head {int dummy; } ;
struct TYPE_2__ {int mc_forwarding; } ;
struct inet6_dev {TYPE_1__ cnf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct mr_table*,int) ;
 struct inet6_dev* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,int ,struct vif_device*,int,int ) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*,int) ;
 int FUNC_6 (int ,int ,int ,int ,TYPE_1__*) ;
 int VAR_5 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct net_device*,struct list_head*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct mr_table *VAR_6, int VAR_7, int VAR_8,
         struct list_head *VAR_9)
{
 struct vif_device *VAR_10;
 struct net_device *VAR_11;
 struct inet6_dev *VAR_12;

 if (VAR_7 < 0 || VAR_7 >= VAR_6->maxvif)
  return -VAR_0;

 VAR_10 = &VAR_6->vif_table[VAR_7];

 if (FUNC_0(VAR_6, VAR_7))
  FUNC_2(FUNC_7(&VAR_6->net),
            VAR_1, VAR_10, VAR_7,
            VAR_6->id);

 FUNC_9(&VAR_5);
 VAR_11 = VAR_10->dev;
 VAR_10->dev = ((void*)0);

 if (!VAR_11) {
  FUNC_10(&VAR_5);
  return -VAR_0;
 }






 if (VAR_7 + 1 == VAR_6->maxvif) {
  int VAR_13;
  for (VAR_13 = VAR_7 - 1; VAR_13 >= 0; VAR_13--) {
   if (FUNC_0(VAR_6, VAR_13))
    break;
  }
  VAR_6->maxvif = VAR_13 + 1;
 }

 FUNC_10(&VAR_5);

 FUNC_5(VAR_11, -1);

 VAR_12 = FUNC_1(VAR_11);
 if (VAR_12) {
  VAR_12->cnf.mc_forwarding--;
  FUNC_6(FUNC_3(VAR_11), VAR_4,
          VAR_3,
          VAR_11->ifindex, &VAR_12->cnf);
 }

 if ((VAR_10->flags & VAR_2) && !VAR_8)
  FUNC_8(VAR_11, VAR_9);

 FUNC_4(VAR_11);
 return 0;
}
