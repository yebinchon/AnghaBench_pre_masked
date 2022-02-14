
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {struct snd_soc_component* disc_data; } ;
struct snd_soc_component {TYPE_1__* card; } ;
struct cx20442_priv {int * tty; } ;
struct TYPE_2__ {scalar_t__ pop_time; } ;


 struct cx20442_priv* FUNC_0 (struct snd_soc_component*) ;

__attribute__((used)) static void FUNC_1(struct tty_struct *VAR_0)
{
 struct snd_soc_component *VAR_1 = VAR_0->disc_data;
 struct cx20442_priv *VAR_2;

 VAR_0->disc_data = ((void*)0);

 if (!VAR_1)
  return;

 VAR_2 = FUNC_0(VAR_1);


 VAR_2->tty = ((void*)0);
 VAR_1->card->pop_time = 0;
}
