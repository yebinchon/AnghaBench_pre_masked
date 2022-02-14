
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra30_i2s {int dummy; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {int stream; } ;


 int VAR_0 ;
 int VAR_1 ;






 struct tegra30_i2s* FUNC_0 (struct snd_soc_dai*) ;
 int FUNC_1 (struct tegra30_i2s*) ;
 int FUNC_2 (struct tegra30_i2s*) ;
 int FUNC_3 (struct tegra30_i2s*) ;
 int FUNC_4 (struct tegra30_i2s*) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_2, int VAR_3,
    struct snd_soc_dai *VAR_4)
{
 struct tegra30_i2s *VAR_5 = FUNC_0(VAR_4);

 switch (VAR_3) {
 case 130:
 case 132:
 case 131:
  if (VAR_2->stream == VAR_1)
   FUNC_2(VAR_5);
  else
   FUNC_1(VAR_5);
  break;
 case 129:
 case 133:
 case 128:
  if (VAR_2->stream == VAR_1)
   FUNC_4(VAR_5);
  else
   FUNC_3(VAR_5);
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
