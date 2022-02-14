
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct cs42l73_private {int mclksel; int sysclk; int mclk; } ;
struct TYPE_2__ {int mclkx; int ratio; int mclkdiv; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (int ,char*,int,int,int) ;
 struct cs42l73_private* FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (struct snd_soc_component*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_dai *VAR_2, unsigned int VAR_3)
{
 struct snd_soc_component *VAR_4 = VAR_2->component;
 struct cs42l73_private *VAR_5 = FUNC_2(VAR_4);

 int VAR_6;
 u32 VAR_7 = 0;
 u8 VAR_8 = 0;


 VAR_6 = FUNC_0(VAR_3);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_7 = VAR_1[VAR_6].mclkx /
  VAR_1[VAR_6].ratio;

 FUNC_1(VAR_4->dev, "MCLK%u %u  <-> internal MCLK %u\n",
   VAR_5->mclksel + 1, VAR_1[VAR_6].mclkx,
   VAR_7);

 VAR_8 = (VAR_5->mclksel << 4) |
  (VAR_1[VAR_6].mclkdiv << 1);

 FUNC_3(VAR_4, VAR_0, VAR_8);

 VAR_5->sysclk = VAR_6;
 VAR_5->mclk = VAR_7;

 return 0;
}
