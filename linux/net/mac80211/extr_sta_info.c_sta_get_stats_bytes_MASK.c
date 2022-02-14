
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ieee80211_sta_rx_stats {int bytes; int syncp; } ;


 unsigned int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,unsigned int) ;

__attribute__((used)) static inline u64 FUNC_2(struct ieee80211_sta_rx_stats *VAR_0)
{
 unsigned int VAR_1;
 u64 VAR_2;

 do {
  VAR_1 = FUNC_0(&VAR_0->syncp);
  VAR_2 = VAR_0->bytes;
 } while (FUNC_1(&VAR_0->syncp, VAR_1));

 return VAR_2;
}
