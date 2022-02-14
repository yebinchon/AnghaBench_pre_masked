
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct minstrel_rate_stats {scalar_t__ prob_ewma; } ;
struct minstrel_priv {TYPE_1__* hw; } ;
struct minstrel_ht_sta {int* max_tp_rate; int* supported; int sample_rate; int sample_mode; } ;
struct TYPE_2__ {int max_rates; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 struct minstrel_rate_stats* FUNC_1 (struct minstrel_ht_sta*,int) ;
 int FUNC_2 (struct minstrel_ht_sta*,int*,int*,int) ;
 int FUNC_3 () ;

__attribute__((used)) static void
FUNC_4(struct minstrel_priv *VAR_3,
          struct minstrel_ht_sta *VAR_4)
{
 struct minstrel_rate_stats *VAR_5;
 u16 VAR_6[VAR_1];
 int VAR_7 = 0;
 int VAR_8 = 0;
 bool VAR_9;
 int VAR_10;
 u8 VAR_11;





 if (VAR_3->hw->max_rates > 1)
  return;






 VAR_5 = FUNC_1(VAR_4, VAR_4->max_tp_rate[0]);
 VAR_9 = VAR_5->prob_ewma > FUNC_0(75, 100);
 FUNC_2(VAR_4, VAR_6, &VAR_7, VAR_9);
 if (!VAR_7 && VAR_9)
  FUNC_2(VAR_4, VAR_6, &VAR_7, 0);


 if (!VAR_7) {
  int VAR_12 = VAR_4->max_tp_rate[0] / VAR_0;
  u16 VAR_13 = VAR_4->supported[VAR_12];

  VAR_13 >>= VAR_4->max_tp_rate[0] % VAR_0;
  for (VAR_10 = 0; VAR_13; VAR_13 >>= 1, VAR_10++) {
   if (!(VAR_13 & 1))
    continue;

   VAR_8 = VAR_4->max_tp_rate[0] + VAR_10;
   goto out;
  }

  return;
 }

 VAR_10 = 0;
 if (VAR_7 > 1) {
  VAR_11 = FUNC_3();
  VAR_10 = VAR_11 % VAR_7;
 }
 VAR_8 = VAR_6[VAR_10];

out:
 VAR_4->sample_rate = VAR_8;
 VAR_4->sample_mode = VAR_2;
}
