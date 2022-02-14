
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct ieee80211_sub_if_data {int vif; } ;
struct ieee80211_sta {int tdls; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ieee80211_sta* FUNC_0 (int *,int const*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int const*,int ,int ,int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (struct ieee80211_sub_if_data*,char*,int const*,int ,int ) ;

void FUNC_6(struct ieee80211_sub_if_data *VAR_3,
          const u8 *VAR_4, u16 VAR_5)
{
 struct ieee80211_sta *VAR_6;

 FUNC_3();
 VAR_6 = FUNC_0(&VAR_3->vif, VAR_4);
 if (!VAR_6 || !VAR_6->tdls) {
  FUNC_4();
  return;
 }
 FUNC_4();

 FUNC_5(VAR_3, "disconnected from TDLS peer %pM (Reason: %u=%s)\n",
   VAR_4, VAR_5,
   FUNC_1(VAR_5));

 FUNC_2(&VAR_3->vif, VAR_4,
        VAR_1,
        VAR_2,
        VAR_0);
}
