
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct mtk_base_afe {int regmap; } ;


 struct mtk_base_afe* FUNC_0 (struct snd_soc_component*) ;
 int FUNC_1 (struct snd_soc_component*,int ) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_component *VAR_0)
{
 struct mtk_base_afe *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(VAR_0, VAR_1->regmap);

 return 0;
}
