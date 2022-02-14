
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u8 ;
struct sk_buff {int dummy; } ;
struct TYPE_3__ {int chandef; } ;
struct TYPE_4__ {TYPE_1__ bss_conf; } ;
struct ieee80211_sub_if_data {TYPE_2__ vif; } ;


 int VAR_0 ;
 int FUNC_0 (int *,void**) ;
 void** FUNC_1 (struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_2(struct ieee80211_sub_if_data *VAR_1,
         struct sk_buff *VAR_2)
{
 u8 *VAR_3;
 u8 VAR_4;

 if (!FUNC_0(&VAR_1->vif.bss_conf.chandef,
        &VAR_4))
  return;

 VAR_3 = FUNC_1(VAR_2, 4);
 *VAR_3++ = VAR_0;
 *VAR_3++ = 2;

 *VAR_3++ = VAR_4;
 *VAR_3++ = VAR_4;
}
