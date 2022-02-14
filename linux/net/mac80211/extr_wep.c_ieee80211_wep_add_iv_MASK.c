
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {scalar_t__ data; } ;
struct TYPE_4__ {TYPE_1__* hw_key; } ;
struct ieee80211_tx_info {TYPE_2__ control; } ;
struct ieee80211_local {int dummy; } ;
struct ieee80211_hdr {int frame_control; } ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 unsigned int FUNC_3 (int ) ;
 int FUNC_4 (struct ieee80211_local*,int,int,int *) ;
 int FUNC_5 (int *,int *,unsigned int) ;
 scalar_t__ FUNC_6 (struct sk_buff*) ;
 int * FUNC_7 (struct sk_buff*,scalar_t__) ;

__attribute__((used)) static u8 *FUNC_8(struct ieee80211_local *VAR_3,
    struct sk_buff *VAR_4,
    int VAR_5, int VAR_6)
{
 struct ieee80211_hdr *VAR_7 = (struct ieee80211_hdr *)VAR_4->data;
 struct ieee80211_tx_info *VAR_8 = FUNC_0(VAR_4);
 unsigned int VAR_9;
 u8 *VAR_10;

 VAR_7->frame_control |= FUNC_2(VAR_0);

 if (FUNC_1(FUNC_6(VAR_4) < VAR_2))
  return ((void*)0);

 VAR_9 = FUNC_3(VAR_7->frame_control);
 VAR_10 = FUNC_7(VAR_4, VAR_2);
 FUNC_5(VAR_10, VAR_10 + VAR_2, VAR_9);


 if (VAR_8->control.hw_key &&
     (VAR_8->control.hw_key->flags & VAR_1))
  return VAR_10 + VAR_9;

 FUNC_4(VAR_3, VAR_5, VAR_6, VAR_10 + VAR_9);
 return VAR_10 + VAR_9;
}
