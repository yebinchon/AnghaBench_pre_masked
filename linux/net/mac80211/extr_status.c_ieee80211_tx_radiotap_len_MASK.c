
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ieee80211_tx_status {TYPE_1__* rate; } ;
struct TYPE_6__ {TYPE_2__* rates; } ;
struct ieee80211_tx_info {TYPE_3__ status; } ;
struct ieee80211_radiotap_header {int dummy; } ;
struct TYPE_5__ {scalar_t__ idx; int flags; } ;
struct TYPE_4__ {int flags; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_1(struct ieee80211_tx_info *VAR_7,
         struct ieee80211_tx_status *VAR_8)
{
 int VAR_9 = sizeof(struct ieee80211_radiotap_header);


 if (VAR_8 && VAR_8->rate && !(VAR_8->rate->flags &
     (VAR_5 |
      VAR_2 |
      VAR_3 |
      VAR_6 |
      VAR_4)))
  VAR_9 += 2;
 else if (VAR_7->status.rates[0].idx >= 0 &&
   !(VAR_7->status.rates[0].flags &
     (VAR_0 | VAR_1)))
  VAR_9 += 2;


 VAR_9 += 2;


 VAR_9 += 1;



 if (VAR_8 && VAR_8->rate) {
  if (VAR_8->rate->flags & VAR_5)
   VAR_9 += 3;
  else if (VAR_8->rate->flags & VAR_6)
   VAR_9 = FUNC_0(VAR_9, 2) + 12;
  else if (VAR_8->rate->flags & VAR_4)
   VAR_9 = FUNC_0(VAR_9, 2) + 12;
 } else if (VAR_7->status.rates[0].idx >= 0) {
  if (VAR_7->status.rates[0].flags & VAR_0)
   VAR_9 += 3;
  else if (VAR_7->status.rates[0].flags & VAR_1)
   VAR_9 = FUNC_0(VAR_9, 2) + 12;
 }

 return VAR_9;
}
