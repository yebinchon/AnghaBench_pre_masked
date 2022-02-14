
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int sk_pacing_status; } ;
struct sk_buff {struct sock* sk; } ;
struct fq_flow {scalar_t__ qlen; int credit; scalar_t__ age; } ;
struct fq_sched_data {scalar_t__ flow_plimit; int stat_internal_packets; struct fq_flow internal; int inactive_flows; scalar_t__ rate_enable; int quantum; scalar_t__ flow_refill_delay; int new_flows; int stat_flows_plimit; } ;
struct TYPE_2__ {scalar_t__ qlen; } ;
struct Qdisc {scalar_t__ limit; TYPE_1__ q; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct fq_flow*,struct sk_buff*) ;
 struct fq_flow* FUNC_1 (struct sk_buff*,struct fq_sched_data*) ;
 int FUNC_2 (int *,struct fq_flow*) ;
 scalar_t__ FUNC_3 (struct fq_flow*) ;
 int VAR_2 ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (struct sk_buff*,struct Qdisc*,struct sk_buff**) ;
 struct fq_sched_data* FUNC_6 (struct Qdisc*) ;
 int FUNC_7 (struct Qdisc*,struct sk_buff*) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *,scalar_t__) ;
 scalar_t__ FUNC_10 (int ,scalar_t__) ;
 int VAR_3 ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static int FUNC_12(struct sk_buff *VAR_4, struct Qdisc *VAR_5,
        struct sk_buff **VAR_6)
{
 struct fq_sched_data *VAR_7 = FUNC_6(VAR_5);
 struct fq_flow *VAR_8;

 if (FUNC_11(VAR_5->q.qlen >= VAR_5->limit))
  return FUNC_5(VAR_4, VAR_5, VAR_6);

 VAR_8 = FUNC_1(VAR_4, VAR_7);
 if (FUNC_11(VAR_8->qlen >= VAR_7->flow_plimit && VAR_8 != &VAR_7->internal)) {
  VAR_7->stat_flows_plimit++;
  return FUNC_5(VAR_4, VAR_5, VAR_6);
 }

 VAR_8->qlen++;
 FUNC_7(VAR_5, VAR_4);
 if (FUNC_3(VAR_8)) {
  struct sock *VAR_9 = VAR_4->sk;

  FUNC_2(&VAR_7->new_flows, VAR_8);
  if (FUNC_10(VAR_2, VAR_8->age + VAR_7->flow_refill_delay))
   VAR_8->credit = FUNC_4(VAR_3, VAR_8->credit, VAR_7->quantum);
  if (VAR_9 && VAR_7->rate_enable) {
   if (FUNC_11(FUNC_8(&VAR_9->sk_pacing_status) !=
         VAR_1))
    FUNC_9(&VAR_9->sk_pacing_status,
        VAR_1);
  }
  VAR_7->inactive_flows--;
 }


 FUNC_0(VAR_8, VAR_4);

 if (FUNC_11(VAR_8 == &VAR_7->internal)) {
  VAR_7->stat_internal_packets++;
 }
 VAR_5->q.qlen++;

 return VAR_0;
}
