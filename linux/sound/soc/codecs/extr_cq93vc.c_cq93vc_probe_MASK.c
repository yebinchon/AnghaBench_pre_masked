
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_component {TYPE_1__* dev; } ;
struct davinci_vc {int regmap; } ;
struct TYPE_2__ {struct davinci_vc* platform_data; } ;


 int FUNC_0 (struct snd_soc_component*,int ) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_component *VAR_0)
{
 struct davinci_vc *VAR_1 = VAR_0->dev->platform_data;

 FUNC_0(VAR_0, VAR_1->regmap);

 return 0;
}
