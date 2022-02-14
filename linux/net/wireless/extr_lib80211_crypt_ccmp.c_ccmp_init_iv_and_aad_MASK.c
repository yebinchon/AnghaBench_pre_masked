
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ieee80211_hdr {int const* addr4; int const* addr2; int const* addr1; int seq_ctrl; int frame_control; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int*,int const*,int) ;
 int FUNC_3 (int*,int ,int) ;

__attribute__((used)) static int FUNC_4(const struct ieee80211_hdr *VAR_2,
    const u8 *VAR_3, u8 *VAR_4, u8 *VAR_5)
{
 u8 *VAR_6, VAR_7 = 0;
 size_t VAR_8;
 int VAR_9, VAR_10;

 VAR_9 = FUNC_0(VAR_2->frame_control);
 VAR_10 = FUNC_1(VAR_2->frame_control);

 VAR_8 = 22;
 if (VAR_9)
  VAR_8 += 6;
 if (VAR_10) {
  VAR_6 = (u8 *) & VAR_2->addr4;
  if (VAR_9)
   VAR_6 += 6;
  VAR_7 = *VAR_6 & 0x0f;
  VAR_8 += 2;
 }
 VAR_4[0] = 0x1;


 VAR_4[1] = VAR_7;
 FUNC_2(VAR_4 + 2, VAR_2->addr2, VAR_1);
 FUNC_2(VAR_4 + 8, VAR_3, VAR_0);
 VAR_6 = (u8 *) VAR_2;
 VAR_5[0] = VAR_6[0] & 0x8f;
 VAR_5[1] = VAR_6[1] & 0xc7;
 FUNC_2(VAR_5 + 2, VAR_2->addr1, 3 * VAR_1);
 VAR_6 = (u8 *) & VAR_2->seq_ctrl;
 VAR_5[20] = VAR_6[0] & 0x0f;
 VAR_5[21] = 0;
 FUNC_3(VAR_5 + 22, 0, 8);
 if (VAR_9)
  FUNC_2(VAR_5 + 22, VAR_2->addr4, VAR_1);
 if (VAR_10) {
  VAR_5[VAR_9 ? 28 : 22] = VAR_7;

 }
 return VAR_8;
}
