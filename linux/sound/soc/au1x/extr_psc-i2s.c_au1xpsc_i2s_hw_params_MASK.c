
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {scalar_t__ msbits; } ;
struct au1xpsc_audio_data {scalar_t__ rate; int cfg; } ;


 int VAR_0 ;
 int FUNC_0 (struct au1xpsc_audio_data*) ;
 int FUNC_1 (struct au1xpsc_audio_data*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (scalar_t__) ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 void* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct snd_pcm_hw_params*) ;
 struct au1xpsc_audio_data* FUNC_6 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_7(struct snd_pcm_substream *VAR_3,
     struct snd_pcm_hw_params *VAR_4,
     struct snd_soc_dai *VAR_5)
{
 struct au1xpsc_audio_data *VAR_6 = FUNC_6(VAR_5);

 int VAR_7;
 unsigned long VAR_8;


 VAR_8 = FUNC_4(FUNC_1(VAR_6));
 if (VAR_8 & (VAR_2 | VAR_1)) {

  VAR_7 = FUNC_4(FUNC_0(VAR_6));
  if ((FUNC_2(VAR_7) != VAR_4->msbits) ||
      (FUNC_5(VAR_4) != VAR_6->rate))
   return -VAR_0;
 } else {

  VAR_6->cfg &= ~(0x1f << 4);
  VAR_6->cfg |= FUNC_3(VAR_4->msbits);

  VAR_6->rate = FUNC_5(VAR_4);
 }
 return 0;
}
