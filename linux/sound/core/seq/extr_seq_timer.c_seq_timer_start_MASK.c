
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_seq_timer {int running; int last_update; int ticks; int timeri; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct snd_seq_timer*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct snd_seq_timer*) ;
 int FUNC_3 (struct snd_seq_timer*) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct snd_seq_timer *VAR_1)
{
 if (! VAR_1->timeri)
  return -VAR_0;
 if (VAR_1->running)
  FUNC_3(VAR_1);
 FUNC_2(VAR_1);
 if (FUNC_0(VAR_1) < 0)
  return -VAR_0;
 FUNC_4(VAR_1->timeri, VAR_1->ticks);
 VAR_1->running = 1;
 FUNC_1(&VAR_1->last_update);
 return 0;
}
