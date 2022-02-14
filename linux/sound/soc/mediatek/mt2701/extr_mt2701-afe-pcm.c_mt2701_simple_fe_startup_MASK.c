
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {int stream; } ;
struct mtk_base_afe_memif {scalar_t__ substream; } ;
struct mtk_base_afe {int dev; struct mtk_base_afe_memif* memif; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct snd_pcm_substream*,struct snd_soc_dai*) ;
 struct mtk_base_afe* FUNC_2 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_3,
        struct snd_soc_dai *VAR_4)
{
 struct mtk_base_afe *VAR_5 = FUNC_2(VAR_4);
 struct mtk_base_afe_memif *VAR_6;
 int VAR_7 = VAR_3->stream;


 if (VAR_7 == VAR_2) {
  VAR_6 = &VAR_5->memif[VAR_1];
  if (VAR_6->substream) {
   FUNC_0(VAR_5->dev, "memif is not available");
   return -VAR_0;
  }
 }

 return FUNC_1(VAR_3, VAR_4);
}
