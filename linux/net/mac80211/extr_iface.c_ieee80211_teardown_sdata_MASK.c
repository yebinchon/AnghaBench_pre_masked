
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_sub_if_data {int vif; scalar_t__ fragment_next; TYPE_1__* fragments; } ;
struct TYPE_2__ {int skb_list; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ieee80211_sub_if_data*) ;
 int FUNC_2 (struct ieee80211_sub_if_data*,int) ;
 int FUNC_3 (struct ieee80211_sub_if_data*) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct ieee80211_sub_if_data *VAR_1)
{
 int VAR_2;


 FUNC_2(VAR_1, 0);

 FUNC_1(VAR_1);

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  FUNC_0(&VAR_1->fragments[VAR_2].skb_list);
 VAR_1->fragment_next = 0;

 if (FUNC_4(&VAR_1->vif))
  FUNC_3(VAR_1);
}
