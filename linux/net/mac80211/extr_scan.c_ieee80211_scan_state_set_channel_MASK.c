
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int width; struct ieee80211_channel* chan; scalar_t__ center_freq2; int center_freq1; } ;
struct ieee80211_local {size_t scan_channel_idx; void* next_scan_state; TYPE_1__ scan_chandef; TYPE_1__ _oper_chandef; int mtx; int scan_req; } ;
struct ieee80211_channel {int flags; int center_freq; } ;
struct cfg80211_scan_request {int scan_width; int n_ssids; struct ieee80211_channel** channels; } ;
typedef enum nl80211_bss_scan_width { ____Placeholder_nl80211_bss_scan_width } nl80211_bss_scan_width ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;



 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (struct ieee80211_local*,int ) ;
 int FUNC_2 (int *) ;
 struct cfg80211_scan_request* FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(struct ieee80211_local *VAR_10,
          unsigned long *VAR_11)
{
 int VAR_12;
 struct ieee80211_channel *VAR_13;
 enum nl80211_bss_scan_width VAR_14;
 struct cfg80211_scan_request *VAR_15;

 VAR_15 = FUNC_3(VAR_10->scan_req,
          FUNC_2(&VAR_10->mtx));

 VAR_12 = 0;
 VAR_13 = VAR_15->channels[VAR_10->scan_channel_idx];

 VAR_10->scan_chandef.chan = VAR_13;
 VAR_10->scan_chandef.center_freq1 = VAR_13->center_freq;
 VAR_10->scan_chandef.center_freq2 = 0;
 switch (VAR_15->scan_width) {
 case 128:
  VAR_10->scan_chandef.width = VAR_7;
  break;
 case 130:
  VAR_10->scan_chandef.width = VAR_5;
  break;
 case 129:



  VAR_14 = FUNC_0(
     &VAR_10->_oper_chandef);
  if (VAR_13 == VAR_10->_oper_chandef.chan &&
      VAR_14 == VAR_15->scan_width)
   VAR_10->scan_chandef = VAR_10->_oper_chandef;
  else
   VAR_10->scan_chandef.width = VAR_6;
  break;
 }

 if (FUNC_1(VAR_10, VAR_2))
  VAR_12 = 1;


 VAR_10->scan_channel_idx++;

 if (VAR_12) {

  VAR_10->next_scan_state = VAR_8;
  return;
 }
 if ((VAR_13->flags & (VAR_0 | VAR_1)) ||
     !VAR_15->n_ssids) {
  *VAR_11 = VAR_3;
  VAR_10->next_scan_state = VAR_8;
  return;
 }


 *VAR_11 = VAR_4;
 VAR_10->next_scan_state = VAR_9;
}
