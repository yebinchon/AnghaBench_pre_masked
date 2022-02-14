
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct cmipci {int dig_pcm_status; int * channel; scalar_t__ can_ac3_hw; } ;
struct TYPE_2__ {int rate; scalar_t__ format; int channels; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct cmipci*,struct snd_pcm_substream*,int,int) ;
 int FUNC_1 (struct cmipci*,int *,struct snd_pcm_substream*) ;
 struct cmipci* FUNC_2 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_3)
{
 struct cmipci *VAR_4 = FUNC_2(VAR_3);
 int VAR_5 = VAR_3->runtime->rate;
 int VAR_6, VAR_7, VAR_8 = 0;

 VAR_7 = (VAR_5 >= 44100 && VAR_5 <= 96000 &&
      VAR_3->runtime->format == VAR_2 &&
      VAR_3->runtime->channels == 2);
 if (VAR_7 && VAR_4->can_ac3_hw)
  VAR_8 = VAR_4->dig_pcm_status & VAR_1;
 if ((VAR_6 = FUNC_0(VAR_4, VAR_3, VAR_7, VAR_8)) < 0)
  return VAR_6;
 return FUNC_1(VAR_4, &VAR_4->channel[VAR_0], VAR_3);
}
