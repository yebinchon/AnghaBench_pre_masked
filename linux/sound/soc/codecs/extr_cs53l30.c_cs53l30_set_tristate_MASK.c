
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct snd_soc_dai {int component; } ;
struct cs53l30_private {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 struct cs53l30_private* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_3, int VAR_4)
{
 struct cs53l30_private *VAR_5 = FUNC_1(VAR_3->component);
 u8 VAR_6 = VAR_4 ? VAR_0 : 0;

 return FUNC_0(VAR_5->regmap, VAR_2,
      VAR_1, VAR_6);
}
