
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int sk; } ;
struct nlattr {int dummy; } ;
struct nl80211_dump_wiphy_state {int filter_wiphy; struct nlattr* split; } ;
struct netlink_callback {int nlh; } ;
struct net_device {TYPE_1__* ieee80211_ptr; } ;
struct cfg80211_registered_device {int wiphy_idx; } ;
struct TYPE_4__ {int maxattr; scalar_t__ hdrsize; } ;
struct TYPE_3__ {int wiphy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 struct net_device* FUNC_0 (int ,int) ;
 struct nlattr** FUNC_1 (int ,int,int ) ;
 int FUNC_2 (struct nlattr**) ;
 TYPE_2__ VAR_9 ;
 int VAR_10 ;
 void* FUNC_3 (struct nlattr*) ;
 int FUNC_4 (struct nlattr*) ;
 int FUNC_5 (int ,scalar_t__,struct nlattr**,int ,int ,int *) ;
 int FUNC_6 (int ) ;
 struct cfg80211_registered_device* FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct sk_buff *VAR_11,
        struct netlink_callback *VAR_12,
        struct nl80211_dump_wiphy_state *VAR_13)
{
 struct nlattr **VAR_14 = FUNC_1(VAR_8, sizeof(*VAR_14), VAR_3);
 int VAR_15;

 if (!VAR_14)
  return -VAR_1;

 VAR_15 = FUNC_5(VAR_12->nlh,
         VAR_2 + VAR_9.hdrsize,
         VAR_14, VAR_9.maxattr,
         VAR_10, ((void*)0));

 if (VAR_15) {
  VAR_15 = 0;
  goto out;
 }

 VAR_13->split = VAR_14[VAR_5];
 if (VAR_14[VAR_7])
  VAR_13->filter_wiphy = FUNC_3(VAR_14[VAR_7]);
 if (VAR_14[VAR_6])
  VAR_13->filter_wiphy = FUNC_4(VAR_14[VAR_6]) >> 32;
 if (VAR_14[VAR_4]) {
  struct net_device *VAR_16;
  struct cfg80211_registered_device *VAR_17;
  int VAR_18 = FUNC_3(VAR_14[VAR_4]);

  VAR_16 = FUNC_0(FUNC_6(VAR_11->sk), VAR_18);
  if (!VAR_16) {
   VAR_15 = -VAR_0;
   goto out;
  }
  if (VAR_16->ieee80211_ptr) {
   VAR_17 = FUNC_7(
    VAR_16->ieee80211_ptr->wiphy);
   VAR_13->filter_wiphy = VAR_17->wiphy_idx;
  }
 }

 VAR_15 = 0;
out:
 FUNC_2(VAR_14);
 return VAR_15;
}
