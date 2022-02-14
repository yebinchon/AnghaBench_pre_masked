
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {scalar_t__ stream; } ;
struct axi_i2s {int regmap; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;






 int FUNC_0 (int ,int ,unsigned int,unsigned int) ;
 struct axi_i2s* FUNC_1 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_5, int VAR_6,
 struct snd_soc_dai *VAR_7)
{
 struct axi_i2s *VAR_8 = FUNC_1(VAR_7);
 unsigned int VAR_9, VAR_10;

 if (VAR_5->stream == VAR_4)
  VAR_9 = VAR_0;
 else
  VAR_9 = VAR_1;

 switch (VAR_6) {
 case 130:
 case 131:
 case 132:
  VAR_10 = VAR_9;
  break;
 case 129:
 case 128:
 case 133:
  VAR_10 = 0;
  break;
 default:
  return -VAR_3;
 }

 FUNC_0(VAR_8->regmap, VAR_2, VAR_9, VAR_10);

 return 0;
}
