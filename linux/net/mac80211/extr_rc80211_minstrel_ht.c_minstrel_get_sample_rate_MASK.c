
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct minstrel_rate_stats {scalar_t__ prob_ewma; int sample_skipped; scalar_t__ attempts; } ;
struct minstrel_priv {int sample_switch; TYPE_1__* hw; } ;
struct minstrel_mcs_group_data {size_t column; size_t index; int* max_group_tp_rate; struct minstrel_rate_stats* rates; } ;
struct minstrel_ht_sta {scalar_t__ total_packets_cur; scalar_t__ sample_wait; unsigned int sample_group; int* supported; int* max_tp_rate; int max_prob_rate; int sample_tries; int sample_slow; struct minstrel_mcs_group_data* groups; } ;
struct TYPE_4__ {unsigned int streams; } ;
struct TYPE_3__ {int max_rates; } ;


 int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 scalar_t__ FUNC_1 (int,int) ;
 scalar_t__ VAR_1 ;
 unsigned int FUNC_2 (int) ;
 TYPE_2__* VAR_2 ;
 int FUNC_3 (struct minstrel_ht_sta*) ;
 int** VAR_3 ;

__attribute__((used)) static int
FUNC_4(struct minstrel_priv *VAR_4, struct minstrel_ht_sta *VAR_5)
{
 struct minstrel_rate_stats *VAR_6;
 struct minstrel_mcs_group_data *VAR_7;
 unsigned int VAR_8, VAR_9, VAR_10;
 int VAR_11, VAR_12;
 int VAR_13 = 0;

 if (VAR_4->hw->max_rates == 1 && VAR_4->sample_switch &&
     (VAR_5->total_packets_cur >= VAR_1 ||
      VAR_4->sample_switch == 1))
  return -1;

 if (VAR_5->sample_wait > 0) {
  VAR_5->sample_wait--;
  return -1;
 }

 if (!VAR_5->sample_tries)
  return -1;

 VAR_9 = VAR_5->sample_group;
 VAR_7 = &VAR_5->groups[VAR_9];
 VAR_13 = VAR_3[VAR_7->column][VAR_7->index];
 FUNC_3(VAR_5);

 if (!(VAR_5->supported[VAR_9] & FUNC_0(VAR_13)))
  return -1;

 VAR_6 = &VAR_7->rates[VAR_13];
 VAR_13 += VAR_9 * VAR_0;


 if (FUNC_2(VAR_5->max_tp_rate[0]) >
     FUNC_2(VAR_5->max_tp_rate[1])) {
  VAR_11 = VAR_5->max_tp_rate[1];
  VAR_12 = VAR_5->max_tp_rate[0];
 } else {
  VAR_11 = VAR_5->max_tp_rate[0];
  VAR_12 = VAR_5->max_tp_rate[1];
 }






 if (VAR_13 == VAR_5->max_tp_rate[0] || VAR_13 == VAR_5->max_prob_rate)
  return -1;






 VAR_8 = FUNC_2(VAR_13);
 if (VAR_6->prob_ewma > FUNC_1(95, 100) ||
     FUNC_2(VAR_5->max_prob_rate) * 3 < VAR_8)
  return -1;







 if (VAR_4->hw->max_rates == 1 &&
     (FUNC_2(VAR_7->max_group_tp_rate[0]) < VAR_8 ||
      VAR_6->attempts))
  return -1;


 if (VAR_8 >= FUNC_2(VAR_11) && VAR_6->attempts)
  return -1;






 VAR_10 = VAR_2[VAR_11 /
  VAR_0].streams;
 if (VAR_8 >= FUNC_2(VAR_12) &&
     (VAR_10 - 1 <
      VAR_2[VAR_9].streams ||
      VAR_8 >= FUNC_2(VAR_5->max_prob_rate))) {
  if (VAR_6->sample_skipped < 20)
   return -1;

  if (VAR_5->sample_slow++ > 2)
   return -1;
 }
 VAR_5->sample_tries--;

 return VAR_13;
}
