
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct sk_buff {int dummy; } ;
struct ieee80211_if_mesh {scalar_t__* ie; scalar_t__ ie_len; } ;
struct TYPE_2__ {struct ieee80211_if_mesh mesh; } ;
struct ieee80211_sub_if_data {TYPE_1__ u; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__*,scalar_t__,int ) ;
 int FUNC_1 (struct sk_buff*,scalar_t__ const*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;

int FUNC_3(struct ieee80211_sub_if_data *VAR_1,
   struct sk_buff *VAR_2)
{
 struct ieee80211_if_mesh *VAR_3 = &VAR_1->u.mesh;
 u8 VAR_4, VAR_5;
 const u8 *VAR_6;

 if (!VAR_3->ie || !VAR_3->ie_len)
  return 0;


 VAR_4 = FUNC_0(VAR_3->ie, VAR_3->ie_len, 0);

 if (VAR_4 < VAR_3->ie_len) {
  VAR_5 = VAR_3->ie_len - VAR_4;
  VAR_6 = VAR_3->ie + VAR_4;
  if (FUNC_2(VAR_2) < VAR_5)
   return -VAR_0;
  FUNC_1(VAR_2, VAR_6, VAR_5);
 }

 return 0;
}
