
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_seq_timer {int timeri; scalar_t__ running; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct snd_seq_timer *VAR_1)
{
 if (! VAR_1->timeri)
  return -VAR_0;
 if (!VAR_1->running)
  return 0;
 VAR_1->running = 0;
 FUNC_0(VAR_1->timeri);
 return 0;
}
