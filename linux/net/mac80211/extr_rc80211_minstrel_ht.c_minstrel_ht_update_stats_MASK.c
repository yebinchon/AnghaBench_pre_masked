
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
typedef int tmp_mcs_tp_rate ;
typedef int tmp_cck_tp_rate ;
struct minstrel_rate_stats {int retry_updated; int prob_ewma; } ;
struct minstrel_priv {int sample_switch; int fixed_rate_idx; int hw; } ;
struct minstrel_mcs_group_data {int* max_group_tp_rate; struct minstrel_rate_stats* rates; } ;
struct minstrel_ht_sta {scalar_t__ total_packets_cur; scalar_t__ total_packets; scalar_t__ total_packets_last; scalar_t__ ampdu_packets; int sample_count; int* supported; int* max_tp_rate; int max_prob_rate; int last_stats_update; void* sample_mode; struct minstrel_mcs_group_data* groups; scalar_t__ sample_slow; scalar_t__ ampdu_len; scalar_t__ avg_ampdu_len; } ;


 int FUNC_0 (size_t*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 size_t VAR_4 ;
 void* VAR_5 ;
 size_t VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int ,int ) ;
 int VAR_9 ;
 int FUNC_4 (int*,size_t*,int) ;
 int FUNC_5 (size_t*,int ,int) ;
 int FUNC_6 (struct minstrel_rate_stats*) ;
 scalar_t__ FUNC_7 (scalar_t__,int ,int ) ;
 int FUNC_8 (struct minstrel_ht_sta*,size_t*,size_t*) ;
 scalar_t__ FUNC_9 (struct minstrel_ht_sta*,int,int,int) ;
 int FUNC_10 (struct minstrel_ht_sta*) ;
 int FUNC_11 (struct minstrel_priv*,struct minstrel_ht_sta*) ;
 int FUNC_12 (struct minstrel_ht_sta*,size_t) ;
 int FUNC_13 (struct minstrel_ht_sta*,size_t,size_t*) ;
 size_t* VAR_10 ;

__attribute__((used)) static void
FUNC_14(struct minstrel_priv *VAR_11, struct minstrel_ht_sta *VAR_12,
    bool VAR_13)
{
 struct minstrel_mcs_group_data *VAR_14;
 struct minstrel_rate_stats *VAR_15;
 int VAR_16, VAR_17, VAR_18, VAR_19;
 u16 VAR_20[VAR_1], VAR_21[VAR_1];
 u16 VAR_22[VAR_1], VAR_23;

 VAR_12->sample_mode = VAR_5;

 if (VAR_13) {
  VAR_12->total_packets_cur = VAR_12->total_packets -
     VAR_12->total_packets_last;
  VAR_12->total_packets_last = VAR_12->total_packets;
 }
 if (!VAR_11->sample_switch)
  VAR_13 = 0;
 if (VAR_12->total_packets_cur < VAR_7 && VAR_11->sample_switch != 1)
     VAR_13 = 0;

 if (VAR_12->ampdu_packets > 0) {
  if (!FUNC_3(VAR_11->hw, VAR_8))
   VAR_12->avg_ampdu_len = FUNC_7(VAR_12->avg_ampdu_len,
    FUNC_2(VAR_12->ampdu_len, VAR_12->ampdu_packets),
           VAR_0);
  else
   VAR_12->avg_ampdu_len = 0;
  VAR_12->ampdu_len = 0;
  VAR_12->ampdu_packets = 0;
 }

 VAR_12->sample_slow = 0;
 VAR_12->sample_count = 0;

 FUNC_5(VAR_20, 0, sizeof(VAR_20));
 FUNC_5(VAR_22, 0, sizeof(VAR_22));
 if (VAR_12->supported[VAR_3])
  for (VAR_18 = 0; VAR_18 < FUNC_0(VAR_22); VAR_18++)
   VAR_22[VAR_18] = VAR_3 * VAR_2;

 if (VAR_12->supported[VAR_6])
  VAR_23 = VAR_6 * VAR_2;
 else
  VAR_23 = VAR_4 * VAR_2;

 for (VAR_18 = 0; VAR_18 < FUNC_0(VAR_20); VAR_18++)
  VAR_20[VAR_18] = VAR_23;


 for (VAR_16 = 0; VAR_16 < FUNC_0(VAR_10); VAR_16++) {

  VAR_14 = &VAR_12->groups[VAR_16];
  if (!VAR_12->supported[VAR_16])
   continue;

  VAR_12->sample_count++;


  for(VAR_18 = 0; VAR_18 < VAR_1; VAR_18++)
   VAR_21[VAR_18] = VAR_2 * VAR_16;

  for (VAR_17 = 0; VAR_17 < VAR_2; VAR_17++) {
   if (!(VAR_12->supported[VAR_16] & FUNC_1(VAR_17)))
    continue;

   VAR_23 = VAR_2 * VAR_16 + VAR_17;

   VAR_15 = &VAR_14->rates[VAR_17];
   VAR_15->retry_updated = 0;
   FUNC_6(VAR_15);
   VAR_19 = VAR_15->prob_ewma;

   if (FUNC_9(VAR_12, VAR_16, VAR_17, VAR_19) == 0)
    continue;


   if (VAR_16 != VAR_3) {
    FUNC_13(VAR_12, VAR_23,
              VAR_20);
   } else if (VAR_16 == VAR_3) {
    FUNC_13(VAR_12, VAR_23,
              VAR_22);
   }


   FUNC_13(VAR_12, VAR_23,
             VAR_21);


   FUNC_12(VAR_12, VAR_23);
  }

  FUNC_4(VAR_14->max_group_tp_rate, VAR_21,
         sizeof(VAR_14->max_group_tp_rate));
 }


 FUNC_8(VAR_12, VAR_20, VAR_22);
 FUNC_4(VAR_12->max_tp_rate, VAR_20, sizeof(VAR_12->max_tp_rate));


 FUNC_10(VAR_12);


 VAR_12->sample_count *= 8;

 if (VAR_13)
  FUNC_11(VAR_11, VAR_12);
 VAR_12->last_stats_update = VAR_9;
}
