
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_emux {int * oss_synth; int card; } ;


 int FUNC_0 (int ,int *) ;

void
FUNC_1(struct snd_emux *VAR_0)
{
 if (VAR_0->oss_synth) {
  FUNC_0(VAR_0->card, VAR_0->oss_synth);
  VAR_0->oss_synth = ((void*)0);
 }
}
