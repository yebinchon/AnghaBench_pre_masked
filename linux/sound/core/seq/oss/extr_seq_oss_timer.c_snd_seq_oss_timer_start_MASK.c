
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmprec ;
struct snd_seq_queue_tempo {int tempo; int ppq; int queue; } ;
struct seq_oss_timer {int running; scalar_t__ cur_tick; int tempo; int ppq; struct seq_oss_devinfo* dp; } ;
struct seq_oss_devinfo {int cseq; int queue; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_seq_queue_tempo*,int ,int) ;
 int FUNC_1 (struct seq_oss_devinfo*,int ,int ) ;
 int FUNC_2 (struct seq_oss_timer*) ;
 int FUNC_3 (int ,struct snd_seq_queue_tempo*) ;

int
FUNC_4(struct seq_oss_timer *VAR_1)
{
 struct seq_oss_devinfo *VAR_2 = VAR_1->dp;
 struct snd_seq_queue_tempo VAR_3;

 if (VAR_1->running)
  FUNC_2(VAR_1);

 FUNC_0(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.queue = VAR_2->queue;
 VAR_3.ppq = VAR_1->ppq;
 VAR_3.tempo = VAR_1->tempo;
 FUNC_3(VAR_2->cseq, &VAR_3);

 FUNC_1(VAR_2, VAR_0, 0);
 VAR_1->running = 1;
 VAR_1->cur_tick = 0;
 return 0;
}
