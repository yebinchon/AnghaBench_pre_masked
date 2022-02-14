
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct minstrel_rate_stats {int prob_ewma; } ;
struct minstrel_mcs_group_data {size_t max_group_prob_rate; struct minstrel_rate_stats* rates; } ;
struct minstrel_ht_sta {size_t max_prob_rate; size_t* max_tp_rate; struct minstrel_mcs_group_data* groups; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct minstrel_ht_sta*,int,int,int) ;

__attribute__((used)) static void
FUNC_2(struct minstrel_ht_sta *VAR_2, u16 VAR_3)
{
 struct minstrel_mcs_group_data *VAR_4;
 struct minstrel_rate_stats *VAR_5;
 int VAR_6, VAR_7, VAR_8, VAR_9;
 int VAR_10, VAR_11, VAR_12, VAR_13;
 int VAR_14, VAR_15;
 int VAR_16, VAR_17;

 VAR_12 = VAR_3 / VAR_0;
 VAR_13 = VAR_3 % VAR_0;
 VAR_4 = &VAR_2->groups[VAR_3 / VAR_0];
 VAR_5 = &VAR_4->rates[VAR_3 % VAR_0];

 VAR_6 = VAR_2->max_prob_rate / VAR_0;
 VAR_7 = VAR_2->max_prob_rate % VAR_0;
 VAR_9 = VAR_2->groups[VAR_6].rates[VAR_7].prob_ewma;
 VAR_8 = FUNC_1(VAR_2, VAR_6, VAR_7, VAR_9);



 VAR_10 = VAR_2->max_tp_rate[0] / VAR_0;
 if((VAR_3 / VAR_0 == VAR_1) &&
     (VAR_10 != VAR_1))
  return;

 VAR_14 = VAR_4->max_group_prob_rate / VAR_0;
 VAR_15 = VAR_4->max_group_prob_rate % VAR_0;
 VAR_17 = VAR_2->groups[VAR_14].rates[VAR_15].prob_ewma;

 if (VAR_5->prob_ewma > FUNC_0(75, 100)) {
  VAR_11 = FUNC_1(VAR_2, VAR_12, VAR_13,
          VAR_5->prob_ewma);
  if (VAR_11 > VAR_8)
   VAR_2->max_prob_rate = VAR_3;

  VAR_16 = FUNC_1(VAR_2, VAR_14,
       VAR_15,
       VAR_17);
  if (VAR_11 > VAR_16)
   VAR_4->max_group_prob_rate = VAR_3;
 } else {
  if (VAR_5->prob_ewma > VAR_9)
   VAR_2->max_prob_rate = VAR_3;
  if (VAR_5->prob_ewma > VAR_17)
   VAR_4->max_group_prob_rate = VAR_3;
 }
}
