
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {struct snd_soc_component* disc_data; } ;
struct snd_soc_component {TYPE_1__* card; } ;
struct cx20442_priv {struct tty_struct* tty; } ;
struct TYPE_2__ {int pop_time; } ;


 struct cx20442_priv* FUNC_0 (struct snd_soc_component*) ;

__attribute__((used)) static void FUNC_1(struct tty_struct *VAR_0,
    const unsigned char *VAR_1, char *VAR_2, int VAR_3)
{
 struct snd_soc_component *VAR_4 = VAR_0->disc_data;
 struct cx20442_priv *VAR_5;

 if (!VAR_4)
  return;

 VAR_5 = FUNC_0(VAR_4);

 if (!VAR_5->tty) {



  VAR_5->tty = VAR_0;
  VAR_4->card->pop_time = 1;
 }
}
