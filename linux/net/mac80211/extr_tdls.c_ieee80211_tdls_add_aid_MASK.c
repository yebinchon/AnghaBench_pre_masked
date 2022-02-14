
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct ieee80211_if_managed {int aid; } ;
struct TYPE_2__ {struct ieee80211_if_managed mgd; } ;
struct ieee80211_sub_if_data {TYPE_1__ u; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int * FUNC_1 (struct sk_buff*,int) ;

__attribute__((used)) static void
FUNC_2(struct ieee80211_sub_if_data *VAR_1, struct sk_buff *VAR_2)
{
 struct ieee80211_if_managed *VAR_3 = &VAR_1->u.mgd;
 u8 *VAR_4 = FUNC_1(VAR_2, 4);

 *VAR_4++ = VAR_0;
 *VAR_4++ = 2;
 FUNC_0(VAR_3->aid, VAR_4);
}
