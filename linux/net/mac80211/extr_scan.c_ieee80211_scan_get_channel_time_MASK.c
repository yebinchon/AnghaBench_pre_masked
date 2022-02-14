
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_channel {int flags; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;

__attribute__((used)) static unsigned long
FUNC_0(struct ieee80211_channel *VAR_5)
{




 if (VAR_5->flags & (VAR_1 | VAR_2))
  return VAR_3;
 return VAR_4 + VAR_0;
}
