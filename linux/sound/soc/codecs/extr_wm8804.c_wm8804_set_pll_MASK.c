
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8804_priv {int dev; int regmap; int mclk_div; } ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct pll_div {int n; int prescale; int freqmode; int mclkdiv; int k; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct pll_div*,unsigned int,unsigned int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int,int,int*) ;
 struct wm8804_priv* FUNC_4 (struct snd_soc_component*) ;
 int FUNC_5 (struct snd_soc_component*,int ,int,int) ;
 int FUNC_6 (struct snd_soc_component*,int ,int) ;

__attribute__((used)) static int FUNC_7(struct snd_soc_dai *VAR_6, int VAR_7,
     int VAR_8, unsigned int VAR_9,
     unsigned int VAR_10)
{
 struct snd_soc_component *VAR_11 = VAR_6->component;
 struct wm8804_priv *VAR_12 = FUNC_4(VAR_11);
 bool VAR_13;

 if (!VAR_9 || !VAR_10) {

  FUNC_3(VAR_12->regmap, VAR_5,
      0x1, 0x1, &VAR_13);
  if (VAR_13)
   FUNC_2(VAR_12->dev);
 } else {
  int VAR_14;
  struct pll_div VAR_15;

  VAR_14 = FUNC_0(&VAR_15, VAR_10, VAR_9,
      VAR_12->mclk_div);
  if (VAR_14)
   return VAR_14;


  FUNC_3(VAR_12->regmap, VAR_5,
      0x1, 0x1, &VAR_13);
  if (!VAR_13)
   FUNC_1(VAR_12->dev);


  FUNC_5(VAR_11, VAR_3, 0xf | 0x10,
        VAR_15.n | (VAR_15.prescale << 4));

  FUNC_5(VAR_11, VAR_4, 0x3 | 0x8,
        VAR_15.freqmode | (VAR_15.mclkdiv << 3));

  FUNC_6(VAR_11, VAR_0, VAR_15.k & 0xff);
  FUNC_6(VAR_11, VAR_1, (VAR_15.k >> 8) & 0xff);
  FUNC_6(VAR_11, VAR_2, VAR_15.k >> 16);


  FUNC_5(VAR_11, VAR_5, 0x1, 0);
 }

 return 0;
}
