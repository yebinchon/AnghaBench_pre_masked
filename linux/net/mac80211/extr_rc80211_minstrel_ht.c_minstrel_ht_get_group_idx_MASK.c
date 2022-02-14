
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_tx_rate {int idx; int flags; } ;


 int FUNC_0 (int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_1(struct ieee80211_tx_rate *VAR_2)
{
 return FUNC_0((VAR_2->idx / 8) + 1,
    !!(VAR_2->flags & VAR_1),
    !!(VAR_2->flags & VAR_0));
}
