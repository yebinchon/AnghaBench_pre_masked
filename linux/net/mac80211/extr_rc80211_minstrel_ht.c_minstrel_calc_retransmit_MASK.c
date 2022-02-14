
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct minstrel_rate_stats {scalar_t__ prob_ewma; int retry_count; int retry_count_rtscts; int retry_updated; } ;
struct minstrel_priv {unsigned int cw_min; unsigned int segment_size; int max_retry; int cw_max; } ;
struct minstrel_ht_sta {unsigned int overhead; unsigned int overhead_rtscts; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int) ;
 unsigned int FUNC_1 (unsigned int,int ) ;
 unsigned int FUNC_2 (int) ;
 struct minstrel_rate_stats* FUNC_3 (struct minstrel_ht_sta*,int) ;
 unsigned int FUNC_4 (struct minstrel_ht_sta*) ;

__attribute__((used)) static void
FUNC_5(struct minstrel_priv *VAR_2, struct minstrel_ht_sta *VAR_3,
                         int VAR_4)
{
 struct minstrel_rate_stats *VAR_5;
 unsigned int VAR_6, VAR_7, VAR_8;
 unsigned int VAR_9 = VAR_2->cw_min;
 unsigned int VAR_10 = 0;
 unsigned int VAR_11 = 9;
 unsigned int VAR_12 = FUNC_4(VAR_3);
 unsigned int VAR_13 = 0, VAR_14 = 0;

 VAR_5 = FUNC_3(VAR_3, VAR_4);
 if (VAR_5->prob_ewma < FUNC_0(1, 10)) {
  VAR_5->retry_count = 1;
  VAR_5->retry_count_rtscts = 1;
  return;
 }

 VAR_5->retry_count = 2;
 VAR_5->retry_count_rtscts = 2;
 VAR_5->retry_updated = 1;

 VAR_8 = FUNC_2(VAR_4) * VAR_12 / 1000;


 VAR_10 = (VAR_11 * VAR_9) >> 1;
 VAR_9 = FUNC_1((VAR_9 << 1) | 1, VAR_2->cw_max);
 VAR_10 += (VAR_11 * VAR_9) >> 1;
 VAR_9 = FUNC_1((VAR_9 << 1) | 1, VAR_2->cw_max);

 if (VAR_4 / VAR_0 != VAR_1) {
  VAR_13 = VAR_3->overhead;
  VAR_14 = VAR_3->overhead_rtscts;
 }


 VAR_6 = VAR_10 + 2 * (VAR_13 + VAR_8);
 VAR_7 = VAR_10 + 2 * (VAR_14 + VAR_8);


 do {

  VAR_10 = (VAR_11 * VAR_9) >> 1;
  VAR_9 = FUNC_1((VAR_9 << 1) | 1, VAR_2->cw_max);


  VAR_6 += VAR_10 + VAR_13 + VAR_8;
  VAR_7 += VAR_10 + VAR_14 + VAR_8;

  if (VAR_7 < VAR_2->segment_size)
   VAR_5->retry_count_rtscts++;
 } while ((VAR_6 < VAR_2->segment_size) &&
          (++VAR_5->retry_count < VAR_2->max_retry));
}
