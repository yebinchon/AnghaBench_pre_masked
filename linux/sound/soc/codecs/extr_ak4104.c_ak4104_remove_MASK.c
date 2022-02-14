
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct ak4104_private {int regulator; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int,int ) ;
 int FUNC_1 (int ) ;
 struct ak4104_private* FUNC_2 (struct snd_soc_component*) ;

__attribute__((used)) static void FUNC_3(struct snd_soc_component *VAR_3)
{
 struct ak4104_private *VAR_4 = FUNC_2(VAR_3);

 FUNC_0(VAR_4->regmap, VAR_2,
      VAR_0 | VAR_1, 0);
 FUNC_1(VAR_4->regulator);
}
