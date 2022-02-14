
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8993_priv {int sysclk_source; int mclk_rate; int sysclk_rate; int fll_fout; } ;
struct snd_soc_component {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;


 unsigned int VAR_3 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*) ;
 struct wm8993_priv* FUNC_2 (struct snd_soc_component*) ;
 unsigned int FUNC_3 (struct snd_soc_component*,int ) ;
 int FUNC_4 (struct snd_soc_component*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_component *VAR_4)
{
 struct wm8993_priv *VAR_5 = FUNC_2(VAR_4);
 unsigned int VAR_6;


 switch (VAR_5->sysclk_source) {
 case 128:
  FUNC_0(VAR_4->dev, "Using %dHz MCLK\n", VAR_5->mclk_rate);

  VAR_6 = FUNC_3(VAR_4, VAR_1);
  VAR_6 &= ~(VAR_2 | VAR_3);
  if (VAR_5->mclk_rate > 13500000) {
   VAR_6 |= VAR_2;
   VAR_5->sysclk_rate = VAR_5->mclk_rate / 2;
  } else {
   VAR_6 &= ~VAR_2;
   VAR_5->sysclk_rate = VAR_5->mclk_rate;
  }
  FUNC_4(VAR_4, VAR_1, VAR_6);
  break;

 case 129:
  FUNC_0(VAR_4->dev, "Using %dHz FLL clock\n",
   VAR_5->fll_fout);

  VAR_6 = FUNC_3(VAR_4, VAR_1);
  VAR_6 |= VAR_3;
  if (VAR_5->fll_fout > 13500000) {
   VAR_6 |= VAR_2;
   VAR_5->sysclk_rate = VAR_5->fll_fout / 2;
  } else {
   VAR_6 &= ~VAR_2;
   VAR_5->sysclk_rate = VAR_5->fll_fout;
  }
  FUNC_4(VAR_4, VAR_1, VAR_6);
  break;

 default:
  FUNC_1(VAR_4->dev, "System clock not configured\n");
  return -VAR_0;
 }

 FUNC_0(VAR_4->dev, "CLK_SYS is %dHz\n", VAR_5->sysclk_rate);

 return 0;
}
