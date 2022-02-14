
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_seq_timer {scalar_t__ type; int preferred_resolution; int alsa_id; } ;
struct TYPE_3__ {int resolution; int id; } ;
struct TYPE_4__ {TYPE_1__ alsa; } ;
struct snd_seq_queue_timer {scalar_t__ type; int queue; TYPE_2__ u; } ;
struct snd_seq_queue {int timer_mutex; struct snd_seq_timer* timer; } ;
struct snd_seq_client {int number; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct snd_seq_queue*) ;
 struct snd_seq_queue* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct snd_seq_client *VAR_4,
      void *VAR_5)
{
 struct snd_seq_queue_timer *VAR_6 = VAR_5;
 int VAR_7 = 0;

 if (VAR_6->type != VAR_3)
  return -VAR_0;

 if (FUNC_4(VAR_6->queue, VAR_4->number)) {
  struct snd_seq_queue *VAR_8;
  struct snd_seq_timer *VAR_9;

  VAR_8 = FUNC_3(VAR_6->queue);
  if (VAR_8 == ((void*)0))
   return -VAR_1;
  FUNC_0(&VAR_8->timer_mutex);
  VAR_9 = VAR_8->timer;
  FUNC_5(VAR_6->queue);
  VAR_9->type = VAR_6->type;
  if (VAR_9->type == VAR_3) {
   VAR_9->alsa_id = VAR_6->u.alsa.id;
   VAR_9->preferred_resolution = VAR_6->u.alsa.resolution;
  }
  VAR_7 = FUNC_6(VAR_6->queue);
  FUNC_1(&VAR_8->timer_mutex);
  FUNC_2(VAR_8);
 } else {
  return -VAR_2;
 }

 return VAR_7;
}
