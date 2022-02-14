
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct cfg80211_chan_def {int width; int center_freq1; int center_freq2; TYPE_1__* chan; } ;
struct TYPE_2__ {int center_freq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;



 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct cfg80211_chan_def const*) ;
 int FUNC_2 (struct cfg80211_chan_def const*) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_7,
    const struct cfg80211_chan_def *VAR_8)
{
 if (FUNC_0(!FUNC_1(VAR_8)))
  return -VAR_0;

 if (FUNC_3(VAR_7, VAR_6,
   VAR_8->chan->center_freq))
  return -VAR_1;
 switch (VAR_8->width) {
 case 129:
 case 130:
 case 128:
  if (FUNC_3(VAR_7, VAR_5,
    FUNC_2(VAR_8)))
   return -VAR_1;
  break;
 default:
  break;
 }
 if (FUNC_3(VAR_7, VAR_4, VAR_8->width))
  return -VAR_1;
 if (FUNC_3(VAR_7, VAR_2, VAR_8->center_freq1))
  return -VAR_1;
 if (VAR_8->center_freq2 &&
     FUNC_3(VAR_7, VAR_3, VAR_8->center_freq2))
  return -VAR_1;
 return 0;
}
