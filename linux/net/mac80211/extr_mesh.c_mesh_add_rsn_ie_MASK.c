
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct sk_buff {int dummy; } ;
struct ieee80211_if_mesh {int ie_len; int ie; } ;
struct TYPE_2__ {struct ieee80211_if_mesh mesh; } ;
struct ieee80211_sub_if_data {TYPE_1__ u; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__* FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct sk_buff*,scalar_t__ const*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;

int FUNC_3(struct ieee80211_sub_if_data *VAR_2, struct sk_buff *VAR_3)
{
 struct ieee80211_if_mesh *VAR_4 = &VAR_2->u.mesh;
 u8 VAR_5 = 0;
 const u8 *VAR_6;

 if (!VAR_4->ie || !VAR_4->ie_len)
  return 0;


 VAR_6 = FUNC_0(VAR_1, VAR_4->ie, VAR_4->ie_len);
 if (!VAR_6)
  return 0;

 VAR_5 = VAR_6[1] + 2;

 if (FUNC_2(VAR_3) < VAR_5)
  return -VAR_0;
 FUNC_1(VAR_3, VAR_6, VAR_5);

 return 0;
}
