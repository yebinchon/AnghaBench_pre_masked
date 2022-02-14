
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tid_ampdu_tx {int state; } ;
struct TYPE_2__ {int mtx; int work; } ;
struct sta_info {TYPE_1__ ampdu_mlme; } ;
typedef enum ieee80211_agg_stop_reason { ____Placeholder_ieee80211_agg_stop_reason } ieee80211_agg_stop_reason ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sta_info*,int,int ,int ,int) ;
 int FUNC_1 (struct sta_info*,int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct sta_info*,int,struct tid_ampdu_tx*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct tid_ampdu_tx* FUNC_6 (struct sta_info*,int) ;
 scalar_t__ FUNC_7 (int ,int *) ;

void FUNC_8(struct sta_info *VAR_6,
      enum ieee80211_agg_stop_reason VAR_7)
{
 int VAR_8;

 FUNC_4(&VAR_6->ampdu_mlme.mtx);
 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++)
  FUNC_0(VAR_6, VAR_8, VAR_4,
      VAR_5,
      VAR_7 != VAR_0 &&
      VAR_7 != VAR_1);

 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++)
  FUNC_1(VAR_6, VAR_8, VAR_7);
 FUNC_5(&VAR_6->ampdu_mlme.mtx);






 if(VAR_7 == VAR_0) {
  FUNC_2(&VAR_6->ampdu_mlme.work);

  FUNC_4(&VAR_6->ampdu_mlme.mtx);
  for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
   struct tid_ampdu_tx *VAR_9 =
    FUNC_6(VAR_6, VAR_8);

   if (!VAR_9)
    continue;

   if (FUNC_7(VAR_2, &VAR_9->state))
    FUNC_3(VAR_6, VAR_8, VAR_9);
  }
  FUNC_5(&VAR_6->ampdu_mlme.mtx);
 }
}
