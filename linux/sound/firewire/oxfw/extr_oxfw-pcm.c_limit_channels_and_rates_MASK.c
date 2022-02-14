
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct snd_pcm_hardware {int rates; void* rate_max; void* rate_min; void* channels_max; void* channels_min; } ;
struct snd_oxfw_stream_formation {int rate; int pcm; } ;


 int VAR_0 ;
 void* VAR_1 ;
 void* FUNC_0 (void*,int ) ;
 void* FUNC_1 (void*,int ) ;
 int FUNC_2 (int *,struct snd_oxfw_stream_formation*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct snd_pcm_hardware *VAR_2, u8 **VAR_3)
{
 struct snd_oxfw_stream_formation VAR_4;
 int VAR_5, VAR_6;

 VAR_2->channels_min = VAR_1;
 VAR_2->channels_max = 0;

 VAR_2->rate_min = VAR_1;
 VAR_2->rate_max = 0;
 VAR_2->rates = 0;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  if (VAR_3[VAR_5] == ((void*)0))
   break;

  VAR_6 = FUNC_2(VAR_3[VAR_5], &VAR_4);
  if (VAR_6 < 0)
   continue;

  VAR_2->channels_min = FUNC_1(VAR_2->channels_min, VAR_4.pcm);
  VAR_2->channels_max = FUNC_0(VAR_2->channels_max, VAR_4.pcm);

  VAR_2->rate_min = FUNC_1(VAR_2->rate_min, VAR_4.rate);
  VAR_2->rate_max = FUNC_0(VAR_2->rate_max, VAR_4.rate);
  VAR_2->rates |= FUNC_3(VAR_4.rate);
 }
}
