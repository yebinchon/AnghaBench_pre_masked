
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct axi_i2s {int regmap; int clk_ref; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,unsigned int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (int ,int ,unsigned int) ;
 struct axi_i2s* FUNC_4 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_2,
 struct snd_pcm_hw_params *VAR_3, struct snd_soc_dai *VAR_4)
{
 struct axi_i2s *VAR_5 = FUNC_4(VAR_4);
 unsigned int VAR_6, VAR_7;
 unsigned int VAR_8;

 VAR_8 = FUNC_2(VAR_3) * VAR_0;

 VAR_7 = VAR_0 / 2 - 1;
 VAR_6 = FUNC_0(FUNC_1(VAR_5->clk_ref), VAR_8) / 2 - 1;

 FUNC_3(VAR_5->regmap, VAR_1, (VAR_7 << 16) |
  VAR_6);

 return 0;
}
