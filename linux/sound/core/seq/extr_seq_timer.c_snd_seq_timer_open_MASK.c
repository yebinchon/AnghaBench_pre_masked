
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tid ;
struct snd_timer_instance {int flags; struct snd_seq_queue* callback_data; int callback; } ;
struct snd_timer_id {scalar_t__ dev_class; scalar_t__ device; int card; void* dev_sclass; } ;
struct snd_seq_timer {scalar_t__ type; int lock; struct snd_timer_instance* timeri; struct snd_timer_id alsa_id; } ;
struct snd_seq_queue {int queue; struct snd_seq_timer* timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int FUNC_0 (struct snd_timer_id*,int ,int) ;
 int FUNC_1 (char*,int) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_8 ;
 int FUNC_3 (struct snd_timer_instance**,char*,struct snd_timer_id*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,char*,int) ;

int FUNC_7(struct snd_seq_queue *VAR_9)
{
 struct snd_timer_instance *VAR_10;
 struct snd_seq_timer *VAR_11;
 char VAR_12[32];
 int VAR_13;

 VAR_11 = VAR_9->timer;
 if (FUNC_2(!VAR_11))
  return -VAR_1;
 if (VAR_11->timeri)
  return -VAR_0;
 FUNC_6(VAR_12, "sequencer queue %i", VAR_9->queue);
 if (VAR_11->type != VAR_2)
  return -VAR_1;
 if (VAR_11->alsa_id.dev_class != VAR_4)
  VAR_11->alsa_id.dev_sclass = VAR_7;
 VAR_13 = FUNC_3(&VAR_10, VAR_12, &VAR_11->alsa_id, VAR_9->queue);
 if (VAR_13 < 0 && VAR_11->alsa_id.dev_class != VAR_4) {
  if (VAR_11->alsa_id.dev_class != VAR_3 ||
      VAR_11->alsa_id.device != VAR_5) {
   struct snd_timer_id VAR_14;
   FUNC_0(&VAR_14, 0, sizeof(VAR_14));
   VAR_14.dev_class = VAR_3;
   VAR_14.dev_sclass = VAR_7;
   VAR_14.card = -1;
   VAR_14.device = VAR_5;
   VAR_13 = FUNC_3(&VAR_10, VAR_12, &VAR_14, VAR_9->queue);
  }
 }
 if (VAR_13 < 0) {
  FUNC_1("ALSA: seq fatal error: cannot create timer (%i)\n", VAR_13);
  return VAR_13;
 }
 VAR_10->callback = VAR_8;
 VAR_10->callback_data = VAR_9;
 VAR_10->flags |= VAR_6;
 FUNC_4(&VAR_11->lock);
 VAR_11->timeri = VAR_10;
 FUNC_5(&VAR_11->lock);
 return 0;
}
