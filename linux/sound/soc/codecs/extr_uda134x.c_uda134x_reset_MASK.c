
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uda134x_priv {int regmap; } ;
struct snd_soc_component {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,unsigned int,unsigned int) ;
 struct uda134x_priv* FUNC_2 (struct snd_soc_component*) ;

__attribute__((used)) static inline void FUNC_3(struct snd_soc_component *VAR_1)
{
 struct uda134x_priv *VAR_2 = FUNC_2(VAR_1);
 unsigned int VAR_3 = 1<<6;

 FUNC_1(VAR_2->regmap, VAR_0, VAR_3, VAR_3);
 FUNC_0(1);
 FUNC_1(VAR_2->regmap, VAR_0, VAR_3, 0);
}
