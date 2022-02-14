
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef void* u32 ;
struct nlattr {int dummy; } ;
struct genl_info {int extack; } ;
struct TYPE_6__ {struct cfg80211_pmsr_capabilities* pmsr_capa; } ;
struct cfg80211_registered_device {TYPE_1__ wiphy; } ;
struct TYPE_9__ {int requested; int asap; scalar_t__ num_bursts_exp; int burst_duration; scalar_t__ ftms_per_burst; int ftmr_retries; int request_lci; int request_civicloc; void* burst_period; void* preamble; } ;
struct TYPE_8__ {TYPE_2__* chan; void* width; } ;
struct cfg80211_pmsr_request_peer {TYPE_4__ ftm; TYPE_3__ chandef; } ;
struct TYPE_10__ {int bandwidths; int preambles; scalar_t__ max_bursts_exponent; scalar_t__ max_ftms_per_burst; int request_civicloc; int request_lci; int non_asap; int asap; } ;
struct cfg80211_pmsr_capabilities {TYPE_5__ ftm; } ;
struct TYPE_7__ {int band; } ;


 int FUNC_0 (void*) ;
 int VAR_0 ;

 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 void* VAR_11 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,struct nlattr*,char*) ;
 void* FUNC_3 (struct nlattr*) ;
 int FUNC_4 (struct nlattr**,int ,struct nlattr*,int *,int *) ;

__attribute__((used)) static int FUNC_5(struct cfg80211_registered_device *VAR_12,
     struct nlattr *VAR_13,
     struct cfg80211_pmsr_request_peer *VAR_14,
     struct genl_info *VAR_15)
{
 const struct cfg80211_pmsr_capabilities *VAR_16 = VAR_12->wiphy.pmsr_capa;
 struct nlattr *VAR_17[VAR_5 + 1];
 u32 VAR_18 = VAR_11;


 if (!(VAR_12->wiphy.pmsr_capa->ftm.bandwidths & FUNC_0(VAR_14->chandef.width))) {
  FUNC_1(VAR_15->extack, "FTM: unsupported bandwidth");
  return -VAR_0;
 }


 FUNC_4(VAR_17, VAR_5, VAR_13,
        ((void*)0), ((void*)0));

 if (VAR_17[VAR_8])
  VAR_18 = FUNC_3(VAR_17[VAR_8]);


 VAR_14->ftm.requested = 1;

 switch (VAR_14->chandef.chan->band) {
 case 128:

  break;
 default:
  if (!VAR_17[VAR_8]) {
   FUNC_1(VAR_15->extack,
           "FTM: must specify preamble");
   return -VAR_0;
  }
 }

 if (!(VAR_16->ftm.preambles & FUNC_0(VAR_18))) {
  FUNC_2(VAR_15->extack,
        VAR_17[VAR_8],
        "FTM: invalid preamble");
  return -VAR_0;
 }

 VAR_14->ftm.preamble = VAR_18;

 VAR_14->ftm.burst_period = 0;
 if (VAR_17[VAR_3])
  VAR_14->ftm.burst_period =
   FUNC_3(VAR_17[VAR_3]);

 VAR_14->ftm.asap = !!VAR_17[VAR_1];
 if (VAR_14->ftm.asap && !VAR_16->ftm.asap) {
  FUNC_2(VAR_15->extack,
        VAR_17[VAR_1],
        "FTM: ASAP mode not supported");
  return -VAR_0;
 }

 if (!VAR_14->ftm.asap && !VAR_16->ftm.non_asap) {
  FUNC_1(VAR_15->extack,
          "FTM: non-ASAP mode not supported");
  return -VAR_0;
 }

 VAR_14->ftm.num_bursts_exp = 0;
 if (VAR_17[VAR_6])
  VAR_14->ftm.num_bursts_exp =
   FUNC_3(VAR_17[VAR_6]);

 if (VAR_16->ftm.max_bursts_exponent >= 0 &&
     VAR_14->ftm.num_bursts_exp > VAR_16->ftm.max_bursts_exponent) {
  FUNC_2(VAR_15->extack,
        VAR_17[VAR_6],
        "FTM: max NUM_BURSTS_EXP must be set lower than the device limit");
  return -VAR_0;
 }

 VAR_14->ftm.burst_duration = 15;
 if (VAR_17[VAR_2])
  VAR_14->ftm.burst_duration =
   FUNC_3(VAR_17[VAR_2]);

 VAR_14->ftm.ftms_per_burst = 0;
 if (VAR_17[VAR_4])
  VAR_14->ftm.ftms_per_burst =
   FUNC_3(VAR_17[VAR_4]);

 if (VAR_16->ftm.max_ftms_per_burst &&
     (VAR_14->ftm.ftms_per_burst > VAR_16->ftm.max_ftms_per_burst ||
      VAR_14->ftm.ftms_per_burst == 0)) {
  FUNC_2(VAR_15->extack,
        VAR_17[VAR_4],
        "FTM: FTMs per burst must be set lower than the device limit but non-zero");
  return -VAR_0;
 }

 VAR_14->ftm.ftmr_retries = 3;
 if (VAR_17[VAR_7])
  VAR_14->ftm.ftmr_retries =
   FUNC_3(VAR_17[VAR_7]);

 VAR_14->ftm.request_lci = !!VAR_17[VAR_10];
 if (VAR_14->ftm.request_lci && !VAR_16->ftm.request_lci) {
  FUNC_2(VAR_15->extack,
        VAR_17[VAR_10],
        "FTM: LCI request not supported");
 }

 VAR_14->ftm.request_civicloc =
  !!VAR_17[VAR_9];
 if (VAR_14->ftm.request_civicloc && !VAR_16->ftm.request_civicloc) {
  FUNC_2(VAR_15->extack,
        VAR_17[VAR_9],
       "FTM: civic location request not supported");
 }

 return 0;
}
