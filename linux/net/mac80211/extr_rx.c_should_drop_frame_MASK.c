
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; scalar_t__ data; } ;
struct ieee80211_rx_status {int flag; } ;
struct ieee80211_hdr {int frame_control; } ;


 struct ieee80211_rx_status* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static inline bool FUNC_5(struct sk_buff *VAR_4, int VAR_5,
         unsigned int VAR_6)
{
 struct ieee80211_rx_status *VAR_7 = FUNC_0(VAR_4);
 struct ieee80211_hdr *VAR_8;

 VAR_8 = (void *)(VAR_4->data + VAR_6);

 if (VAR_7->flag & (VAR_0 |
       VAR_1 |
       VAR_3 |
       VAR_2))
  return 1;

 if (FUNC_4(VAR_4->len < 16 + VAR_5 + VAR_6))
  return 1;

 if (FUNC_2(VAR_8->frame_control) &&
     !FUNC_3(VAR_8->frame_control) &&
     !FUNC_1(VAR_8->frame_control))
  return 1;

 return 0;
}
