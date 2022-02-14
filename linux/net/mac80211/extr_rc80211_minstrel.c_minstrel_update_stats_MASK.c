
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct minstrel_sta_info {int n_rates; int* max_tp_rate; size_t max_prob_rate; int last_stats_update; struct minstrel_rate* r; } ;
struct minstrel_rate_stats {scalar_t__ prob_ewma; int retry_count; } ;
struct minstrel_rate {int adjusted_retry_count; int sample_limit; struct minstrel_rate_stats stats; } ;
struct minstrel_priv {int fixed_rate_idx; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;
 int VAR_1 ;
 int FUNC_1 (int*,size_t*,int) ;
 int FUNC_2 (struct minstrel_rate_stats*) ;
 int FUNC_3 (struct minstrel_rate*,scalar_t__) ;
 int FUNC_4 (struct minstrel_sta_info*,int,size_t*) ;
 int FUNC_5 (struct minstrel_priv*,struct minstrel_sta_info*) ;

__attribute__((used)) static void
FUNC_6(struct minstrel_priv *VAR_2, struct minstrel_sta_info *VAR_3)
{
 u8 VAR_4[VAR_0];
 u8 VAR_5 = 0;
 int VAR_6, VAR_7, VAR_8;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
     VAR_4[VAR_6] = 0;

 for (VAR_6 = 0; VAR_6 < VAR_3->n_rates; VAR_6++) {
  struct minstrel_rate *VAR_9 = &VAR_3->r[VAR_6];
  struct minstrel_rate_stats *VAR_10 = &VAR_3->r[VAR_6].stats;
  struct minstrel_rate_stats *VAR_11 = &VAR_3->r[VAR_5].stats;


  FUNC_2(VAR_10);



  if (VAR_10->prob_ewma > FUNC_0(95, 100) ||
      VAR_10->prob_ewma < FUNC_0(10, 100)) {
   VAR_9->adjusted_retry_count = VAR_10->retry_count >> 1;
   if (VAR_9->adjusted_retry_count > 2)
    VAR_9->adjusted_retry_count = 2;
   VAR_9->sample_limit = 4;
  } else {
   VAR_9->sample_limit = -1;
   VAR_9->adjusted_retry_count = VAR_10->retry_count;
  }
  if (!VAR_9->adjusted_retry_count)
   VAR_9->adjusted_retry_count = 2;

  FUNC_4(VAR_3, VAR_6, VAR_4);







  if (VAR_10->prob_ewma >= FUNC_0(95, 100)) {
   VAR_7 = FUNC_3(VAR_9, VAR_10->prob_ewma);
   VAR_8 = FUNC_3(&VAR_3->r[VAR_5],
         VAR_11->prob_ewma);
   if (VAR_7 >= VAR_8)
    VAR_5 = VAR_6;
  } else {
   if (VAR_10->prob_ewma >= VAR_11->prob_ewma)
    VAR_5 = VAR_6;
  }
 }


 FUNC_1(VAR_3->max_tp_rate, VAR_4, sizeof(VAR_3->max_tp_rate));
 VAR_3->max_prob_rate = VAR_5;
 VAR_3->last_stats_update = VAR_1;

 FUNC_5(VAR_2, VAR_3);
}
