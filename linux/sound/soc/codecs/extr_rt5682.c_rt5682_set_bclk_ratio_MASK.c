
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {size_t id; int dev; struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct rt5682_priv {unsigned int* bclk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,unsigned int) ;
 struct rt5682_priv* FUNC_1 (struct snd_soc_component*) ;
 int FUNC_2 (struct snd_soc_component*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dai *VAR_5, unsigned int VAR_6)
{
 struct snd_soc_component *VAR_7 = VAR_5->component;
 struct rt5682_priv *VAR_8 = FUNC_1(VAR_7);

 VAR_8->bclk[VAR_5->id] = VAR_6;

 switch (VAR_6) {
 case 64:
  FUNC_2(VAR_7, VAR_1,
   VAR_4,
   VAR_3);
  break;
 case 32:
  FUNC_2(VAR_7, VAR_1,
   VAR_4,
   VAR_2);
  break;
 default:
  FUNC_0(VAR_5->dev, "Invalid bclk ratio %d\n", VAR_6);
  return -VAR_0;
 }

 return 0;
}
