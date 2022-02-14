
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_component {int dummy; } ;
struct TYPE_2__ {int format; } ;
struct cs42l52_private {TYPE_1__ config; int sysclk; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_soc_component*) ;
 int FUNC_1 (struct snd_soc_component*) ;
 int FUNC_2 (int ,int) ;
 struct cs42l52_private* FUNC_3 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_component *VAR_2)
{
 struct cs42l52_private *VAR_3 = FUNC_3(VAR_2);

 FUNC_2(VAR_3->regmap, 1);

 FUNC_0(VAR_2);

 FUNC_1(VAR_2);

 VAR_3->sysclk = VAR_0;
 VAR_3->config.format = VAR_1;

 return 0;
}
