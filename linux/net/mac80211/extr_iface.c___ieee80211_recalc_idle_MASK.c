
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ieee80211_local {int scanning; int roc_list; TYPE_1__* ops; scalar_t__ monitors; int chanctx_list; int mtx; } ;
struct TYPE_2__ {int remain_on_channel; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ieee80211_local*) ;
 int FUNC_1 (struct ieee80211_local*) ;
 int FUNC_2 (struct ieee80211_local*,unsigned int,unsigned int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ,int *) ;

__attribute__((used)) static u32 FUNC_6(struct ieee80211_local *VAR_4,
       bool VAR_5)
{
 bool VAR_6, VAR_7, VAR_8;
 unsigned int VAR_9 = 0, VAR_10 = 0;

 FUNC_4(&VAR_4->mtx);

 VAR_8 = VAR_5 ||
   !FUNC_3(&VAR_4->chanctx_list) ||
   VAR_4->monitors;

 VAR_6 = !VAR_4->ops->remain_on_channel &&
    !FUNC_3(&VAR_4->roc_list);

 VAR_7 = FUNC_5(VAR_3, &VAR_4->scanning) ||
     FUNC_5(VAR_2, &VAR_4->scanning);

 if (VAR_6 || VAR_7)
  VAR_9 |= VAR_1;
 else
  VAR_10 |= VAR_1;

 if (VAR_8)
  VAR_9 |= VAR_0;
 else
  VAR_10 |= VAR_0;

 FUNC_2(VAR_4, VAR_9, VAR_10);

 if (VAR_6 || VAR_7 || VAR_8)
  return FUNC_0(VAR_4);
 return FUNC_1(VAR_4);
}
