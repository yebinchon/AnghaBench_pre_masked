
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct cfg80211_chan_def {int width; int center_freq1; scalar_t__ center_freq2; TYPE_1__* chan; } ;
struct sta_info {struct cfg80211_chan_def tdls_chandef; } ;
struct TYPE_8__ {int iftype; } ;
struct ieee80211_sub_if_data {TYPE_4__ wdev; TYPE_3__* local; } ;
typedef enum nl80211_chan_width { ____Placeholder_nl80211_chan_width } nl80211_chan_width ;
struct TYPE_6__ {int wiphy; } ;
struct TYPE_7__ {TYPE_2__ hw; } ;
struct TYPE_5__ {int center_freq; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct cfg80211_chan_def*,struct cfg80211_chan_def*) ;
 int FUNC_3 (int ,struct cfg80211_chan_def*,int ) ;
 int FUNC_4 (struct cfg80211_chan_def*) ;
 int FUNC_5 (struct sta_info*) ;
 int FUNC_6 (struct ieee80211_sub_if_data*,char*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_7(struct ieee80211_sub_if_data *VAR_3,
       struct sta_info *VAR_4)
{

 u16 VAR_5[] = { 5210, 5290, 5530, 5610, 5690, 5775 };
 struct cfg80211_chan_def VAR_6 = VAR_4->tdls_chandef;
 enum nl80211_chan_width VAR_7 = FUNC_5(VAR_4);
 int VAR_8;


 if (VAR_7 == VAR_1 ||
     VAR_7 == VAR_0)
  return;

 if (VAR_7 > VAR_2)
  VAR_7 = VAR_2;

 if (VAR_6.width >= VAR_7)
  return;






 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_5); VAR_8++)
  if (FUNC_1(VAR_6.chan->center_freq - VAR_5[VAR_8]) <= 30) {
   VAR_6.center_freq1 = VAR_5[VAR_8];
   VAR_6.center_freq2 = 0;
   VAR_6.width = VAR_2;
   break;
  }

 if (!VAR_6.center_freq1)
  return;


 while (VAR_6.width > VAR_7 ||
        (VAR_6.width > VAR_4->tdls_chandef.width &&
  !FUNC_3(VAR_3->local->hw.wiphy, &VAR_6,
            VAR_3->wdev.iftype)))
  FUNC_4(&VAR_6);

 if (!FUNC_2(&VAR_6, &VAR_4->tdls_chandef)) {
  FUNC_6(VAR_3, "TDLS ch width upgraded %d -> %d\n",
    VAR_4->tdls_chandef.width, VAR_6.width);





  VAR_4->tdls_chandef = VAR_6;
 }
}
