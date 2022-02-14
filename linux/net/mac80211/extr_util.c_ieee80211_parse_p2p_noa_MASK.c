
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ieee80211_p2p_noa_desc {int count; int interval; int duration; int start_time; } ;
struct ieee80211_p2p_noa_attr {struct ieee80211_p2p_noa_desc* desc; } ;
struct ieee80211_noa_data {int* count; TYPE_1__* desc; } ;
struct TYPE_2__ {void* duration; void* interval; void* start; } ;


 int VAR_0 ;
 int FUNC_0 (struct ieee80211_noa_data*,int ,int) ;
 int FUNC_1 (struct ieee80211_noa_data*,int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (struct ieee80211_noa_data*,int ,int) ;

int FUNC_4(const struct ieee80211_p2p_noa_attr *VAR_1,
       struct ieee80211_noa_data *VAR_2, u32 VAR_3)
{
 int VAR_4 = 0;
 int VAR_5;

 FUNC_3(VAR_2, 0, sizeof(*VAR_2));

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  const struct ieee80211_p2p_noa_desc *VAR_6 = &VAR_1->desc[VAR_5];

  if (!VAR_6->count || !VAR_6->duration)
   continue;

  VAR_2->count[VAR_5] = VAR_6->count;
  VAR_2->desc[VAR_5].start = FUNC_2(VAR_6->start_time);
  VAR_2->desc[VAR_5].duration = FUNC_2(VAR_6->duration);
  VAR_2->desc[VAR_5].interval = FUNC_2(VAR_6->interval);

  if (VAR_2->count[VAR_5] > 1 &&
      VAR_2->desc[VAR_5].interval < VAR_2->desc[VAR_5].duration)
   continue;

  FUNC_0(VAR_2, VAR_3, VAR_5);
  VAR_4++;
 }

 if (VAR_4)
  FUNC_1(VAR_2, VAR_3);

 return VAR_4;
}
