
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct snd_soc_dai {int component; } ;
struct cs53l30_private {int mclk_rate; int regmap; } ;
struct TYPE_2__ {int mclkx; int ratio; int mclkdiv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (int ,int ,int ,int ) ;
 struct cs53l30_private* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dai *VAR_3,
         int VAR_4, unsigned int VAR_5, int VAR_6)
{
 struct cs53l30_private *VAR_7 = FUNC_2(VAR_3->component);
 int VAR_8;
 u32 VAR_9;


 VAR_8 = FUNC_0(VAR_5);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_9 = VAR_2[VAR_8].mclkx /
      VAR_2[VAR_8].ratio;

 FUNC_1(VAR_7->regmap, VAR_0,
      VAR_1,
      VAR_2[VAR_8].mclkdiv);

 VAR_7->mclk_rate = VAR_9;

 return 0;
}
