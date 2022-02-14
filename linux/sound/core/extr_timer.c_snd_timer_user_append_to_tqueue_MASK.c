
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_timer_user {int qused; int queue_size; int qtail; int * tqueue; int overrun; } ;
struct snd_timer_tread {int dummy; } ;


 int FUNC_0 (int *,struct snd_timer_tread*,int) ;

__attribute__((used)) static void FUNC_1(struct snd_timer_user *VAR_0,
         struct snd_timer_tread *VAR_1)
{
 if (VAR_0->qused >= VAR_0->queue_size) {
  VAR_0->overrun++;
 } else {
  FUNC_0(&VAR_0->tqueue[VAR_0->qtail++], VAR_1, sizeof(*VAR_1));
  VAR_0->qtail %= VAR_0->queue_size;
  VAR_0->qused++;
 }
}
