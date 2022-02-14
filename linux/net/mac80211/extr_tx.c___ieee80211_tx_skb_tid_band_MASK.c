
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int priority; int dev; } ;
struct ieee80211_sub_if_data {int dev; } ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;
struct TYPE_2__ {int band; } ;


 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ieee80211_sub_if_data*,int *,struct sk_buff*,int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*,int) ;

void FUNC_7(struct ieee80211_sub_if_data *VAR_0,
     struct sk_buff *VAR_1, int VAR_2,
     enum nl80211_band VAR_3, u32 VAR_4)
{
 int VAR_5 = FUNC_1(VAR_2);

 FUNC_5(VAR_1);
 FUNC_6(VAR_1, VAR_5);
 VAR_1->priority = VAR_2;

 VAR_1->dev = VAR_0->dev;






 FUNC_3();
 FUNC_0(VAR_1)->band = VAR_3;
 FUNC_2(VAR_0, ((void*)0), VAR_1, VAR_4);
 FUNC_4();
}
