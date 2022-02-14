
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct timespec64 {scalar_t__ tv_sec; scalar_t__ tv_nsec; } ;
struct TYPE_4__ {int tv_sec; int tv_nsec; } ;
struct snd_seq_timer {int lock; int last_update; scalar_t__ running; TYPE_1__ cur_time; } ;
typedef TYPE_1__ snd_seq_real_time_t ;


 int FUNC_0 (struct timespec64*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 struct timespec64 FUNC_4 (struct timespec64,int ) ;

snd_seq_real_time_t FUNC_5(struct snd_seq_timer *VAR_0)
{
 snd_seq_real_time_t VAR_1;
 unsigned long VAR_2;

 FUNC_2(&VAR_0->lock, VAR_2);
 VAR_1 = VAR_0->cur_time;
 if (VAR_0->running) {
  struct timespec64 VAR_3;

  FUNC_0(&VAR_3);
  VAR_3 = FUNC_4(VAR_3, VAR_0->last_update);
  VAR_1.tv_nsec += VAR_3.tv_nsec;
  VAR_1.tv_sec += VAR_3.tv_sec;
  FUNC_1(&VAR_1);
 }
 FUNC_3(&VAR_0->lock, VAR_2);
 return VAR_1;
}
