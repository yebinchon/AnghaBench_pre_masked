
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_seq_timer {scalar_t__ type; int preferred_resolution; int alsa_id; } ;
struct TYPE_3__ {int resolution; int id; } ;
struct TYPE_4__ {TYPE_1__ alsa; } ;
struct snd_seq_queue_timer {scalar_t__ type; TYPE_2__ u; int queue; } ;
struct snd_seq_queue {int timer_mutex; int queue; struct snd_seq_timer* timer; } ;
struct snd_seq_client {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct snd_seq_queue_timer*,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct snd_seq_queue*) ;
 struct snd_seq_queue* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct snd_seq_client *VAR_2,
      void *VAR_3)
{
 struct snd_seq_queue_timer *VAR_4 = VAR_3;
 struct snd_seq_queue *VAR_5;
 struct snd_seq_timer *VAR_6;

 VAR_5 = FUNC_4(VAR_4->queue);
 if (VAR_5 == ((void*)0))
  return -VAR_0;

 FUNC_1(&VAR_5->timer_mutex);
 VAR_6 = VAR_5->timer;
 FUNC_0(VAR_4, 0, sizeof(*VAR_4));
 VAR_4->queue = VAR_5->queue;

 VAR_4->type = VAR_6->type;
 if (VAR_6->type == VAR_1) {
  VAR_4->u.alsa.id = VAR_6->alsa_id;
  VAR_4->u.alsa.resolution = VAR_6->preferred_resolution;
 }
 FUNC_2(&VAR_5->timer_mutex);
 FUNC_3(VAR_5);

 return 0;
}
