
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra20_spdif {int dummy; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;


 int VAR_0 ;






 struct tegra20_spdif* FUNC_0 (struct snd_soc_dai*) ;
 int FUNC_1 (struct tegra20_spdif*) ;
 int FUNC_2 (struct tegra20_spdif*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_1, int VAR_2,
    struct snd_soc_dai *VAR_3)
{
 struct tegra20_spdif *VAR_4 = FUNC_0(VAR_3);

 switch (VAR_2) {
 case 130:
 case 132:
 case 131:
  FUNC_1(VAR_4);
  break;
 case 129:
 case 133:
 case 128:
  FUNC_2(VAR_4);
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
