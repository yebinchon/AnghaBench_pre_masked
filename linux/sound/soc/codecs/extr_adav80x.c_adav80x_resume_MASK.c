
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct adav80x {int regmap; } ;


 int FUNC_0 (int ) ;
 struct adav80x* FUNC_1 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_component *VAR_0)
{
 struct adav80x *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->regmap);

 return 0;
}
