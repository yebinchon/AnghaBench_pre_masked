
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ type; int debugfs_dir; } ;
struct ieee80211_sub_if_data {TYPE_1__ vif; } ;


 int FUNC_0 (int ) ;




 scalar_t__ VAR_0 ;


 int FUNC_1 (struct ieee80211_sub_if_data*) ;
 int FUNC_2 (struct ieee80211_sub_if_data*) ;
 int FUNC_3 (struct ieee80211_sub_if_data*) ;
 int FUNC_4 (struct ieee80211_sub_if_data*) ;
 int FUNC_5 (struct ieee80211_sub_if_data*) ;
 int FUNC_6 (struct ieee80211_sub_if_data*) ;
 int FUNC_7 (struct ieee80211_sub_if_data*) ;
 int FUNC_8 (struct ieee80211_sub_if_data*) ;
 int FUNC_9 (struct ieee80211_sub_if_data*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_10(struct ieee80211_sub_if_data *VAR_6)
{
 if (!VAR_6->vif.debugfs_dir)
  return;

 FUNC_0(VAR_2);
 FUNC_0(VAR_3);
 FUNC_0(VAR_4);
 FUNC_0(VAR_5);
 FUNC_0(VAR_1);

 if (VAR_6->vif.type != VAR_0)
  FUNC_2(VAR_6);

 switch (VAR_6->vif.type) {
 case 130:





  break;
 case 129:
  FUNC_7(VAR_6);
  break;
 case 133:
  FUNC_3(VAR_6);
  break;
 case 132:
  FUNC_1(VAR_6);
  break;
 case 131:
  FUNC_8(VAR_6);
  break;
 case 128:
  FUNC_9(VAR_6);
  break;
 default:
  break;
 }
}
