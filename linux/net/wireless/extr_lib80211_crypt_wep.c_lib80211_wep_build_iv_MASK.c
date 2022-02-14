
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sk_buff {int len; } ;
struct lib80211_wep_data {int key_len; int iv; int key_idx; } ;


 int FUNC_0 (int*,int*,int) ;
 int FUNC_1 (struct sk_buff*) ;
 int* FUNC_2 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_0, int VAR_1,
          u8 *VAR_2, int VAR_3, void *VAR_4)
{
 struct lib80211_wep_data *VAR_5 = VAR_4;
 u32 VAR_6;
 u8 *VAR_7;

 if (FUNC_1(VAR_0) < 4 || VAR_0->len < VAR_1)
  return -1;

 VAR_7 = FUNC_2(VAR_0, 4);
 FUNC_0(VAR_7, VAR_7 + 4, VAR_1);
 VAR_7 += VAR_1;

 VAR_6 = 3 + VAR_5->key_len;

 VAR_5->iv++;




 if ((VAR_5->iv & 0xff00) == 0xff00) {
  u8 VAR_8 = (VAR_5->iv >> 16) & 0xff;
  if (VAR_8 >= 3 && VAR_8 < VAR_6)
   VAR_5->iv += 0x0100;
 }


 *VAR_7++ = (VAR_5->iv >> 16) & 0xff;
 *VAR_7++ = (VAR_5->iv >> 8) & 0xff;
 *VAR_7++ = VAR_5->iv & 0xff;
 *VAR_7++ = VAR_5->key_idx << 6;

 return 0;
}
