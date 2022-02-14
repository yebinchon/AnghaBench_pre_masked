
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct cake_tin_data {size_t* overflow_idx; struct cake_flow* flows; scalar_t__ decaying_flow_count; scalar_t__ bulk_flow_count; scalar_t__ sparse_flow_count; int decaying_flows; int old_flows; int new_flows; } ;
struct cake_sched_data {int interval; int target; int min_adjlen; int min_netlen; scalar_t__ rate_bps; scalar_t__ avg_peak_bandwidth; TYPE_1__* overflow_heap; struct cake_tin_data* tins; int filter_list; int block; int watchdog; scalar_t__ cur_flow; scalar_t__ cur_tin; int rate_flags; int flow_mode; int tin_mode; } ;
struct cake_flow {int cvars; int flowchain; } ;
struct Qdisc {int limit; } ;
struct TYPE_2__ {int t; int b; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct Qdisc*,struct nlattr*,struct netlink_ext_ack*) ;
 int FUNC_2 (struct Qdisc*) ;
 int FUNC_3 (struct Qdisc*) ;
 int FUNC_4 (int *) ;
 struct cake_tin_data* FUNC_5 (int,int,int ) ;
 struct cake_sched_data* FUNC_6 (struct Qdisc*) ;
 int FUNC_7 (int *,struct Qdisc*) ;
 int* VAR_7 ;
 int FUNC_8 (int *,int *,struct Qdisc*,struct netlink_ext_ack*) ;

__attribute__((used)) static int FUNC_9(struct Qdisc *VAR_8, struct nlattr *VAR_9,
       struct netlink_ext_ack *VAR_10)
{
 struct cake_sched_data *VAR_11 = FUNC_6(VAR_8);
 int VAR_12, VAR_13, VAR_14;

 VAR_8->limit = 10240;
 VAR_11->tin_mode = VAR_0;
 VAR_11->flow_mode = VAR_2;

 VAR_11->rate_bps = 0;

 VAR_11->interval = 100000;
 VAR_11->target = 5000;


 VAR_11->rate_flags |= VAR_1;
 VAR_11->cur_tin = 0;
 VAR_11->cur_flow = 0;

 FUNC_7(&VAR_11->watchdog, VAR_8);

 if (VAR_9) {
  int VAR_15 = FUNC_1(VAR_8, VAR_9, VAR_10);

  if (VAR_15)
   return VAR_15;
 }

 VAR_14 = FUNC_8(&VAR_11->block, &VAR_11->filter_list, VAR_8, VAR_10);
 if (VAR_14)
  return VAR_14;

 VAR_7[0] = ~0;
 for (VAR_12 = 1; VAR_12 <= VAR_4; VAR_12++)
  VAR_7[VAR_12] = 65535 / VAR_12;

 VAR_11->tins = FUNC_5(VAR_3, sizeof(struct cake_tin_data),
      VAR_6);
 if (!VAR_11->tins)
  goto nomem;

 for (VAR_12 = 0; VAR_12 < VAR_3; VAR_12++) {
  struct cake_tin_data *VAR_16 = VAR_11->tins + VAR_12;

  FUNC_0(&VAR_16->new_flows);
  FUNC_0(&VAR_16->old_flows);
  FUNC_0(&VAR_16->decaying_flows);
  VAR_16->sparse_flow_count = 0;
  VAR_16->bulk_flow_count = 0;
  VAR_16->decaying_flow_count = 0;

  for (VAR_13 = 0; VAR_13 < VAR_4; VAR_13++) {
   struct cake_flow *VAR_17 = VAR_16->flows + VAR_13;
   u32 VAR_18 = VAR_13 * VAR_3 + VAR_12;

   FUNC_0(&VAR_17->flowchain);
   FUNC_4(&VAR_17->cvars);

   VAR_11->overflow_heap[VAR_18].t = VAR_12;
   VAR_11->overflow_heap[VAR_18].b = VAR_13;
   VAR_16->overflow_idx[VAR_13] = VAR_18;
  }
 }

 FUNC_3(VAR_8);
 VAR_11->avg_peak_bandwidth = VAR_11->rate_bps;
 VAR_11->min_netlen = ~0;
 VAR_11->min_adjlen = ~0;
 return 0;

nomem:
 FUNC_2(VAR_8);
 return -VAR_5;
}
