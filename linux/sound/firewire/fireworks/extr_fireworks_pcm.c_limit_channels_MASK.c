
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_hardware {int channels_max; int channels_min; } ;


 unsigned int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_1 (unsigned int) ;
 int FUNC_2 (int ,unsigned int) ;
 int FUNC_3 (int ,unsigned int) ;

__attribute__((used)) static void
FUNC_4(struct snd_pcm_hardware *VAR_2, unsigned int *VAR_3)
{
 unsigned int VAR_4, VAR_5;

 VAR_2->channels_min = VAR_0;
 VAR_2->channels_max = 0;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_1); VAR_4++) {
  VAR_5 = FUNC_1(VAR_4);
  if (VAR_3[VAR_5] == 0)
   continue;

  VAR_2->channels_min = FUNC_3(VAR_2->channels_min, VAR_3[VAR_5]);
  VAR_2->channels_max = FUNC_2(VAR_2->channels_max, VAR_3[VAR_5]);
 }
}
