
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct michael_mic_ctx {int r; int l; } ;
struct ieee80211_hdr {int dummy; } ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (struct michael_mic_ctx*,int) ;
 int FUNC_2 (struct michael_mic_ctx*,int const*,struct ieee80211_hdr*) ;
 int FUNC_3 (int ,int*) ;

void FUNC_4(const u8 *VAR_0, struct ieee80211_hdr *VAR_1,
   const u8 *VAR_2, size_t VAR_3, u8 *VAR_4)
{
 u32 VAR_5;
 size_t VAR_6, VAR_7, VAR_8;
 struct michael_mic_ctx VAR_9;

 FUNC_2(&VAR_9, VAR_0, VAR_1);


 VAR_7 = VAR_3 / 4;
 VAR_8 = VAR_3 % 4;

 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++)
  FUNC_1(&VAR_9, FUNC_0(&VAR_2[VAR_6 * 4]));



 VAR_5 = 0x5a;
 while (VAR_8 > 0) {
  VAR_5 <<= 8;
  VAR_8--;
  VAR_5 |= VAR_2[VAR_7 * 4 + VAR_8];
 }

 FUNC_1(&VAR_9, VAR_5);
 FUNC_1(&VAR_9, 0);

 FUNC_3(VAR_9.l, VAR_4);
 FUNC_3(VAR_9.r, VAR_4 + 4);
}
