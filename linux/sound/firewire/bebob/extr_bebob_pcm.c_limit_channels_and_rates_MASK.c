
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_hardware {int rates; void* rate_max; void* rate_min; void* channels_max; void* channels_min; } ;
struct snd_bebob_stream_formation {scalar_t__ pcm; } ;


 unsigned int VAR_0 ;
 void* VAR_1 ;
 void* FUNC_0 (void*,scalar_t__) ;
 void* FUNC_1 (void*,scalar_t__) ;
 scalar_t__* VAR_2 ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void
FUNC_3(struct snd_pcm_hardware *VAR_3,
    struct snd_bebob_stream_formation *VAR_4)
{
 unsigned int VAR_5;

 VAR_3->channels_min = VAR_1;
 VAR_3->channels_max = 0;

 VAR_3->rate_min = VAR_1;
 VAR_3->rate_max = 0;
 VAR_3->rates = 0;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {

  if (VAR_4[VAR_5].pcm == 0)
   continue;

  VAR_3->channels_min = FUNC_1(VAR_3->channels_min, VAR_4[VAR_5].pcm);
  VAR_3->channels_max = FUNC_0(VAR_3->channels_max, VAR_4[VAR_5].pcm);

  VAR_3->rate_min = FUNC_1(VAR_3->rate_min, VAR_2[VAR_5]);
  VAR_3->rate_max = FUNC_0(VAR_3->rate_max, VAR_2[VAR_5]);
  VAR_3->rates |= FUNC_2(VAR_2[VAR_5]);
 }
}
