
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct cfg80211_registered_device {TYPE_1__* coalesce; } ;
struct cfg80211_coalesce_rules {int n_patterns; TYPE_2__* patterns; int condition; int delay; } ;
struct TYPE_4__ {int pattern_len; int pkt_offset; int pattern; int mask; } ;
struct TYPE_3__ {int n_rules; struct cfg80211_coalesce_rules* rules; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_2 (struct sk_buff*,int) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_8,
           struct cfg80211_registered_device *VAR_9)
{
 struct nlattr *VAR_10, *VAR_11, *VAR_12, *VAR_13;
 int VAR_14, VAR_15, VAR_16;
 struct cfg80211_coalesce_rules *VAR_17;

 if (!VAR_9->coalesce->n_rules)
  return 0;

 VAR_13 = FUNC_2(VAR_8, VAR_1);
 if (!VAR_13)
  return -VAR_0;

 for (VAR_14 = 0; VAR_14 < VAR_9->coalesce->n_rules; VAR_14++) {
  VAR_12 = FUNC_2(VAR_8, VAR_14 + 1);
  if (!VAR_12)
   return -VAR_0;

  VAR_17 = &VAR_9->coalesce->rules[VAR_14];
  if (FUNC_4(VAR_8, VAR_3,
    VAR_17->delay))
   return -VAR_0;

  if (FUNC_4(VAR_8, VAR_2,
    VAR_17->condition))
   return -VAR_0;

  VAR_10 = FUNC_2(VAR_8,
      VAR_4);
  if (!VAR_10)
   return -VAR_0;

  for (VAR_15 = 0; VAR_15 < VAR_17->n_patterns; VAR_15++) {
   VAR_11 = FUNC_2(VAR_8, VAR_15 + 1);
   if (!VAR_11)
    return -VAR_0;
   VAR_16 = VAR_17->patterns[VAR_15].pattern_len;
   if (FUNC_3(VAR_8, VAR_5,
        FUNC_0(VAR_16, 8),
        VAR_17->patterns[VAR_15].mask) ||
       FUNC_3(VAR_8, VAR_7, VAR_16,
        VAR_17->patterns[VAR_15].pattern) ||
       FUNC_4(VAR_8, VAR_6,
     VAR_17->patterns[VAR_15].pkt_offset))
    return -VAR_0;
   FUNC_1(VAR_8, VAR_11);
  }
  FUNC_1(VAR_8, VAR_10);
  FUNC_1(VAR_8, VAR_12);
 }
 FUNC_1(VAR_8, VAR_13);

 return 0;
}
