
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cfg80211_registered_device {scalar_t__ bss_entries; int bss_list; int bss_tree; int bss_lock; } ;
struct TYPE_2__ {int nontrans_list; int hidden_beacon_bss; } ;
struct cfg80211_internal_bss {int rbn; TYPE_1__ pub; int list; int hidden_list; } ;


 int FUNC_0 (int,char*,scalar_t__,int) ;
 int FUNC_1 (struct cfg80211_registered_device*,struct cfg80211_internal_bss*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;

__attribute__((used)) static bool FUNC_6(struct cfg80211_registered_device *VAR_0,
      struct cfg80211_internal_bss *VAR_1)
{
 FUNC_4(&VAR_0->bss_lock);

 if (!FUNC_3(&VAR_1->hidden_list)) {




  if (!VAR_1->pub.hidden_beacon_bss)
   return 0;




  FUNC_2(&VAR_1->hidden_list);
 }

 FUNC_2(&VAR_1->list);
 FUNC_2(&VAR_1->pub.nontrans_list);
 FUNC_5(&VAR_1->rbn, &VAR_0->bss_tree);
 VAR_0->bss_entries--;
 FUNC_0((VAR_0->bss_entries == 0) ^ FUNC_3(&VAR_0->bss_list),
    "rdev bss entries[%d]/list[empty:%d] corruption\n",
    VAR_0->bss_entries, FUNC_3(&VAR_0->bss_list));
 FUNC_1(VAR_0, VAR_1);
 return 1;
}
