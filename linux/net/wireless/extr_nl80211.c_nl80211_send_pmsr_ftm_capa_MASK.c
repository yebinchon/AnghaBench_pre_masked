
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct TYPE_2__ {scalar_t__ preambles; scalar_t__ bandwidths; scalar_t__ max_bursts_exponent; scalar_t__ max_ftms_per_burst; scalar_t__ request_civicloc; scalar_t__ request_lci; scalar_t__ non_asap; scalar_t__ asap; int supported; } ;
struct cfg80211_pmsr_capabilities {TYPE_1__ ftm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_1 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_4(const struct cfg80211_pmsr_capabilities *VAR_10,
      struct sk_buff *VAR_11)
{
 struct nlattr *VAR_12;

 if (!VAR_10->ftm.supported)
  return 0;

 VAR_12 = FUNC_1(VAR_11, VAR_9);
 if (!VAR_12)
  return -VAR_0;

 if (VAR_10->ftm.asap && FUNC_2(VAR_11, VAR_1))
  return -VAR_0;
 if (VAR_10->ftm.non_asap &&
     FUNC_2(VAR_11, VAR_5))
  return -VAR_0;
 if (VAR_10->ftm.request_lci &&
     FUNC_2(VAR_11, VAR_8))
  return -VAR_0;
 if (VAR_10->ftm.request_civicloc &&
     FUNC_2(VAR_11, VAR_7))
  return -VAR_0;
 if (FUNC_3(VAR_11, VAR_6,
   VAR_10->ftm.preambles))
  return -VAR_0;
 if (FUNC_3(VAR_11, VAR_2,
   VAR_10->ftm.bandwidths))
  return -VAR_0;
 if (VAR_10->ftm.max_bursts_exponent >= 0 &&
     FUNC_3(VAR_11, VAR_3,
   VAR_10->ftm.max_bursts_exponent))
  return -VAR_0;
 if (VAR_10->ftm.max_ftms_per_burst &&
     FUNC_3(VAR_11, VAR_4,
   VAR_10->ftm.max_ftms_per_burst))
  return -VAR_0;

 FUNC_0(VAR_11, VAR_12);
 return 0;
}
