
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct tc_netem_slot {unsigned int rate; int min_delay; int max_delay; int dist_jitter; scalar_t__ max_packets; scalar_t__ max_bytes; int cell_overhead; int cell_size; int packet_overhead; int correlation; int probability; int dup_corr; int loss_corr; int delay_corr; int duplicate; int gap; int loss; int limit; void* jitter; void* latency; } ;
struct tc_netem_reorder {unsigned int rate; int min_delay; int max_delay; int dist_jitter; scalar_t__ max_packets; scalar_t__ max_bytes; int cell_overhead; int cell_size; int packet_overhead; int correlation; int probability; int dup_corr; int loss_corr; int delay_corr; int duplicate; int gap; int loss; int limit; void* jitter; void* latency; } ;
struct tc_netem_rate {unsigned int rate; int min_delay; int max_delay; int dist_jitter; scalar_t__ max_packets; scalar_t__ max_bytes; int cell_overhead; int cell_size; int packet_overhead; int correlation; int probability; int dup_corr; int loss_corr; int delay_corr; int duplicate; int gap; int loss; int limit; void* jitter; void* latency; } ;
struct tc_netem_qopt {unsigned int rate; int min_delay; int max_delay; int dist_jitter; scalar_t__ max_packets; scalar_t__ max_bytes; int cell_overhead; int cell_size; int packet_overhead; int correlation; int probability; int dup_corr; int loss_corr; int delay_corr; int duplicate; int gap; int loss; int limit; void* jitter; void* latency; } ;
struct tc_netem_corrupt {unsigned int rate; int min_delay; int max_delay; int dist_jitter; scalar_t__ max_packets; scalar_t__ max_bytes; int cell_overhead; int cell_size; int packet_overhead; int correlation; int probability; int dup_corr; int loss_corr; int delay_corr; int duplicate; int gap; int loss; int limit; void* jitter; void* latency; } ;
struct tc_netem_corr {unsigned int rate; int min_delay; int max_delay; int dist_jitter; scalar_t__ max_packets; scalar_t__ max_bytes; int cell_overhead; int cell_size; int packet_overhead; int correlation; int probability; int dup_corr; int loss_corr; int delay_corr; int duplicate; int gap; int loss; int limit; void* jitter; void* latency; } ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct TYPE_10__ {int rho; } ;
struct TYPE_9__ {int rho; } ;
struct TYPE_8__ {int rho; } ;
struct TYPE_7__ {int rho; } ;
struct TYPE_6__ {int rho; } ;
struct netem_sched_data {unsigned long long rate; struct tc_netem_slot slot_config; scalar_t__ ecn; int cell_overhead; int cell_size; int packet_overhead; TYPE_5__ corrupt_cor; int corrupt; TYPE_4__ reorder_cor; int reorder; TYPE_3__ dup_cor; TYPE_2__ loss_cor; TYPE_1__ delay_cor; struct tc_netem_slot jitter; struct tc_netem_slot latency; int duplicate; int gap; int loss; int limit; } ;
struct Qdisc {int dummy; } ;
typedef int slot ;
typedef int reorder ;
typedef int rate ;
typedef int qopt ;
typedef int corrupt ;
typedef int cor ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct tc_netem_slot) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_1 (struct netem_sched_data const*,struct sk_buff*) ;
 void* FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct sk_buff*,struct nlattr*) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int,struct tc_netem_slot*) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,scalar_t__) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ,unsigned long long,int ) ;
 int FUNC_7 (struct sk_buff*,struct nlattr*) ;
 int VAR_13 ;
 struct netem_sched_data* FUNC_8 (struct Qdisc*) ;
 scalar_t__ FUNC_9 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_10(struct Qdisc *VAR_14, struct sk_buff *VAR_15)
{
 const struct netem_sched_data *VAR_16 = FUNC_8(VAR_14);
 struct nlattr *VAR_17 = (struct nlattr *) FUNC_9(VAR_15);
 struct tc_netem_qopt VAR_18;
 struct tc_netem_corr VAR_19;
 struct tc_netem_reorder VAR_20;
 struct tc_netem_corrupt VAR_21;
 struct tc_netem_rate VAR_22;
 struct tc_netem_slot VAR_23;

 VAR_18.latency = FUNC_2(VAR_13, FUNC_0(VAR_16->latency),
        VAR_12);
 VAR_18.jitter = FUNC_2(VAR_13, FUNC_0(VAR_16->jitter),
       VAR_12);
 VAR_18.limit = VAR_16->limit;
 VAR_18.loss = VAR_16->loss;
 VAR_18.gap = VAR_16->gap;
 VAR_18.duplicate = VAR_16->duplicate;
 if (FUNC_4(VAR_15, VAR_11, sizeof(VAR_18), &VAR_18))
  goto nla_put_failure;

 if (FUNC_4(VAR_15, VAR_5, sizeof(VAR_16->latency), &VAR_16->latency))
  goto nla_put_failure;

 if (FUNC_4(VAR_15, VAR_4, sizeof(VAR_16->jitter), &VAR_16->jitter))
  goto nla_put_failure;

 VAR_19.delay_corr = VAR_16->delay_cor.rho;
 VAR_19.loss_corr = VAR_16->loss_cor.rho;
 VAR_19.dup_corr = VAR_16->dup_cor.rho;
 if (FUNC_4(VAR_15, VAR_1, sizeof(VAR_19), &VAR_19))
  goto nla_put_failure;

 VAR_20.probability = VAR_16->reorder;
 VAR_20.correlation = VAR_16->reorder_cor.rho;
 if (FUNC_4(VAR_15, VAR_9, sizeof(VAR_20), &VAR_20))
  goto nla_put_failure;

 VAR_21.probability = VAR_16->corrupt;
 VAR_21.correlation = VAR_16->corrupt_cor.rho;
 if (FUNC_4(VAR_15, VAR_2, sizeof(VAR_21), &VAR_21))
  goto nla_put_failure;

 if (VAR_16->rate >= (1ULL << 32)) {
  if (FUNC_6(VAR_15, VAR_8, VAR_16->rate,
          VAR_6))
   goto nla_put_failure;
  VAR_22.rate = ~0U;
 } else {
  VAR_22.rate = VAR_16->rate;
 }
 VAR_22.packet_overhead = VAR_16->packet_overhead;
 VAR_22.cell_size = VAR_16->cell_size;
 VAR_22.cell_overhead = VAR_16->cell_overhead;
 if (FUNC_4(VAR_15, VAR_7, sizeof(VAR_22), &VAR_22))
  goto nla_put_failure;

 if (VAR_16->ecn && FUNC_5(VAR_15, VAR_3, VAR_16->ecn))
  goto nla_put_failure;

 if (FUNC_1(VAR_16, VAR_15) != 0)
  goto nla_put_failure;

 if (VAR_16->slot_config.min_delay | VAR_16->slot_config.max_delay |
     VAR_16->slot_config.dist_jitter) {
  VAR_23 = VAR_16->slot_config;
  if (VAR_23.max_packets == VAR_0)
   VAR_23.max_packets = 0;
  if (VAR_23.max_bytes == VAR_0)
   VAR_23.max_bytes = 0;
  if (FUNC_4(VAR_15, VAR_10, sizeof(VAR_23), &VAR_23))
   goto nla_put_failure;
 }

 return FUNC_3(VAR_15, VAR_17);

nla_put_failure:
 FUNC_7(VAR_15, VAR_17);
 return -1;
}
