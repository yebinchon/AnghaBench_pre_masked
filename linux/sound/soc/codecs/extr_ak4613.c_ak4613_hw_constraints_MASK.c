
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_runtime {int dummy; } ;
struct snd_pcm_hw_constraint_list {unsigned int const* list; int count; scalar_t__ mask; } ;
struct ak4613_priv {unsigned int const sysclk; struct snd_pcm_hw_constraint_list constraint; } ;


 int FUNC_0 (unsigned int const*) ;
 int VAR_0 ;
 int FUNC_1 (struct snd_pcm_runtime*,int ,int ,struct snd_pcm_hw_constraint_list*) ;

__attribute__((used)) static void FUNC_2(struct ak4613_priv *VAR_1,
      struct snd_pcm_runtime *VAR_2)
{
 static const unsigned int VAR_3[] = {
   32000,
   44100,
   48000,
   64000,
   88200,
   96000,
  176400,
  192000,
 };
 struct snd_pcm_hw_constraint_list *VAR_4 = &VAR_1->constraint;
 unsigned int VAR_5;
 int VAR_6;

 VAR_4->list = VAR_3;
 VAR_4->mask = 0;
 VAR_4->count = 0;
 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_3); VAR_6++) {

  VAR_5 = (VAR_3[VAR_6] <= 96000) ? 256 : 128;

  if (VAR_1->sysclk >= VAR_3[VAR_6] * VAR_5)
   VAR_4->count = VAR_6 + 1;
 }

 FUNC_1(VAR_2, 0,
    VAR_0, VAR_4);
}
