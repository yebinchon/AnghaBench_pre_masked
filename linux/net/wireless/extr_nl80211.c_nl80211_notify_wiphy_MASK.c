
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nl80211_dump_wiphy_state {int dummy; } ;
struct cfg80211_registered_device {int wiphy; } ;
typedef enum nl80211_commands { ____Placeholder_nl80211_commands } nl80211_commands ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ,struct sk_buff*,int ,int ,int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (struct cfg80211_registered_device*,int,struct sk_buff*,int ,int ,int ,struct nl80211_dump_wiphy_state*) ;
 int FUNC_3 (struct sk_buff*) ;
 struct sk_buff* FUNC_4 (int ,int ) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct cfg80211_registered_device *VAR_6,
     enum nl80211_commands VAR_7)
{
 struct sk_buff *VAR_8;
 struct nl80211_dump_wiphy_state VAR_9 = {};

 FUNC_0(VAR_7 != VAR_2 &&
  VAR_7 != VAR_1);

 VAR_8 = FUNC_4(VAR_4, VAR_0);
 if (!VAR_8)
  return;

 if (FUNC_2(VAR_6, VAR_7, VAR_8, 0, 0, 0, &VAR_9) < 0) {
  FUNC_3(VAR_8);
  return;
 }

 FUNC_1(&VAR_5, FUNC_5(&VAR_6->wiphy), VAR_8, 0,
    VAR_3, VAR_0);
}
