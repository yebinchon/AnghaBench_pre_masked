
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct minstrel_sta_info {unsigned int n_rates; unsigned int* max_tp_rate; unsigned int max_prob_rate; scalar_t__ sample_packets; scalar_t__ total_packets; struct minstrel_rate* r; } ;
struct minstrel_rate_stats {int prob_ewma; int retry_count; int last_success; int last_attempts; scalar_t__ att_hist; scalar_t__ succ_hist; } ;
struct minstrel_rate {int bitrate; int perfect_tx_time; struct minstrel_rate_stats stats; } ;
struct minstrel_debugfs_info {char* buf; int len; } ;
struct inode {struct minstrel_sta_info* i_private; } ;
struct file {struct minstrel_debugfs_info* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 unsigned int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 struct minstrel_debugfs_info* FUNC_3 (int,int ) ;
 unsigned int FUNC_4 (struct minstrel_rate*,int) ;
 int FUNC_5 (char*,char*,...) ;

int
FUNC_6(struct inode *VAR_2, struct file *VAR_3)
{
 struct minstrel_sta_info *VAR_4 = VAR_2->i_private;
 struct minstrel_debugfs_info *VAR_5;
 unsigned int VAR_6, VAR_7, VAR_8, VAR_9;
 char *VAR_10;

 VAR_5 = FUNC_3(2048, VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_3->private_data = VAR_5;
 VAR_10 = VAR_5->buf;

 for (VAR_6 = 0; VAR_6 < VAR_4->n_rates; VAR_6++) {
  struct minstrel_rate *VAR_11 = &VAR_4->r[VAR_6];
  struct minstrel_rate_stats *VAR_12 = &VAR_4->r[VAR_6].stats;

  VAR_10 += FUNC_5(VAR_10, "%s" ,((VAR_6 == VAR_4->max_tp_rate[0]) ? "A" : ""));
  VAR_10 += FUNC_5(VAR_10, "%s" ,((VAR_6 == VAR_4->max_tp_rate[1]) ? "B" : ""));
  VAR_10 += FUNC_5(VAR_10, "%s" ,((VAR_6 == VAR_4->max_tp_rate[2]) ? "C" : ""));
  VAR_10 += FUNC_5(VAR_10, "%s" ,((VAR_6 == VAR_4->max_tp_rate[3]) ? "D" : ""));
  VAR_10 += FUNC_5(VAR_10, "%s" ,((VAR_6 == VAR_4->max_prob_rate) ? "P" : ""));

  VAR_10 += FUNC_5(VAR_10, ",%u%s", VAR_11->bitrate / 2,
    (VAR_11->bitrate & 1 ? ".5," : ","));
  VAR_10 += FUNC_5(VAR_10, "%u,", VAR_6);
  VAR_10 += FUNC_5(VAR_10, "%u,",VAR_11->perfect_tx_time);

  VAR_7 = FUNC_4(VAR_11, FUNC_0(100,100));
  VAR_8 = FUNC_4(VAR_11, VAR_12->prob_ewma);
  VAR_9 = FUNC_1(VAR_12->prob_ewma * 1000);

  VAR_10 += FUNC_5(VAR_10, "%u.%u,%u.%u,%u.%u,%u,%u,%u,"
    "%llu,%llu,%d,%d\n",
    VAR_7 / 10, VAR_7 % 10,
    VAR_8 / 10, VAR_8 % 10,
    VAR_9 / 10, VAR_9 % 10,
    VAR_12->retry_count,
    VAR_12->last_success,
    VAR_12->last_attempts,
    (unsigned long long)VAR_12->succ_hist,
    (unsigned long long)VAR_12->att_hist,
    VAR_4->total_packets - VAR_4->sample_packets,
    VAR_4->sample_packets);

 }
 VAR_5->len = VAR_10 - VAR_5->buf;

 FUNC_2(VAR_5->len + sizeof(*VAR_5) > 2048);

 return 0;
}
