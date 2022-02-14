
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_pcm_runtime {struct snd_soc_dai* codec_dai; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_soc_dai*,int ,int,int ) ;

__attribute__((used)) static int FUNC_1(struct snd_pcm_substream *VAR_2)
{
 struct snd_soc_pcm_runtime *VAR_3 = VAR_2->private_data;
 struct snd_soc_dai *VAR_4 = VAR_3->codec_dai;


 FUNC_0(VAR_4, VAR_1,
    12000000, VAR_0);

 return 0;
}
