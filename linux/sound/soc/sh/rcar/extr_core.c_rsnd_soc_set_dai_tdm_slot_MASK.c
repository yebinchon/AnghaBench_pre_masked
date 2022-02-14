
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_soc_dai {int dummy; } ;
struct rsnd_priv {int dummy; } ;
struct rsnd_dai {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,int) ;
 struct rsnd_priv* FUNC_1 (struct snd_soc_dai*) ;
 struct rsnd_dai* FUNC_2 (struct snd_soc_dai*) ;
 struct device* FUNC_3 (struct rsnd_priv*) ;
 int FUNC_4 (struct rsnd_dai*,int) ;
 int FUNC_5 (struct rsnd_dai*,int) ;
 int FUNC_6 (struct rsnd_dai*,int) ;

__attribute__((used)) static int FUNC_7(struct snd_soc_dai *VAR_1,
         u32 VAR_2, u32 VAR_3,
         int VAR_4, int VAR_5)
{
 struct rsnd_priv *VAR_6 = FUNC_1(VAR_1);
 struct rsnd_dai *VAR_7 = FUNC_2(VAR_1);
 struct device *VAR_8 = FUNC_3(VAR_6);

 switch (VAR_5) {
 case 16:
 case 24:
 case 32:
  break;
 default:

  VAR_5 = 32;
 }

 switch (VAR_4) {
 case 2:

 case 6:
 case 8:

  FUNC_4(VAR_7, VAR_4);
  FUNC_5(VAR_7, 1);
  FUNC_6(VAR_7, VAR_5);
  break;
 default:
  FUNC_0(VAR_8, "unsupported TDM slots (%d)\n", VAR_4);
  return -VAR_0;
 }

 return 0;
}
