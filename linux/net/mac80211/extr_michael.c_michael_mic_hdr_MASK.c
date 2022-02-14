
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct michael_mic_ctx {int l; int r; } ;
struct ieee80211_hdr {int frame_control; } ;


 int FUNC_0 (int*) ;
 int FUNC_1 (int const*) ;
 int* FUNC_2 (struct ieee80211_hdr*) ;
 int* FUNC_3 (struct ieee80211_hdr*) ;
 int FUNC_4 (struct ieee80211_hdr*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct michael_mic_ctx*,int) ;

__attribute__((used)) static void FUNC_7(struct michael_mic_ctx *VAR_0, const u8 *VAR_1,
       struct ieee80211_hdr *VAR_2)
{
 u8 *VAR_3, *VAR_4, VAR_5;

 VAR_3 = FUNC_2(VAR_2);
 VAR_4 = FUNC_3(VAR_2);
 if (FUNC_5(VAR_2->frame_control))
  VAR_5 = FUNC_4(VAR_2);
 else
  VAR_5 = 0;

 VAR_0->l = FUNC_1(VAR_1);
 VAR_0->r = FUNC_1(VAR_1 + 4);





 FUNC_6(VAR_0, FUNC_1(VAR_3));
 FUNC_6(VAR_0, FUNC_0(&VAR_3[4]) |
       (FUNC_0(VAR_4) << 16));
 FUNC_6(VAR_0, FUNC_1(&VAR_4[2]));
 FUNC_6(VAR_0, VAR_5);
}
