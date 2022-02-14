
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wiphy {int regulatory_flags; int * bands; } ;
struct regulatory_request {int dfs_region; } ;
typedef enum nl80211_reg_initiator { ____Placeholder_nl80211_reg_initiator } nl80211_reg_initiator ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;
struct TYPE_2__ {int dfs_region; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_0 () ;
 struct regulatory_request* FUNC_1 () ;
 int FUNC_2 (struct wiphy*,int,int ) ;
 scalar_t__ FUNC_3 (struct wiphy*,int) ;
 int FUNC_4 (struct wiphy*,struct regulatory_request*) ;
 int FUNC_5 (struct wiphy*) ;
 int FUNC_6 (struct wiphy*) ;

__attribute__((used)) static void FUNC_7(struct wiphy *VAR_4,
        enum nl80211_reg_initiator VAR_5)
{
 enum nl80211_band VAR_6;
 struct regulatory_request *VAR_7 = FUNC_1();

 if (FUNC_3(VAR_4, VAR_5)) {





  if (VAR_5 == VAR_0 &&
      VAR_4->regulatory_flags & VAR_2 &&
      !(VAR_4->regulatory_flags &
        VAR_3))
   FUNC_4(VAR_4, VAR_7);
  return;
 }

 VAR_7->dfs_region = FUNC_0()->dfs_region;

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
  FUNC_2(VAR_4, VAR_5, VAR_4->bands[VAR_6]);

 FUNC_5(VAR_4);
 FUNC_6(VAR_4);
 FUNC_4(VAR_4, VAR_7);
}
