
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wdrr_bucket {int bucketchain; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct list_head {int dummy; } ;
struct hhf_sched_data {int hhf_reset_timeout; int hhf_admit_bytes; int hhf_evict_timeout; int hhf_non_hh_weight; int hh_flows_limit; struct wdrr_bucket* buckets; int * hhf_valid_bits; int hhf_arrays_reset_timestamp; void** hhf_arrays; scalar_t__ hh_flows_current_cnt; scalar_t__ hh_flows_total_cnt; scalar_t__ hh_flows_overlimit; int * hh_flows; int old_buckets; int new_buckets; int perturbation; int quantum; } ;
struct Qdisc {int limit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int VAR_7 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (struct Qdisc*,struct nlattr*,struct netlink_ext_ack*) ;
 int FUNC_3 () ;
 void* FUNC_4 (int,int,int ) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct Qdisc*) ;
 struct hhf_sched_data* FUNC_8 (struct Qdisc*) ;

__attribute__((used)) static int FUNC_9(struct Qdisc *VAR_8, struct nlattr *VAR_9,
      struct netlink_ext_ack *VAR_10)
{
 struct hhf_sched_data *VAR_11 = FUNC_8(VAR_8);
 int VAR_12;

 VAR_8->limit = 1000;
 VAR_11->quantum = FUNC_6(FUNC_7(VAR_8));
 FUNC_1(&VAR_11->perturbation, sizeof(VAR_11->perturbation));
 FUNC_0(&VAR_11->new_buckets);
 FUNC_0(&VAR_11->old_buckets);


 VAR_11->hhf_reset_timeout = VAR_6 / 25;
 VAR_11->hhf_admit_bytes = 131072;
 VAR_11->hhf_evict_timeout = VAR_6;
 VAR_11->hhf_non_hh_weight = 2;

 if (VAR_9) {
  int VAR_13 = FUNC_2(VAR_8, VAR_9, VAR_10);

  if (VAR_13)
   return VAR_13;
 }

 if (!VAR_11->hh_flows) {

  VAR_11->hh_flows = FUNC_4(VAR_5, sizeof(struct list_head),
           VAR_2);
  if (!VAR_11->hh_flows)
   return -VAR_1;
  for (VAR_12 = 0; VAR_12 < VAR_5; VAR_12++)
   FUNC_0(&VAR_11->hh_flows[VAR_12]);


  VAR_11->hh_flows_limit = 2 * VAR_5;
  VAR_11->hh_flows_overlimit = 0;
  VAR_11->hh_flows_total_cnt = 0;
  VAR_11->hh_flows_current_cnt = 0;


  for (VAR_12 = 0; VAR_12 < VAR_3; VAR_12++) {
   VAR_11->hhf_arrays[VAR_12] = FUNC_4(VAR_4,
          sizeof(u32),
          VAR_2);
   if (!VAR_11->hhf_arrays[VAR_12]) {



    return -VAR_1;
   }
  }
  VAR_11->hhf_arrays_reset_timestamp = FUNC_3();


  for (VAR_12 = 0; VAR_12 < VAR_3; VAR_12++) {
   VAR_11->hhf_valid_bits[VAR_12] = FUNC_5(VAR_4 /
         VAR_0, VAR_2);
   if (!VAR_11->hhf_valid_bits[VAR_12]) {



    return -VAR_1;
   }
  }


  for (VAR_12 = 0; VAR_12 < VAR_7; VAR_12++) {
   struct wdrr_bucket *VAR_14 = VAR_11->buckets + VAR_12;

   FUNC_0(&VAR_14->bucketchain);
  }
 }

 return 0;
}
