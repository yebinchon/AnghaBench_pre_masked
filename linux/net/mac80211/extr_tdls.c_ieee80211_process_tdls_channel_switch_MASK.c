
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wiphy {int features; } ;
struct sk_buff {scalar_t__ data; } ;
struct ieee80211_tdls_data {int action_code; } ;
struct ieee80211_sub_if_data {TYPE_2__* local; } ;
struct TYPE_3__ {struct wiphy* wiphy; } ;
struct TYPE_4__ {TYPE_1__ hw; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int) ;


 int FUNC_2 (struct ieee80211_sub_if_data*,struct sk_buff*) ;
 int FUNC_3 (struct ieee80211_sub_if_data*,struct sk_buff*) ;
 scalar_t__ FUNC_4 (struct sk_buff*) ;

__attribute__((used)) static void
FUNC_5(struct ieee80211_sub_if_data *VAR_1,
          struct sk_buff *VAR_2)
{
 struct ieee80211_tdls_data *VAR_3 = (void *)VAR_2->data;
 struct wiphy *VAR_4 = VAR_1->local->hw.wiphy;

 FUNC_0();


 if (!(VAR_4->features & VAR_0))
  return;


 if (FUNC_4(VAR_2))
  return;




 switch (VAR_3->action_code) {
 case 129:
  FUNC_2(VAR_1, VAR_2);
  break;
 case 128:
  FUNC_3(VAR_1, VAR_2);
  break;
 default:
  FUNC_1(1);
  return;
 }
}
