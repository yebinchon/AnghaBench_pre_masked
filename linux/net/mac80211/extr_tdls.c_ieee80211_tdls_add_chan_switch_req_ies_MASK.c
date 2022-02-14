
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {scalar_t__ data; } ;
struct TYPE_5__ {int oper_class; int target_channel; } ;
struct TYPE_6__ {TYPE_2__ chan_switch_req; } ;
struct ieee80211_tdls_data {TYPE_3__ u; } ;
struct ieee80211_sub_if_data {int dummy; } ;
struct cfg80211_chan_def {TYPE_1__* chan; } ;
struct TYPE_4__ {int center_freq; } ;


 int FUNC_0 (int const*) ;
 scalar_t__ FUNC_1 (int) ;

 int FUNC_2 (int ) ;
 size_t FUNC_3 (int const*,size_t,int const*,int ,size_t) ;
 int FUNC_4 (struct ieee80211_sub_if_data*,struct sk_buff*,int const*,int) ;
 int FUNC_5 (struct sk_buff*,int const*,size_t) ;

__attribute__((used)) static void
FUNC_6(struct ieee80211_sub_if_data *VAR_0,
           struct sk_buff *VAR_1, const u8 *VAR_2,
           bool VAR_3, const u8 *VAR_4,
           size_t VAR_5, u8 VAR_6,
           struct cfg80211_chan_def *VAR_7)
{
 struct ieee80211_tdls_data *VAR_8;
 size_t VAR_9 = 0, VAR_10;

 if (FUNC_1(!VAR_7))
  return;

 VAR_8 = (void *)VAR_1->data;
 VAR_8->u.chan_switch_req.target_channel =
  FUNC_2(VAR_7->chan->center_freq);
 VAR_8->u.chan_switch_req.oper_class = VAR_6;

 if (VAR_5) {
  static const u8 VAR_11[] = {
   128,
  };
  VAR_10 = FUNC_3(VAR_4, VAR_5,
          VAR_11,
          FUNC_0(VAR_11),
          VAR_9);
  FUNC_5(VAR_1, VAR_4 + VAR_9, VAR_10 - VAR_9);
  VAR_9 = VAR_10;
 }

 FUNC_4(VAR_0, VAR_1, VAR_2, VAR_3);


 if (VAR_5) {
  VAR_10 = VAR_5;
  FUNC_5(VAR_1, VAR_4 + VAR_9, VAR_10 - VAR_9);
 }
}
