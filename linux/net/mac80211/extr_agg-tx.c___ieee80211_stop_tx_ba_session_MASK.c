
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int mtx; } ;
struct sta_info {TYPE_1__ ampdu_mlme; } ;
typedef enum ieee80211_agg_stop_reason { ____Placeholder_ieee80211_agg_stop_reason } ieee80211_agg_stop_reason ;


 int FUNC_0 (struct sta_info*,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct sta_info *VAR_0, u16 VAR_1,
       enum ieee80211_agg_stop_reason VAR_2)
{
 int VAR_3;

 FUNC_1(&VAR_0->ampdu_mlme.mtx);

 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);

 FUNC_2(&VAR_0->ampdu_mlme.mtx);

 return VAR_3;
}
