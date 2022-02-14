
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct cx2072x_priv {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 struct cx2072x_priv* FUNC_1 (struct snd_soc_component*) ;

__attribute__((used)) static void FUNC_2(struct snd_soc_component *VAR_2)
{
 struct cx2072x_priv *VAR_3 = FUNC_1(VAR_2);

 FUNC_0(VAR_3->regmap, VAR_1, 0);
 FUNC_0(VAR_3->regmap, VAR_0, 0);
}
