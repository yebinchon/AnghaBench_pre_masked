
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xtfpga_i2s {int dummy; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;


 struct xtfpga_i2s* FUNC_0 (struct snd_soc_dai*) ;
 int FUNC_1 (struct snd_soc_dai*,struct snd_pcm_substream*,struct xtfpga_i2s*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_0,
         struct snd_soc_dai *VAR_1)
{
 struct xtfpga_i2s *VAR_2 = FUNC_0(VAR_1);

 FUNC_1(VAR_1, VAR_0, VAR_2);
 return 0;
}
