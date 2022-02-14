
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_pcm_runtime {struct snd_soc_dai* codec_dai; } ;
struct snd_soc_dai {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_soc_dai*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_pcm_runtime *VAR_1)
{
 struct snd_soc_dai *VAR_2 = VAR_1->codec_dai;
 int VAR_3;

 VAR_3 = FUNC_0(VAR_2, 0, VAR_0, 0);
 if (VAR_3 < 0)
  return VAR_3;

 return 0;
}
