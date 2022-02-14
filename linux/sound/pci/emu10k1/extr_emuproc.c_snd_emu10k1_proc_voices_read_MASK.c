
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_info_entry {struct snd_emu10k1* private_data; } ;
struct snd_info_buffer {int dummy; } ;
struct snd_emu10k1_voice {int midi; int synth; int efx; int pcm; int use; } ;
struct snd_emu10k1 {struct snd_emu10k1_voice* voices; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_info_buffer*,char*,...) ;

__attribute__((used)) static void FUNC_1(struct snd_info_entry *VAR_1,
      struct snd_info_buffer *VAR_2)
{
 struct snd_emu10k1 *VAR_3 = VAR_1->private_data;
 struct snd_emu10k1_voice *VAR_4;
 int VAR_5;

 FUNC_0(VAR_2, "ch\tuse\tpcm\tefx\tsynth\tmidi\n");
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  VAR_4 = &VAR_3->voices[VAR_5];
  FUNC_0(VAR_2, "%i\t%i\t%i\t%i\t%i\t%i\n",
   VAR_5,
   VAR_4->use,
   VAR_4->pcm,
   VAR_4->efx,
   VAR_4->synth,
   VAR_4->midi);
 }
}
