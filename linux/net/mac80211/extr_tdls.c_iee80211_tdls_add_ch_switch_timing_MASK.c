
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct ieee80211_ch_switch_timing {void* switch_timeout; void* switch_time; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(u8 *VAR_1, u16 VAR_2, u16 VAR_3)
{
 struct ieee80211_ch_switch_timing *VAR_4;

 *VAR_1++ = VAR_0;
 *VAR_1++ = sizeof(struct ieee80211_ch_switch_timing);

 VAR_4 = (void *)VAR_1;
 VAR_4->switch_time = FUNC_0(VAR_2);
 VAR_4->switch_timeout = FUNC_0(VAR_3);
}
