
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulatory_request {int intersect; } ;
struct ieee80211_regdomain {int * alpha2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (struct ieee80211_regdomain const*) ;
 int FUNC_2 (struct ieee80211_regdomain const*) ;
 int FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (struct ieee80211_regdomain const*) ;
 int FUNC_5 (int *) ;
 struct ieee80211_regdomain* FUNC_6 (struct ieee80211_regdomain const*,int ) ;
 int FUNC_7 (int,struct ieee80211_regdomain const*) ;

__attribute__((used)) static int FUNC_8(const struct ieee80211_regdomain *VAR_2,
      struct regulatory_request *VAR_3)
{
 const struct ieee80211_regdomain *VAR_4 = ((void*)0);

 if (!FUNC_5(VAR_2->alpha2))
  return -VAR_0;

 if (!FUNC_1(VAR_2)) {
  FUNC_3("Invalid regulatory domain detected: %c%c\n",
         VAR_2->alpha2[0], VAR_2->alpha2[1]);
  FUNC_4(VAR_2);
  return -VAR_1;
 }

 if (!VAR_3->intersect) {
  FUNC_7(0, VAR_2);
  return 0;
 }

 VAR_4 = FUNC_6(VAR_2, FUNC_0());
 if (!VAR_4)
  return -VAR_1;

 FUNC_2(VAR_2);
 VAR_2 = ((void*)0);
 FUNC_7(0, VAR_4);

 return 0;
}
