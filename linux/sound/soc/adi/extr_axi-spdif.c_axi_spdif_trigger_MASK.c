
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct axi_spdif {int regmap; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;






 int FUNC_0 (int ,int ,unsigned int,unsigned int) ;
 struct axi_spdif* FUNC_1 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_3, int VAR_4,
 struct snd_soc_dai *VAR_5)
{
 struct axi_spdif *VAR_6 = FUNC_1(VAR_5);
 unsigned int VAR_7;

 switch (VAR_4) {
 case 130:
 case 131:
 case 132:
  VAR_7 = VAR_0;
  break;
 case 129:
 case 128:
 case 133:
  VAR_7 = 0;
  break;
 default:
  return -VAR_2;
 }

 FUNC_0(VAR_6->regmap, VAR_1,
  VAR_0, VAR_7);

 return 0;
}
