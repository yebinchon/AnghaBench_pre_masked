
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {scalar_t__ type; int neigh_priv_len; TYPE_1__* ieee802154_ptr; int needed_tailroom; scalar_t__ needed_headroom; int dev_addr; } ;
struct net {int dummy; } ;
struct lowpan_802154_neigh {int dummy; } ;
struct TYPE_4__ {struct net_device* wdev; } ;
struct TYPE_3__ {struct net_device* lowpan_dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 struct net_device* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 TYPE_2__* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*,int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (struct nlattr*) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static int FUNC_9(struct net *VAR_8, struct net_device *VAR_9,
     struct nlattr *VAR_10[], struct nlattr *VAR_11[],
     struct netlink_ext_ack *VAR_12)
{
 struct net_device *VAR_13;
 int VAR_14;

 FUNC_0();

 FUNC_8("adding new link\n");

 if (!VAR_10[VAR_5])
  return -VAR_2;

 VAR_13 = FUNC_1(FUNC_2(VAR_9), FUNC_7(VAR_10[VAR_5]));
 if (!VAR_13)
  return -VAR_3;
 if (VAR_13->type != VAR_0) {
  FUNC_3(VAR_13);
  return -VAR_2;
 }

 if (VAR_13->ieee802154_ptr->lowpan_dev) {
  FUNC_3(VAR_13);
  return -VAR_1;
 }

 FUNC_4(VAR_9)->wdev = VAR_13;

 FUNC_6(VAR_9->dev_addr, VAR_13->dev_addr, VAR_4);






 VAR_9->needed_headroom = VAR_6 +
    VAR_13->needed_headroom;
 VAR_9->needed_tailroom = VAR_13->needed_tailroom;

 VAR_9->neigh_priv_len = sizeof(struct lowpan_802154_neigh);

 VAR_14 = FUNC_5(VAR_9, VAR_7);
 if (VAR_14 < 0) {
  FUNC_3(VAR_13);
  return VAR_14;
 }

 VAR_13->ieee802154_ptr->lowpan_dev = VAR_9;
 return 0;
}
