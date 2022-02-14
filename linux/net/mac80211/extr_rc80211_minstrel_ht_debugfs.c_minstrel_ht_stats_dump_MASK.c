
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct minstrel_rate_stats {int prob_ewma; int retry_count; int last_success; int last_attempts; scalar_t__ att_hist; scalar_t__ succ_hist; } ;
struct minstrel_ht_sta {int* supported; int* max_tp_rate; int max_prob_rate; TYPE_1__* groups; } ;
struct mcs_group {int flags; int streams; unsigned int* duration; unsigned int shift; } ;
struct TYPE_2__ {struct minstrel_rate_stats* rates; } ;


 int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_2 (int,int) ;
 unsigned int FUNC_3 (int) ;
 unsigned int FUNC_4 (struct minstrel_ht_sta*,int,unsigned int,int) ;
 struct mcs_group* VAR_6 ;
 int FUNC_5 (char*,char*,...) ;

__attribute__((used)) static char *
FUNC_6(struct minstrel_ht_sta *VAR_7, int VAR_8, char *VAR_9)
{
 const struct mcs_group *VAR_10;
 unsigned int VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
 char VAR_16 = '2';
 char VAR_17 = 'L';
 u32 VAR_18;

 if (!VAR_7->supported[VAR_8])
  return VAR_9;

 VAR_10 = &VAR_6[VAR_8];
 VAR_18 = VAR_10->flags;

 if (VAR_18 & VAR_0)
  VAR_16 = '4';
 else if (VAR_18 & VAR_1)
  VAR_16 = '8';
 if (VAR_18 & VAR_3)
  VAR_17 = 'S';

 for (VAR_11 = 0; VAR_11 < VAR_5; VAR_11++) {
  struct minstrel_rate_stats *VAR_19 = &VAR_7->groups[VAR_8].rates[VAR_11];
  static const int VAR_20[4] = { 10, 20, 55, 110 };
  int VAR_21 = VAR_8 * VAR_5 + VAR_11;
  unsigned int VAR_22;

  if (!(VAR_7->supported[VAR_8] & FUNC_0(VAR_11)))
   continue;

  if (VAR_18 & VAR_2) {
   VAR_9 += FUNC_5(VAR_9, "HT%c0  ", VAR_16);
   VAR_9 += FUNC_5(VAR_9, "%cGI  ", VAR_17);
   VAR_9 += FUNC_5(VAR_9, "%d  ", VAR_10->streams);
  } else if (VAR_18 & VAR_4) {
   VAR_9 += FUNC_5(VAR_9, "VHT%c0 ", VAR_16);
   VAR_9 += FUNC_5(VAR_9, "%cGI ", VAR_17);
   VAR_9 += FUNC_5(VAR_9, "%d  ", VAR_10->streams);
  } else {
   VAR_9 += FUNC_5(VAR_9, "CCK    ");
   VAR_9 += FUNC_5(VAR_9, "%cP  ", VAR_11 < 4 ? 'L' : 'S');
   VAR_9 += FUNC_5(VAR_9, "1 ");
  }

  *(VAR_9++) = (VAR_21 == VAR_7->max_tp_rate[0]) ? 'A' : ' ';
  *(VAR_9++) = (VAR_21 == VAR_7->max_tp_rate[1]) ? 'B' : ' ';
  *(VAR_9++) = (VAR_21 == VAR_7->max_tp_rate[2]) ? 'C' : ' ';
  *(VAR_9++) = (VAR_21 == VAR_7->max_tp_rate[3]) ? 'D' : ' ';
  *(VAR_9++) = (VAR_21 == VAR_7->max_prob_rate) ? 'P' : ' ';

  if (VAR_18 & VAR_2) {
   VAR_9 += FUNC_5(VAR_9, "  MCS%-2u", (VAR_10->streams - 1) * 8 + VAR_11);
  } else if (VAR_18 & VAR_4) {
   VAR_9 += FUNC_5(VAR_9, "  MCS%-1u/%1u", VAR_11, VAR_10->streams);
  } else {
   int VAR_23 = VAR_20[VAR_11 % 4];

   VAR_9 += FUNC_5(VAR_9, "   %2u.%1uM", VAR_23 / 10, VAR_23 % 10);
  }

  VAR_9 += FUNC_5(VAR_9, "  %3u  ", VAR_21);


  VAR_22 = VAR_10->duration[VAR_11];
  VAR_22 <<= VAR_10->shift;
  VAR_15 = FUNC_1(VAR_22, 1000);
  VAR_9 += FUNC_5(VAR_9, "%6u  ", VAR_15);

  VAR_12 = FUNC_4(VAR_7, VAR_8, VAR_11, FUNC_2(100, 100));
  VAR_13 = FUNC_4(VAR_7, VAR_8, VAR_11, VAR_19->prob_ewma);
  VAR_14 = FUNC_3(VAR_19->prob_ewma * 1000);

  VAR_9 += FUNC_5(VAR_9, "%4u.%1u    %4u.%1u     %3u.%1u"
    "     %3u   %3u %-3u   "
    "%9llu   %-9llu\n",
    VAR_12 / 10, VAR_12 % 10,
    VAR_13 / 10, VAR_13 % 10,
    VAR_14 / 10, VAR_14 % 10,
    VAR_19->retry_count,
    VAR_19->last_success,
    VAR_19->last_attempts,
    (unsigned long long)VAR_19->succ_hist,
    (unsigned long long)VAR_19->att_hist);
 }

 return VAR_9;
}
