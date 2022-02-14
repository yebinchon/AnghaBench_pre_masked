
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u16 ;
struct tid_ampdu_tx {int dummy; } ;
struct TYPE_2__ {int * tid_tx; } ;
struct sta_info {TYPE_1__ ampdu_mlme; } ;
struct ieee80211_sub_if_data {int dummy; } ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct ieee80211_sub_if_data*,char*,...) ;
 struct tid_ampdu_tx* FUNC_2 (int ) ;
 struct sta_info* FUNC_3 (struct ieee80211_sub_if_data*,int const*) ;

__attribute__((used)) static struct tid_ampdu_tx *
FUNC_4(struct ieee80211_sub_if_data *VAR_1,
   const u8 *VAR_2, u16 VAR_3, struct sta_info **VAR_4)
{
 struct tid_ampdu_tx *VAR_5;

 if (VAR_3 >= VAR_0) {
  FUNC_1(VAR_1, "Bad TID value: tid = %d (>= %d)\n",
         VAR_3, VAR_0);
  return ((void*)0);
 }

 *VAR_4 = FUNC_3(VAR_1, VAR_2);
 if (!*VAR_4) {
  FUNC_1(VAR_1, "Could not find station: %pM\n", VAR_2);
  return ((void*)0);
 }

 VAR_5 = FUNC_2((*VAR_4)->ampdu_mlme.tid_tx[VAR_3]);

 if (FUNC_0(!VAR_5))
  FUNC_1(VAR_1, "addBA was not requested!\n");

 return VAR_5;
}
