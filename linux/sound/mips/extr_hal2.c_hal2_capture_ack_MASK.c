
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct hal2_codec {int pcm_indirect; } ;
struct snd_hal2 {struct hal2_codec adc; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_pcm_substream*,int *,int ) ;
 struct snd_hal2* FUNC_1 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_1)
{
 struct snd_hal2 *VAR_2 = FUNC_1(VAR_1);
 struct hal2_codec *VAR_3 = &VAR_2->adc;

 return FUNC_0(VAR_1,
       &VAR_3->pcm_indirect,
       VAR_0);
}
