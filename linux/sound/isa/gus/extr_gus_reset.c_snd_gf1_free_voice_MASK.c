
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_gus_voice {int number; void (* private_free ) (struct snd_gus_voice*) ;int * sample_ops; scalar_t__ pcm; scalar_t__ use; int * private_data; } ;
struct TYPE_2__ {int pcm_alloc_voices; } ;
struct snd_gus_card {int voice_alloc; TYPE_1__ gf1; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_gus_card*,int,int) ;
 int FUNC_1 (struct snd_gus_card*,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void FUNC_4(struct snd_gus_card * VAR_1, struct snd_gus_voice *VAR_2)
{
 unsigned long VAR_3;
 void (*VAR_4)(struct snd_gus_voice *VAR_5);

 if (VAR_2 == ((void*)0) || !VAR_2->use)
  return;
 FUNC_1(VAR_1, VAR_0 | VAR_2->number);
 FUNC_0(VAR_1, VAR_2->number, VAR_2->number);
 FUNC_2(&VAR_1->voice_alloc, VAR_3);
 VAR_4 = VAR_2->private_free;
 VAR_2->private_free = ((void*)0);
 VAR_2->private_data = ((void*)0);
 if (VAR_2->pcm)
  VAR_1->gf1.pcm_alloc_voices--;
 VAR_2->use = VAR_2->pcm = 0;
 VAR_2->sample_ops = ((void*)0);
 FUNC_3(&VAR_1->voice_alloc, VAR_3);
 if (VAR_4)
  VAR_4(VAR_2);
}
