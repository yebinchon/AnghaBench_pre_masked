
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int * next_beacon; } ;
struct TYPE_6__ {TYPE_2__ ap; } ;
struct TYPE_4__ {int type; } ;
struct ieee80211_sub_if_data {TYPE_3__ u; TYPE_1__ vif; } ;


 int VAR_0 ;



 int FUNC_0 (int) ;
 int FUNC_1 (struct ieee80211_sub_if_data*,int *,int *) ;
 int FUNC_2 (struct ieee80211_sub_if_data*) ;
 int FUNC_3 (struct ieee80211_sub_if_data*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct ieee80211_sub_if_data *VAR_1,
       u32 *VAR_2)
{
 int VAR_3;

 switch (VAR_1->vif.type) {
 case 129:
  VAR_3 = FUNC_1(VAR_1, VAR_1->u.ap.next_beacon,
           ((void*)0));
  FUNC_4(VAR_1->u.ap.next_beacon);
  VAR_1->u.ap.next_beacon = ((void*)0);

  if (VAR_3 < 0)
   return VAR_3;
  *VAR_2 |= VAR_3;
  break;
 case 130:
  VAR_3 = FUNC_2(VAR_1);
  if (VAR_3 < 0)
   return VAR_3;
  *VAR_2 |= VAR_3;
  break;
 default:
  FUNC_0(1);
  return -VAR_0;
 }

 return 0;
}
