
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int id; struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct rt5677_priv {int regmap; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int,unsigned int) ;
 struct rt5677_priv* FUNC_1 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_3, unsigned int VAR_4,
   unsigned int VAR_5, int VAR_6, int VAR_7)
{
 struct snd_soc_component *VAR_8 = VAR_3->component;
 struct rt5677_priv *VAR_9 = FUNC_1(VAR_8);
 unsigned int VAR_10 = 0, VAR_11 = 0;

 if (VAR_5 || VAR_4)
  VAR_10 |= (1 << 12);

 switch (VAR_6) {
 case 4:
  VAR_10 |= (1 << 10);
  break;
 case 6:
  VAR_10 |= (2 << 10);
  break;
 case 8:
  VAR_10 |= (3 << 10);
  break;
 case 2:
 default:
  break;
 }

 switch (VAR_7) {
 case 20:
  VAR_10 |= (1 << 8);
  break;
 case 25:
  VAR_11 = 0x8080;

 case 24:
  VAR_10 |= (2 << 8);
  break;
 case 32:
  VAR_10 |= (3 << 8);
  break;
 case 16:
 default:
  break;
 }

 switch (VAR_3->id) {
 case 129:
  FUNC_0(VAR_9->regmap, VAR_1, 0x1f00,
   VAR_10);
  FUNC_0(VAR_9->regmap, VAR_0, 0x8000,
   VAR_11);
  break;
 case 128:
  FUNC_0(VAR_9->regmap, VAR_2, 0x1f00,
   VAR_10);
  FUNC_0(VAR_9->regmap, VAR_0, 0x80,
   VAR_11);
  break;
 default:
  break;
 }

 return 0;
}
