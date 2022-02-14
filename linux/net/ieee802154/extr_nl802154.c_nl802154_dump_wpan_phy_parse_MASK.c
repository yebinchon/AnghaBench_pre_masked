
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct nl802154_dump_wpan_phy_state {int filter_wpan_phy; } ;
struct netlink_callback {int nlh; } ;
struct net_device {TYPE_1__* ieee802154_ptr; } ;
struct cfg802154_registered_device {int wpan_phy_idx; } ;
struct TYPE_5__ {int maxattr; scalar_t__ hdrsize; } ;
struct TYPE_4__ {int wpan_phy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 struct net_device* FUNC_0 (int *,int) ;
 struct nlattr** FUNC_1 (TYPE_2__*) ;
 int VAR_5 ;
 TYPE_2__ VAR_6 ;
 int VAR_7 ;
 void* FUNC_2 (struct nlattr*) ;
 int FUNC_3 (struct nlattr*) ;
 int FUNC_4 (int ,scalar_t__,struct nlattr**,int ,int ,int *) ;
 struct cfg802154_registered_device* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_8,
     struct netlink_callback *VAR_9,
     struct nl802154_dump_wpan_phy_state *VAR_10)
{
 struct nlattr **VAR_11 = FUNC_1(&VAR_6);
 int VAR_12 = FUNC_4(VAR_9->nlh,
      VAR_1 + VAR_6.hdrsize,
      VAR_11, VAR_6.maxattr,
      VAR_7, ((void*)0));




 if (VAR_12)
  return 0;

 if (VAR_11[VAR_4])
  VAR_10->filter_wpan_phy = FUNC_2(VAR_11[VAR_4]);
 if (VAR_11[VAR_3])
  VAR_10->filter_wpan_phy = FUNC_3(VAR_11[VAR_3]) >> 32;
 if (VAR_11[VAR_2]) {
  struct net_device *VAR_13;
  struct cfg802154_registered_device *VAR_14;
  int VAR_15 = FUNC_2(VAR_11[VAR_2]);

  VAR_13 = FUNC_0(&VAR_5, VAR_15);
  if (!VAR_13)
   return -VAR_0;
  if (VAR_13->ieee802154_ptr) {
   VAR_14 = FUNC_5(
     VAR_13->ieee802154_ptr->wpan_phy);
   VAR_10->filter_wpan_phy = VAR_14->wpan_phy_idx;
  }
 }

 return 0;
}
