
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cfg80211_chan_def {int width; } ;
typedef enum nl80211_bss_scan_width { ____Placeholder_nl80211_bss_scan_width } nl80211_bss_scan_width ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cfg80211_chan_def*,int ,int) ;

__attribute__((used)) static void
FUNC_1(struct cfg80211_chan_def *VAR_3,
          enum nl80211_bss_scan_width VAR_4)
{
 FUNC_0(VAR_3, 0, sizeof(*VAR_3));
 switch (VAR_4) {
 case 128:
  VAR_3->width = VAR_2;
  break;
 case 129:
  VAR_3->width = VAR_0;
  break;
 default:
  VAR_3->width = VAR_1;
  break;
 }
}
