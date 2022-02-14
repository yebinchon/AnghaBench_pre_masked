
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8904_priv {int sysclk_src; unsigned int mclk_rate; unsigned int fll_fout; unsigned int sysclk_rate; } ;
struct snd_soc_component {int dev; } ;


 int VAR_0 ;


 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int FUNC_0 (int ,char*,unsigned int) ;
 int FUNC_1 (int ,char*) ;
 struct wm8904_priv* FUNC_2 (struct snd_soc_component*) ;
 unsigned int FUNC_3 (struct snd_soc_component*,int ) ;
 int FUNC_4 (struct snd_soc_component*,int ,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_component *VAR_9)
{
 struct wm8904_priv *VAR_10 = FUNC_2(VAR_9);
 unsigned int VAR_11, VAR_12, VAR_13;


 VAR_12 = FUNC_3(VAR_9, VAR_3);
 FUNC_4(VAR_9, VAR_3,
       VAR_8, 0);


 switch (VAR_10->sysclk_src) {
 case 128:
  FUNC_0(VAR_9->dev, "Using %dHz MCLK\n", VAR_10->mclk_rate);

  VAR_12 &= ~VAR_8;
  VAR_13 = VAR_10->mclk_rate;


  FUNC_4(VAR_9, VAR_4,
        VAR_6 | VAR_5, 0);
  break;

 case 129:
  FUNC_0(VAR_9->dev, "Using %dHz FLL clock\n",
   VAR_10->fll_fout);

  VAR_12 |= VAR_8;
  VAR_13 = VAR_10->fll_fout;
  break;

 default:
  FUNC_1(VAR_9->dev, "System clock not configured\n");
  return -VAR_0;
 }


 if (VAR_13 > 13500000) {
  VAR_11 = VAR_7;
  VAR_10->sysclk_rate = VAR_13 / 2;
 } else {
  VAR_11 = 0;
  VAR_10->sysclk_rate = VAR_13;
 }

 FUNC_4(VAR_9, VAR_2, VAR_7,
       VAR_11);

 FUNC_4(VAR_9, VAR_3,
       VAR_1 | VAR_8, VAR_12);

 FUNC_0(VAR_9->dev, "CLK_SYS is %dHz\n", VAR_10->sysclk_rate);

 return 0;
}
