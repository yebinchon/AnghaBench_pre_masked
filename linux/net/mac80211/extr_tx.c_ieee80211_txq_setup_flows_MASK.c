
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ vht_supported; } ;
struct ieee80211_supported_band {TYPE_4__ vht_cap; } ;
struct TYPE_10__ {int ecn; void* target; void* interval; } ;
struct TYPE_8__ {TYPE_2__* wiphy; } ;
struct fq {int memory_limit; int flows_cnt; int lock; } ;
struct ieee80211_local {int * cvars; TYPE_5__ cparams; TYPE_3__ hw; TYPE_1__* ops; struct fq fq; } ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;
struct TYPE_7__ {struct ieee80211_supported_band** bands; } ;
struct TYPE_6__ {int wake_tx_queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct fq*,int) ;
 int FUNC_4 (struct fq*,int ) ;
 int VAR_3 ;
 int FUNC_5 (struct ieee80211_local*) ;
 int * FUNC_6 (int,int,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

int FUNC_9(struct ieee80211_local *VAR_4)
{
 struct fq *VAR_5 = &VAR_4->fq;
 int VAR_6;
 int VAR_7;
 bool VAR_8 = 0;
 enum nl80211_band VAR_9;

 if (!VAR_4->ops->wake_tx_queue)
  return 0;

 VAR_6 = FUNC_3(VAR_5, 4096);
 if (VAR_6)
  return VAR_6;





 for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++) {
  struct ieee80211_supported_band *VAR_10;

  VAR_10 = VAR_4->hw.wiphy->bands[VAR_9];
  if (!VAR_10)
   continue;

  VAR_8 = VAR_8 || VAR_10->vht_cap.vht_supported;
 }

 if (!VAR_8)
  VAR_5->memory_limit = 4 << 20;

 FUNC_1(&VAR_4->cparams);
 VAR_4->cparams.interval = FUNC_0(100);
 VAR_4->cparams.target = FUNC_0(20);
 VAR_4->cparams.ecn = 1;

 VAR_4->cvars = FUNC_6(VAR_5->flows_cnt, sizeof(VAR_4->cvars[0]),
          VAR_1);
 if (!VAR_4->cvars) {
  FUNC_7(&VAR_5->lock);
  FUNC_4(VAR_5, VAR_3);
  FUNC_8(&VAR_5->lock);
  return -VAR_0;
 }

 for (VAR_7 = 0; VAR_7 < VAR_5->flows_cnt; VAR_7++)
  FUNC_2(&VAR_4->cvars[VAR_7]);

 FUNC_5(VAR_4);

 return 0;
}
