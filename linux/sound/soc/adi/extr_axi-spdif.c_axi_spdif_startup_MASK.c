
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {int runtime; } ;
struct axi_spdif {int regmap; int clk_ref; int rate_constraints; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int *) ;
 struct axi_spdif* FUNC_3 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_3,
 struct snd_soc_dai *VAR_4)
{
 struct axi_spdif *VAR_5 = FUNC_3(VAR_4);
 int VAR_6;

 VAR_6 = FUNC_2(VAR_3->runtime, 0,
      VAR_2,
      &VAR_5->rate_constraints);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_0(VAR_5->clk_ref);
 if (VAR_6)
  return VAR_6;

 FUNC_1(VAR_5->regmap, VAR_1,
  VAR_0, VAR_0);

 return 0;
}
