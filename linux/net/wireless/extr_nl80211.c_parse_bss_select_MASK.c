
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wiphy {int bss_select_support; } ;
struct nlattr {int dummy; } ;
struct nl80211_bss_select_rssi_adjust {int delta; int band; } ;
struct TYPE_3__ {int band; int delta; } ;
struct TYPE_4__ {TYPE_1__ adjust; int band_pref; } ;
struct cfg80211_bss_selection {size_t behaviour; TYPE_2__ param; } ;


 int FUNC_0 (size_t) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_1 (struct wiphy*,int ) ;
 int VAR_6 ;
 void* FUNC_2 (struct nlattr*) ;
 int FUNC_3 (struct nlattr*) ;
 int FUNC_4 (struct nlattr*) ;
 int FUNC_5 (struct nlattr*,int ) ;
 int FUNC_6 (struct nlattr**,int,struct nlattr*,int ,int *) ;

__attribute__((used)) static int FUNC_7(struct nlattr *VAR_7, struct wiphy *VAR_8,
       struct cfg80211_bss_selection *VAR_9)
{
 struct nlattr *VAR_10[VAR_2 + 1];
 struct nlattr *VAR_11;
 int VAR_12;
 bool VAR_13 = 0;
 int VAR_14;


 VAR_11 = FUNC_2(VAR_7);
 if (!FUNC_5(VAR_11, FUNC_4(VAR_11)))
  return -VAR_0;

 VAR_12 = FUNC_6(VAR_10, VAR_2,
       VAR_11, VAR_6,
       ((void*)0));
 if (VAR_12)
  return VAR_12;


 for (VAR_14 = 0; VAR_14 <= VAR_2; VAR_14++) {
  if (VAR_10[VAR_14]) {
   if (VAR_13)
    return -VAR_0;
   VAR_13 = 1;
  }
 }

 VAR_9->behaviour = VAR_5;

 if (VAR_10[VAR_3])
  VAR_9->behaviour = VAR_3;

 if (VAR_10[VAR_1]) {
  VAR_9->behaviour = VAR_1;
  VAR_9->param.band_pref =
   FUNC_3(VAR_10[VAR_1]);
  if (!FUNC_1(VAR_8, VAR_9->param.band_pref))
   return -VAR_0;
 }

 if (VAR_10[VAR_4]) {
  struct nl80211_bss_select_rssi_adjust *VAR_15;

  VAR_15 = FUNC_2(VAR_10[VAR_4]);
  VAR_9->behaviour = VAR_4;
  VAR_9->param.adjust.band = VAR_15->band;
  VAR_9->param.adjust.delta = VAR_15->delta;
  if (!FUNC_1(VAR_8, VAR_9->param.adjust.band))
   return -VAR_0;
 }


 if (VAR_9->behaviour == VAR_5)
  return -VAR_0;

 if (!(VAR_8->bss_select_support & FUNC_0(VAR_9->behaviour)))
  return -VAR_0;

 return 0;
}
