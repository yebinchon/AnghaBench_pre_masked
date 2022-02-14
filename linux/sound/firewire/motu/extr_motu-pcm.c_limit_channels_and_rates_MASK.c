
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_hardware {scalar_t__ channels_max; int channels_min; int rates; } ;
struct snd_pcm_runtime {struct snd_pcm_hardware hw; } ;
struct snd_motu_packet_format {unsigned int* fixed_part_pcm_chunks; unsigned int* differed_part_pcm_chunks; } ;
struct snd_motu {int dummy; } ;


 unsigned int FUNC_0 (unsigned int*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__,unsigned int) ;
 int FUNC_2 (int ,unsigned int) ;
 unsigned int* VAR_1 ;
 int FUNC_3 (struct snd_pcm_runtime*) ;
 int FUNC_4 (unsigned int) ;

__attribute__((used)) static void FUNC_5(struct snd_motu *VAR_2,
         struct snd_pcm_runtime *VAR_3,
         struct snd_motu_packet_format *VAR_4)
{
 struct snd_pcm_hardware *VAR_5 = &VAR_3->hw;
 unsigned int VAR_6, VAR_7, VAR_8, VAR_9;

 VAR_5->channels_min = VAR_0;
 VAR_5->channels_max = 0;

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_1); ++VAR_6) {
  VAR_8 = VAR_1[VAR_6];
  VAR_9 = VAR_6 / 2;

  VAR_7 = VAR_4->fixed_part_pcm_chunks[VAR_9] +
          VAR_4->differed_part_pcm_chunks[VAR_9];
  if (VAR_7 == 0)
   continue;

  VAR_5->rates |= FUNC_4(VAR_8);
  VAR_5->channels_min = FUNC_2(VAR_5->channels_min, VAR_7);
  VAR_5->channels_max = FUNC_1(VAR_5->channels_max, VAR_7);
 }

 FUNC_3(VAR_3);
}
