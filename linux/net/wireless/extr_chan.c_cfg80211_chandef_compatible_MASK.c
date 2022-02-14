
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct cfg80211_chan_def {scalar_t__ chan; scalar_t__ width; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct cfg80211_chan_def const*,struct cfg80211_chan_def const*) ;
 int FUNC_2 (struct cfg80211_chan_def const*,scalar_t__*,scalar_t__*) ;

const struct cfg80211_chan_def *
FUNC_3(const struct cfg80211_chan_def *VAR_4,
       const struct cfg80211_chan_def *VAR_5)
{
 u32 VAR_6, VAR_7, VAR_8, VAR_9;


 if (FUNC_1(VAR_4, VAR_5))
  return VAR_4;


 if (VAR_4->chan != VAR_5->chan)
  return ((void*)0);





 if (VAR_4->width == VAR_5->width)
  return ((void*)0);





 if (VAR_4->width == VAR_3 ||
     VAR_4->width == VAR_0 ||
     VAR_5->width == VAR_3 ||
     VAR_5->width == VAR_0)
  return ((void*)0);

 if (VAR_4->width == VAR_2 ||
     VAR_4->width == VAR_1)
  return VAR_5;

 if (VAR_5->width == VAR_2 ||
     VAR_5->width == VAR_1)
  return VAR_4;

 FUNC_2(VAR_4, &VAR_6, &VAR_7);
 FUNC_2(VAR_5, &VAR_8, &VAR_9);

 if (VAR_6 != VAR_8)
  return ((void*)0);

 FUNC_0(!VAR_7 && !VAR_9);
 if (VAR_7 && VAR_9 && VAR_7 != VAR_9)
  return ((void*)0);

 if (VAR_4->width > VAR_5->width)
  return VAR_4;
 return VAR_5;
}
