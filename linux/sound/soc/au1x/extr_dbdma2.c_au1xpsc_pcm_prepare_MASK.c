
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {scalar_t__ stream; } ;
struct au1xpsc_audio_dmadata {int ddma_chan; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct au1xpsc_audio_dmadata*) ;
 int FUNC_1 (struct au1xpsc_audio_dmadata*) ;
 int FUNC_2 (int ) ;
 struct au1xpsc_audio_dmadata* FUNC_3 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_1)
{
 struct au1xpsc_audio_dmadata *VAR_2 = FUNC_3(VAR_1);

 FUNC_2(VAR_2->ddma_chan);

 if (VAR_1->stream == VAR_0) {
  FUNC_0(VAR_2);
  FUNC_0(VAR_2);
 } else {
  FUNC_1(VAR_2);
  FUNC_1(VAR_2);
 }

 return 0;
}
