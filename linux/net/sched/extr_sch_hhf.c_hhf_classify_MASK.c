
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct sk_buff {int dummy; } ;
struct hhf_sched_data {size_t hhf_arrays_reset_timestamp; size_t hhf_reset_timeout; size_t** hhf_arrays; size_t hhf_admit_bytes; int hh_flows_total_cnt; int * hh_flows; int * hhf_valid_bits; int perturbation; } ;
struct hh_flow_state {size_t hit_timestamp; size_t hash_id; } ;
struct Qdisc {int dummy; } ;
typedef enum wdrr_bucket_idx { ____Placeholder_wdrr_bucket_idx } wdrr_bucket_idx ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (size_t,int ) ;
 struct hh_flow_state* FUNC_1 (int *,struct hhf_sched_data*) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (size_t,size_t) ;
 size_t FUNC_4 () ;
 size_t FUNC_5 (struct sk_buff*) ;
 struct hhf_sched_data* FUNC_6 (struct Qdisc*) ;
 struct hh_flow_state* FUNC_7 (size_t,int *,struct hhf_sched_data*) ;
 size_t FUNC_8 (struct sk_buff*,int *) ;
 int FUNC_9 (size_t,int ) ;

__attribute__((used)) static enum wdrr_bucket_idx FUNC_10(struct sk_buff *VAR_6, struct Qdisc *VAR_7)
{
 struct hhf_sched_data *VAR_8 = FUNC_6(VAR_7);
 u32 VAR_9, VAR_10;
 u32 VAR_11, VAR_12[VAR_0], VAR_13;
 struct hh_flow_state *VAR_14;
 u32 VAR_15, VAR_16;
 int VAR_17;
 u32 VAR_18;
 u32 VAR_19 = FUNC_4();


 VAR_18 = VAR_8->hhf_arrays_reset_timestamp + VAR_8->hhf_reset_timeout;
 if (FUNC_3(VAR_18, VAR_19)) {
  for (VAR_17 = 0; VAR_17 < VAR_0; VAR_17++)
   FUNC_2(VAR_8->hhf_valid_bits[VAR_17], VAR_1);
  VAR_8->hhf_arrays_reset_timestamp = VAR_19;
 }


 VAR_10 = FUNC_8(VAR_6, &VAR_8->perturbation);


 VAR_13 = VAR_10 & VAR_2;
 VAR_14 = FUNC_7(VAR_10, &VAR_8->hh_flows[VAR_13], VAR_8);
 if (VAR_14) {
  VAR_14->hit_timestamp = VAR_19;
  return VAR_4;
 }


 VAR_9 = VAR_10;
 VAR_11 = 0;
 for (VAR_17 = 0; VAR_17 < VAR_0 - 1; VAR_17++) {

  VAR_12[VAR_17] = VAR_9 & VAR_2;
  VAR_11 ^= VAR_12[VAR_17];
  VAR_9 >>= VAR_3;
 }

 VAR_12[VAR_0 - 1] = VAR_11 ^ VAR_9;

 VAR_15 = FUNC_5(VAR_6);
 VAR_16 = ~0U;
 for (VAR_17 = 0; VAR_17 < VAR_0; VAR_17++) {
  u32 VAR_20;

  if (!FUNC_9(VAR_12[VAR_17], VAR_8->hhf_valid_bits[VAR_17])) {
   VAR_8->hhf_arrays[VAR_17][VAR_12[VAR_17]] = 0;
   FUNC_0(VAR_12[VAR_17], VAR_8->hhf_valid_bits[VAR_17]);
  }

  VAR_20 = VAR_8->hhf_arrays[VAR_17][VAR_12[VAR_17]] + VAR_15;
  if (VAR_16 > VAR_20)
   VAR_16 = VAR_20;
 }


 if (VAR_16 > VAR_8->hhf_admit_bytes) {

  VAR_14 = FUNC_1(&VAR_8->hh_flows[VAR_13], VAR_8);
  if (!VAR_14)
   return VAR_5;
  VAR_14->hash_id = VAR_10;
  VAR_14->hit_timestamp = VAR_19;
  VAR_8->hh_flows_total_cnt++;




  return VAR_4;
 }


 for (VAR_17 = 0; VAR_17 < VAR_0; VAR_17++) {
  if (VAR_8->hhf_arrays[VAR_17][VAR_12[VAR_17]] < VAR_16)
   VAR_8->hhf_arrays[VAR_17][VAR_12[VAR_17]] = VAR_16;
 }
 return VAR_5;
}
