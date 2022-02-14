
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct cmipci {int dig_pcm_status; int * channel; scalar_t__ can_ac3_hw; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cmipci*,struct snd_pcm_substream*,int,int) ;
 int FUNC_1 (struct cmipci*,int *,struct snd_pcm_substream*) ;
 struct cmipci* FUNC_2 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_2)
{
 struct cmipci *VAR_3 = FUNC_2(VAR_2);
 int VAR_4, VAR_5;

 if (VAR_3->can_ac3_hw)
  VAR_5 = VAR_3->dig_pcm_status & VAR_1;
 else
  VAR_5 = 1;
 if ((VAR_4 = FUNC_0(VAR_3, VAR_2, 1, VAR_5)) < 0)
  return VAR_4;
 return FUNC_1(VAR_3, &VAR_3->channel[VAR_0], VAR_2);
}
