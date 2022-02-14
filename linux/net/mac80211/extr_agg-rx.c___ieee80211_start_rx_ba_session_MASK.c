
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_2__ {int mtx; } ;
struct sta_info {TYPE_1__ ampdu_mlme; } ;
struct ieee80211_addba_ext_ie {int dummy; } ;


 int FUNC_0 (struct sta_info*,int ,int ,int ,int ,int ,int ,int,int,struct ieee80211_addba_ext_ie const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct sta_info *VAR_0,
         u8 VAR_1, u16 VAR_2,
         u16 VAR_3, u16 VAR_4,
         u16 VAR_5, u16 VAR_6, bool VAR_7,
         bool VAR_8,
         const struct ieee80211_addba_ext_ie *VAR_9)
{
 FUNC_1(&VAR_0->ampdu_mlme.mtx);
 FUNC_0(VAR_0, VAR_1, VAR_2,
      VAR_3, VAR_4, VAR_5,
      VAR_6, VAR_7, VAR_8, VAR_9);
 FUNC_2(&VAR_0->ampdu_mlme.mtx);
}
