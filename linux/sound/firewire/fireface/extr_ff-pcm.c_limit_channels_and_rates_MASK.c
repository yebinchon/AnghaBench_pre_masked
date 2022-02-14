
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_hardware {void* rate_max; void* rate_min; int rates; void* channels_max; void* channels_min; } ;
typedef enum snd_ff_stream_mode { ____Placeholder_snd_ff_stream_mode } snd_ff_stream_mode ;


 int FUNC_0 (unsigned int*) ;
 void* VAR_0 ;
 unsigned int* VAR_1 ;
 void* FUNC_1 (void*,unsigned int) ;
 void* FUNC_2 (void*,unsigned int) ;
 int FUNC_3 (int,int*) ;
 int FUNC_4 (unsigned int) ;

__attribute__((used)) static void FUNC_5(struct snd_pcm_hardware *VAR_2,
         const unsigned int *VAR_3)
{
 unsigned int VAR_4, VAR_5;
 int VAR_6;

 VAR_2->channels_min = VAR_0;
 VAR_2->channels_max = 0;
 VAR_2->rate_min = VAR_0;
 VAR_2->rate_max = 0;

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_1); VAR_6++) {
  enum snd_ff_stream_mode VAR_7;
  int VAR_8;

  VAR_8 = FUNC_3(VAR_6, &VAR_7);
  if (VAR_8 < 0)
   continue;

  VAR_5 = VAR_3[VAR_7];
  if (VAR_3[VAR_7] == 0)
   continue;
  VAR_2->channels_min = FUNC_2(VAR_2->channels_min, VAR_5);
  VAR_2->channels_max = FUNC_1(VAR_2->channels_max, VAR_5);

  VAR_4 = VAR_1[VAR_6];
  VAR_2->rates |= FUNC_4(VAR_4);
  VAR_2->rate_min = FUNC_2(VAR_2->rate_min, VAR_4);
  VAR_2->rate_max = FUNC_1(VAR_2->rate_max, VAR_4);
 }
}
