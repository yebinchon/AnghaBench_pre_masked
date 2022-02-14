
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_pcm_runtime {int dummy; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {scalar_t__ stream; struct snd_soc_pcm_runtime* private_data; } ;
struct mtk_btcvsd_snd {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct mtk_btcvsd_snd*) ;
 struct mtk_btcvsd_snd* FUNC_1 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_2 (struct snd_soc_pcm_runtime*,int ) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_2)
{
 struct snd_soc_pcm_runtime *VAR_3 = VAR_2->private_data;
 struct snd_soc_component *VAR_4 =
  FUNC_2(VAR_3, VAR_0);
 struct mtk_btcvsd_snd *VAR_5 = FUNC_1(VAR_4);

 if (VAR_2->stream == VAR_1)
  FUNC_0(VAR_5);

 return 0;
}
