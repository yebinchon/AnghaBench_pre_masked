
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {scalar_t__ stream; int runtime; } ;
struct axi_i2s {int clk_ref; int rate_constraints; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int *) ;
 struct axi_i2s* FUNC_3 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_5,
 struct snd_soc_dai *VAR_6)
{
 struct axi_i2s *VAR_7 = FUNC_3(VAR_6);
 uint32_t VAR_8;
 int VAR_9;

 if (VAR_5->stream == VAR_4)
  VAR_8 = VAR_1;
 else
  VAR_8 = VAR_2;

 FUNC_1(VAR_7->regmap, VAR_0, VAR_8);

 VAR_9 = FUNC_2(VAR_5->runtime, 0,
      VAR_3,
      &VAR_7->rate_constraints);
 if (VAR_9)
  return VAR_9;

 return FUNC_0(VAR_7->clk_ref);
}
