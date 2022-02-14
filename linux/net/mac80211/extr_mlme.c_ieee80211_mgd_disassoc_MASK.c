
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct ieee80211_if_managed {TYPE_2__* associated; } ;
struct TYPE_3__ {struct ieee80211_if_managed mgd; } ;
struct ieee80211_sub_if_data {TYPE_1__ u; } ;
struct cfg80211_disassoc_request {int reason_code; int local_state_change; TYPE_2__* bss; } ;
typedef int frame_buf ;
struct TYPE_4__ {int bssid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ieee80211_sub_if_data*,int *,int,int,int ) ;
 int FUNC_2 (struct ieee80211_sub_if_data*,int ,int ,int,int *) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (struct ieee80211_sub_if_data*,char*,int ,int ,int ) ;

int FUNC_5(struct ieee80211_sub_if_data *VAR_4,
      struct cfg80211_disassoc_request *VAR_5)
{
 struct ieee80211_if_managed *VAR_6 = &VAR_4->u.mgd;
 u8 VAR_7[VAR_1];
 u8 VAR_8[VAR_2];







 if (VAR_6->associated != VAR_5->bss)
  return -VAR_0;

 FUNC_4(VAR_4,
     "disassociating from %pM by local choice (Reason: %u=%s)\n",
     VAR_5->bss->bssid, VAR_5->reason_code, FUNC_0(VAR_5->reason_code));

 FUNC_3(VAR_7, VAR_5->bss->bssid, VAR_1);
 FUNC_2(VAR_4, VAR_3,
          VAR_5->reason_code, !VAR_5->local_state_change,
          VAR_8);

 FUNC_1(VAR_4, VAR_8, sizeof(VAR_8), 1,
        VAR_5->reason_code);

 return 0;
}
