
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int len; scalar_t__ data; } ;
struct ieee80211_hdr {int frame_control; } ;
struct ieee80211_cipher_scheme {int hdr_len; int key_idx_off; int key_idx_shift; int key_idx_mask; } ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*,int,int*,int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_3,
          const struct ieee80211_cipher_scheme *VAR_4)
{
 struct ieee80211_hdr *VAR_5 = (struct ieee80211_hdr *)VAR_3->data;
 __le16 VAR_6;
 int VAR_7;
 int VAR_8;
 u8 VAR_9;
 u8 VAR_10;
 u8 VAR_11;

 VAR_6 = VAR_5->frame_control;
 VAR_7 = FUNC_0(VAR_6);

 if (VAR_4) {
  VAR_8 = VAR_7 + VAR_4->hdr_len;
  VAR_9 = VAR_7 + VAR_4->key_idx_off;
  VAR_10 = VAR_4->key_idx_shift;
 } else {

  VAR_8 = VAR_7 + VAR_1;
  VAR_9 = VAR_7 + 3;
  VAR_10 = 6;
 }

 if (FUNC_2(VAR_3->len < VAR_8))
  return -VAR_0;

 FUNC_1(VAR_3, VAR_9, &VAR_11, 1);

 if (VAR_4)
  VAR_11 &= VAR_4->key_idx_mask;
 VAR_11 >>= VAR_10;


 if (FUNC_2(VAR_11 >= VAR_2))
  return -VAR_0;

 return VAR_11;
}
