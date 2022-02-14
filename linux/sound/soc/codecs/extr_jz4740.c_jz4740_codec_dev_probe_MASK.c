
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct jz4740_codec {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 struct jz4740_codec* FUNC_1 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_component *VAR_2)
{
 struct jz4740_codec *VAR_3 = FUNC_1(VAR_2);

 FUNC_0(VAR_3->regmap, VAR_1,
   VAR_0, VAR_0);

 return 0;
}
