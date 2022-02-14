
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* rates; } ;
struct ieee80211_tx_info {int flags; TYPE_2__ status; } ;
struct ieee80211_hw {int max_report_rates; } ;
struct TYPE_3__ {int idx; scalar_t__ count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(struct ieee80211_hw *VAR_3,
      struct ieee80211_tx_info *VAR_4,
      int *VAR_5)
{
 int VAR_6 = -1;
 int VAR_7 = -1;
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
  if ((VAR_4->flags & VAR_0) &&
      !(VAR_4->flags & VAR_2)) {

   VAR_4->status.rates[VAR_8].idx = -1;
   VAR_4->status.rates[VAR_8].count = 0;
   break;
  } else if (VAR_4->status.rates[VAR_8].idx < 0) {
   break;
  } else if (VAR_8 >= VAR_3->max_report_rates) {

   VAR_4->status.rates[VAR_8].idx = -1;
   VAR_4->status.rates[VAR_8].count = 0;
   break;
  }

  VAR_7 += VAR_4->status.rates[VAR_8].count;
 }
 VAR_6 = VAR_8 - 1;

 if (VAR_7 < 0)
  VAR_7 = 0;

 *VAR_5 = VAR_7;
 return VAR_6;
}
