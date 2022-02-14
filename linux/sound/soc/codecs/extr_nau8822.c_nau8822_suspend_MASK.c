
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct nau8822 {int regmap; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct snd_soc_component*,int ) ;
 struct nau8822* FUNC_2 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_component *VAR_1)
{
 struct nau8822 *VAR_2 = FUNC_2(VAR_1);

 FUNC_1(VAR_1, VAR_0);

 FUNC_0(VAR_2->regmap);

 return 0;
}
