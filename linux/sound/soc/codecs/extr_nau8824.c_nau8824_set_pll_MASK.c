
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct nau8824_fll {int clk_ref_div; int fll_int; int fll_frac; int ratio; int mclk_src; } ;
struct nau8824 {int regmap; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ,char*,unsigned int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (unsigned int,int,struct nau8824_fll*) ;
 int FUNC_4 (int ,struct nau8824_fll*) ;
 int FUNC_5 (int ,int ,int ,int ) ;
 struct nau8824* FUNC_6 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_7(struct snd_soc_component *VAR_3, int VAR_4, int VAR_5,
  unsigned int VAR_6, unsigned int VAR_7)
{
 struct nau8824 *VAR_8 = FUNC_6(VAR_3);
 struct nau8824_fll VAR_9;
 int VAR_10, VAR_11;

 VAR_11 = VAR_7 / 256;
 VAR_10 = FUNC_3(VAR_6, VAR_11, &VAR_9);
 if (VAR_10 < 0) {
  FUNC_1(VAR_8->dev, "Unsupported input clock %d\n", VAR_6);
  return VAR_10;
 }
 FUNC_0(VAR_8->dev, "mclk_src=%x ratio=%x fll_frac=%x fll_int=%x clk_ref_div=%x\n",
  VAR_9.mclk_src, VAR_9.ratio, VAR_9.fll_frac,
  VAR_9.fll_int, VAR_9.clk_ref_div);

 FUNC_4(VAR_8->regmap, &VAR_9);
 FUNC_2(2);
 FUNC_5(VAR_8->regmap, VAR_2,
  VAR_0, VAR_1);

 return 0;
}
