
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_channel {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static bool FUNC_0(struct ieee80211_channel *VAR_2)
{
 if (!VAR_2)
  return 0;
 if (VAR_2->flags & VAR_0)
  return 0;

 if ((VAR_2->flags & VAR_1) == VAR_1)
  return 0;
 return 1;
}
