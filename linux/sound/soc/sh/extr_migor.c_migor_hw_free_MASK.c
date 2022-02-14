
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_pcm_runtime {struct snd_soc_dai* codec_dai; } ;
struct snd_soc_dai {int dev; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct snd_soc_dai*,int ,int ,int ) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_3)
{
 struct snd_soc_pcm_runtime *VAR_4 = VAR_3->private_data;
 struct snd_soc_dai *VAR_5 = VAR_4->codec_dai;

 if (VAR_2) {
  VAR_2--;

  if (!VAR_2)
   FUNC_1(VAR_5, VAR_1, 0,
            VAR_0);
 } else {
  FUNC_0(VAR_5->dev, "Unbalanced hw_free!\n");
 }

 return 0;
}
