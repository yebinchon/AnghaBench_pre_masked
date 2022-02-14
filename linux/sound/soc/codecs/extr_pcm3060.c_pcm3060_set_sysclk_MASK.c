
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dai {size_t id; struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct pcm3060_priv {TYPE_1__* dai; int regmap; } ;
struct TYPE_2__ {unsigned int sclk_freq; } ;


 int VAR_0 ;



 size_t VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,unsigned int,unsigned int,unsigned int) ;
 struct pcm3060_priv* FUNC_2 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dai *VAR_6, int VAR_7,
         unsigned int VAR_8, int VAR_9)
{
 struct snd_soc_component *VAR_10 = VAR_6->component;
 struct pcm3060_priv *VAR_11 = FUNC_2(VAR_10);
 unsigned int VAR_12;
 unsigned int VAR_13;

 if (VAR_9 != VAR_5) {
  FUNC_0(VAR_10->dev, "unsupported sysclock dir: %d\n", VAR_9);
  return -VAR_0;
 }

 switch (VAR_7) {
 case 128:
  VAR_13 = 0;
  break;

 case 130:
  VAR_13 = (VAR_6->id == VAR_1 ? VAR_4 : 0);
  break;

 case 129:
  VAR_13 = (VAR_6->id == VAR_1 ? 0 : VAR_4);
  break;

 default:
  FUNC_0(VAR_10->dev, "unsupported sysclock id: %d\n", VAR_7);
  return -VAR_0;
 }

 if (VAR_6->id == VAR_1)
  VAR_12 = VAR_2;
 else
  VAR_12 = VAR_3;

 FUNC_1(VAR_11->regmap, VAR_12, VAR_4, VAR_13);

 VAR_11->dai[VAR_6->id].sclk_freq = VAR_8;

 return 0;
}
