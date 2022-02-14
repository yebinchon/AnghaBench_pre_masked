
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_tx_rate {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (struct ieee80211_tx_rate*) ;

__attribute__((used)) static int
FUNC_2(struct ieee80211_tx_rate *VAR_3)
{
 return FUNC_0(FUNC_1(VAR_3),
        !!(VAR_3->flags & VAR_2),
        !!(VAR_3->flags & VAR_0) +
        2*!!(VAR_3->flags & VAR_1));
}
