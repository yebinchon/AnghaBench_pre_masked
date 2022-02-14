
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_jack {int dummy; } ;
struct snd_soc_component {int dummy; } ;
struct rt274_priv {int regmap; struct snd_soc_jack* jack; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,struct rt274_priv*) ;
 struct rt274_priv* FUNC_2 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_component *VAR_3,
 struct snd_soc_jack *VAR_4, void *VAR_5)
{
 struct rt274_priv *VAR_6 = FUNC_2(VAR_3);

 VAR_6->jack = VAR_4;

 if (VAR_4 == ((void*)0)) {

  FUNC_0(VAR_6->regmap, VAR_0,
     VAR_2, VAR_1);

  return 0;
 }

 FUNC_0(VAR_6->regmap, VAR_0,
    VAR_2, VAR_2);


 FUNC_1(0, VAR_6);

 return 0;
}
