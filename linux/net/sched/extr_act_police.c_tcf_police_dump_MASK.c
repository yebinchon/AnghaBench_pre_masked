
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int t ;
struct tcf_t {void* expires; void* firstuse; void* lastuse; void* install; } ;
struct tcf_police_params {scalar_t__ tcfp_ewma_rate; scalar_t__ tcfp_result; int peak; scalar_t__ peak_present; int rate; scalar_t__ rate_present; int tcfp_burst; int tcfp_mtu; } ;
struct TYPE_7__ {scalar_t__ expires; scalar_t__ firstuse; scalar_t__ lastuse; scalar_t__ install; } ;
struct tcf_police {int tcf_lock; TYPE_3__ tcf_tm; TYPE_4__* params; int tcf_action; int tcf_bindcnt; int tcf_refcnt; int tcf_index; } ;
struct tc_police {int peakrate; int rate; int burst; int mtu; int action; int bindcnt; int refcnt; int index; } ;
struct tc_action {int dummy; } ;
struct sk_buff {int len; } ;
typedef int opt ;
struct TYPE_6__ {unsigned long long rate_bytes_ps; } ;
struct TYPE_5__ {unsigned long long rate_bytes_ps; } ;
struct TYPE_8__ {TYPE_2__ peak; TYPE_1__ rate; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_7 ;
 void* FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int,struct tc_police*) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int,struct tcf_t*,int ) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ,scalar_t__) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int ,unsigned long long,int ) ;
 int FUNC_8 (struct sk_buff*,unsigned char*) ;
 int FUNC_9 (int *,int *) ;
 struct tcf_police_params* FUNC_10 (TYPE_4__*,int ) ;
 int FUNC_11 (int *) ;
 unsigned char* FUNC_12 (struct sk_buff*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 struct tcf_police* FUNC_15 (struct tc_action*) ;

__attribute__((used)) static int FUNC_16(struct sk_buff *VAR_8, struct tc_action *VAR_9,
          int VAR_10, int VAR_11)
{
 unsigned char *VAR_12 = FUNC_12(VAR_8);
 struct tcf_police *VAR_13 = FUNC_15(VAR_9);
 struct tcf_police_params *VAR_14;
 struct tc_police VAR_15 = {
  .index = VAR_13->tcf_index,
  .refcnt = FUNC_11(&VAR_13->tcf_refcnt) - VAR_11,
  .bindcnt = FUNC_1(&VAR_13->tcf_bindcnt) - VAR_10,
 };
 struct tcf_t VAR_16;

 FUNC_13(&VAR_13->tcf_lock);
 VAR_15.action = VAR_13->tcf_action;
 VAR_14 = FUNC_10(VAR_13->params,
          FUNC_3(&VAR_13->tcf_lock));
 VAR_15.mtu = VAR_14->tcfp_mtu;
 VAR_15.burst = FUNC_0(VAR_14->tcfp_burst);
 if (VAR_14->rate_present) {
  FUNC_9(&VAR_15.rate, &VAR_14->rate);
  if ((VAR_13->params->rate.rate_bytes_ps >= (1ULL << 32)) &&
      FUNC_7(VAR_8, VAR_3,
          VAR_13->params->rate.rate_bytes_ps,
          VAR_1))
   goto nla_put_failure;
 }
 if (VAR_14->peak_present) {
  FUNC_9(&VAR_15.peakrate, &VAR_14->peak);
  if ((VAR_13->params->peak.rate_bytes_ps >= (1ULL << 32)) &&
      FUNC_7(VAR_8, VAR_2,
          VAR_13->params->peak.rate_bytes_ps,
          VAR_1))
   goto nla_put_failure;
 }
 if (FUNC_4(VAR_8, VAR_5, sizeof(VAR_15), &VAR_15))
  goto nla_put_failure;
 if (VAR_14->tcfp_result &&
     FUNC_6(VAR_8, VAR_4, VAR_14->tcfp_result))
  goto nla_put_failure;
 if (VAR_14->tcfp_ewma_rate &&
     FUNC_6(VAR_8, VAR_0, VAR_14->tcfp_ewma_rate))
  goto nla_put_failure;

 VAR_16.install = FUNC_2(VAR_7 - VAR_13->tcf_tm.install);
 VAR_16.lastuse = FUNC_2(VAR_7 - VAR_13->tcf_tm.lastuse);
 VAR_16.firstuse = FUNC_2(VAR_7 - VAR_13->tcf_tm.firstuse);
 VAR_16.expires = FUNC_2(VAR_13->tcf_tm.expires);
 if (FUNC_5(VAR_8, VAR_6, sizeof(VAR_16), &VAR_16, VAR_1))
  goto nla_put_failure;
 FUNC_14(&VAR_13->tcf_lock);

 return VAR_8->len;

nla_put_failure:
 FUNC_14(&VAR_13->tcf_lock);
 FUNC_8(VAR_8, VAR_12);
 return -1;
}
