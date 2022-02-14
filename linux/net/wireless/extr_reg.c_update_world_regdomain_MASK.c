
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulatory_request {int dummy; } ;
struct ieee80211_regdomain {int dummy; } ;


 int FUNC_0 (int) ;
 struct ieee80211_regdomain const* VAR_0 ;
 struct regulatory_request* FUNC_1 () ;
 int FUNC_2 (int,struct ieee80211_regdomain const*) ;

__attribute__((used)) static void FUNC_3(const struct ieee80211_regdomain *VAR_1)
{
 struct regulatory_request *VAR_2;

 VAR_2 = FUNC_1();

 FUNC_0(!VAR_2);

 FUNC_2(0, VAR_1);

 VAR_0 = VAR_1;
}
