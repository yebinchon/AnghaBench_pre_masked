
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct sta_info {scalar_t__ reserved_tid; } ;
struct sk_buff {size_t priority; } ;
struct ieee80211_if_managed {TYPE_1__* tx_tspec; } ;
struct TYPE_4__ {struct ieee80211_if_managed mgd; } ;
struct ieee80211_sub_if_data {int wmm_acm; TYPE_2__ u; } ;
struct TYPE_3__ {scalar_t__ up; scalar_t__ admitted_time; } ;


 int FUNC_0 (size_t) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int* VAR_0 ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static u16 FUNC_3(struct ieee80211_sub_if_data *VAR_1,
         struct sta_info *VAR_2, struct sk_buff *VAR_3)
{
 struct ieee80211_if_managed *VAR_4 = &VAR_1->u.mgd;


 while (VAR_1->wmm_acm & FUNC_0(VAR_3->priority)) {
  int VAR_5 = VAR_0[VAR_3->priority];

  if (VAR_4->tx_tspec[VAR_5].admitted_time &&
      VAR_3->priority == VAR_4->tx_tspec[VAR_5].up)
   return VAR_5;

  if (FUNC_2(VAR_3)) {






   break;
  }
 }


 if (VAR_2 && VAR_2->reserved_tid == VAR_3->priority)
  VAR_3->priority = FUNC_1(VAR_3->priority);


 return VAR_0[VAR_3->priority];
}
