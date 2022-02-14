
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct tc_tbf_qopt {void* buffer; void* mtu; int peakrate; int rate; int limit; } ;
struct TYPE_8__ {unsigned long long rate_bytes_ps; } ;
struct tbf_sched_data {TYPE_4__ peak; TYPE_4__ rate; int buffer; int mtu; int limit; TYPE_3__* qdisc; } ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct TYPE_5__ {int backlog; } ;
struct Qdisc {TYPE_1__ qstats; } ;
typedef int opt ;
struct TYPE_6__ {int backlog; } ;
struct TYPE_7__ {TYPE_2__ qstats; } ;


 void* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (struct sk_buff*,struct nlattr*) ;
 int FUNC_3 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_4 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int,struct tc_tbf_qopt*) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ,unsigned long long,int ) ;
 int FUNC_7 (int *,TYPE_4__*) ;
 struct tbf_sched_data* FUNC_8 (struct Qdisc*) ;
 scalar_t__ FUNC_9 (struct tbf_sched_data*) ;

__attribute__((used)) static int FUNC_10(struct Qdisc *VAR_5, struct sk_buff *VAR_6)
{
 struct tbf_sched_data *VAR_7 = FUNC_8(VAR_5);
 struct nlattr *VAR_8;
 struct tc_tbf_qopt VAR_9;

 VAR_5->qstats.backlog = VAR_7->qdisc->qstats.backlog;
 VAR_8 = FUNC_4(VAR_6, VAR_0);
 if (VAR_8 == ((void*)0))
  goto nla_put_failure;

 VAR_9.limit = VAR_7->limit;
 FUNC_7(&VAR_9.rate, &VAR_7->rate);
 if (FUNC_9(VAR_7))
  FUNC_7(&VAR_9.peakrate, &VAR_7->peak);
 else
  FUNC_1(&VAR_9.peakrate, 0, sizeof(VAR_9.peakrate));
 VAR_9.mtu = FUNC_0(VAR_7->mtu);
 VAR_9.buffer = FUNC_0(VAR_7->buffer);
 if (FUNC_5(VAR_6, VAR_2, sizeof(VAR_9), &VAR_9))
  goto nla_put_failure;
 if (VAR_7->rate.rate_bytes_ps >= (1ULL << 32) &&
     FUNC_6(VAR_6, VAR_4, VAR_7->rate.rate_bytes_ps,
         VAR_1))
  goto nla_put_failure;
 if (FUNC_9(VAR_7) &&
     VAR_7->peak.rate_bytes_ps >= (1ULL << 32) &&
     FUNC_6(VAR_6, VAR_3, VAR_7->peak.rate_bytes_ps,
         VAR_1))
  goto nla_put_failure;

 return FUNC_3(VAR_6, VAR_8);

nla_put_failure:
 FUNC_2(VAR_6, VAR_8);
 return -1;
}
