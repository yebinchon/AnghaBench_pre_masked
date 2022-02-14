
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_local {int scanning; } ;
struct ieee80211_hw {int wiphy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,int ) ;
 struct ieee80211_local* FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct ieee80211_local*) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static inline int FUNC_5(struct ieee80211_hw *VAR_2)
{
 struct ieee80211_local *VAR_3 = FUNC_1(VAR_2);

 FUNC_0(FUNC_3(VAR_1, &VAR_3->scanning) &&
      !FUNC_3(VAR_0, &VAR_3->scanning),
  "%s: resume with hardware scan still in progress\n",
  FUNC_4(VAR_2->wiphy));

 return FUNC_2(FUNC_1(VAR_2));
}
