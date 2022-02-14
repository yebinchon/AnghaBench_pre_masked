
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dev; } ;
struct msm8916_wcd_digital_priv {int mclk; } ;


 int FUNC_0 (int ,unsigned int) ;
 struct msm8916_wcd_digital_priv* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_component *VAR_0,
      int VAR_1, int VAR_2,
      unsigned int VAR_3, int VAR_4)
{
 struct msm8916_wcd_digital_priv *VAR_5 = FUNC_1(VAR_0->dev);

 return FUNC_0(VAR_5->mclk, VAR_3);
}
