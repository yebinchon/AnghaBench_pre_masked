
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct station_parameters {int sta_flags_mask; int sta_flags_set; } ;
struct nlattr {int dummy; } ;
struct nl80211_sta_flag_update {int mask; int set; } ;
struct genl_info {int extack; struct nlattr** attrs; } ;
typedef enum nl80211_iftype { ____Placeholder_nl80211_iftype } nl80211_iftype ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;






 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct nl80211_sta_flag_update* FUNC_1 (struct nlattr*) ;
 scalar_t__ FUNC_2 (struct nlattr**,int,struct nlattr*,int ,int ) ;
 int VAR_12 ;

__attribute__((used)) static int FUNC_3(struct genl_info *VAR_13,
          enum nl80211_iftype VAR_14,
          struct station_parameters *VAR_15)
{
 struct nlattr *VAR_16[VAR_5 + 1];
 struct nlattr *VAR_17;
 int VAR_18;





 VAR_17 = VAR_13->attrs[VAR_2];
 if (VAR_17) {
  struct nl80211_sta_flag_update *VAR_19;

  VAR_19 = FUNC_1(VAR_17);
  VAR_15->sta_flags_mask = VAR_19->mask;
  VAR_15->sta_flags_set = VAR_19->set;
  VAR_15->sta_flags_set &= VAR_15->sta_flags_mask;
  if ((VAR_15->sta_flags_mask |
       VAR_15->sta_flags_set) & FUNC_0(VAR_11))
   return -VAR_0;
  return 0;
 }



 VAR_17 = VAR_13->attrs[VAR_1];
 if (!VAR_17)
  return 0;

 if (FUNC_2(VAR_16, VAR_5, VAR_17, VAR_12, VAR_13->extack))
  return -VAR_0;







 switch (VAR_14) {
 case 133:
 case 132:
 case 129:
  VAR_15->sta_flags_mask = FUNC_0(VAR_4) |
      FUNC_0(VAR_8) |
      FUNC_0(VAR_10) |
      FUNC_0(VAR_7);
  break;
 case 130:
 case 128:
  VAR_15->sta_flags_mask = FUNC_0(VAR_4) |
      FUNC_0(VAR_9);
  break;
 case 131:
  VAR_15->sta_flags_mask = FUNC_0(VAR_3) |
      FUNC_0(VAR_7) |
      FUNC_0(VAR_4);
  break;
 default:
  return -VAR_0;
 }

 for (VAR_18 = 1; VAR_18 <= VAR_5; VAR_18++) {
  if (VAR_16[VAR_18]) {
   VAR_15->sta_flags_set |= (1<<VAR_18);


   if (VAR_18 > VAR_6)
    return -VAR_0;
  }
 }

 return 0;
}
