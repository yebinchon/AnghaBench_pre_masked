
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int dummy; } ;
struct nlattr {int dummy; } ;
struct ieee80211_channel {int flags; } ;


 int VAR_0 ;
 struct ieee80211_channel* FUNC_0 (struct wiphy*,int ) ;
 int FUNC_1 (struct nlattr*) ;

__attribute__((used)) static struct ieee80211_channel *FUNC_2(struct wiphy *VAR_1,
       struct nlattr *VAR_2)
{
 struct ieee80211_channel *VAR_3;

 if (VAR_2 == ((void*)0))
  return ((void*)0);
 VAR_3 = FUNC_0(VAR_1, FUNC_1(VAR_2));
 if (!VAR_3 || VAR_3->flags & VAR_0)
  return ((void*)0);
 return VAR_3;
}
