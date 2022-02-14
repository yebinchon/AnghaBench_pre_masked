
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nl80211_dump_wiphy_state {int dummy; } ;
struct genl_info {int snd_seq; int snd_portid; struct cfg80211_registered_device** user_ptr; } ;
struct cfg80211_registered_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sk_buff*,struct genl_info*) ;
 scalar_t__ FUNC_1 (struct cfg80211_registered_device*,int ,struct sk_buff*,int ,int ,int ,struct nl80211_dump_wiphy_state*) ;
 int FUNC_2 (struct sk_buff*) ;
 struct sk_buff* FUNC_3 (int,int ) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_4, struct genl_info *VAR_5)
{
 struct sk_buff *VAR_6;
 struct cfg80211_registered_device *VAR_7 = VAR_5->user_ptr[0];
 struct nl80211_dump_wiphy_state VAR_8 = {};

 VAR_6 = FUNC_3(4096, VAR_2);
 if (!VAR_6)
  return -VAR_1;

 if (FUNC_1(VAR_7, VAR_3, VAR_6,
          VAR_5->snd_portid, VAR_5->snd_seq, 0,
          &VAR_8) < 0) {
  FUNC_2(VAR_6);
  return -VAR_0;
 }

 return FUNC_0(VAR_6, VAR_5);
}
