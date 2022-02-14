
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_rx_status {int flag; scalar_t__ encoding; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;

__attribute__((used)) static inline bool
FUNC_1(struct ieee80211_rx_status *VAR_4)
{
 FUNC_0(VAR_4->flag & VAR_3 &&
       VAR_4->flag & VAR_1);
 if (VAR_4->flag & (VAR_3 | VAR_1))
  return 1;

 if (VAR_4->flag & VAR_2 &&
     VAR_4->encoding == VAR_0)
  return 1;
 return 0;
}
