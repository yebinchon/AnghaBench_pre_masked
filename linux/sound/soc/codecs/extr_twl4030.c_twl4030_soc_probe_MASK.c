
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twl4030_priv {int sysclk; } ;
struct snd_soc_component {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct twl4030_priv* FUNC_0 (int ,int,int ) ;
 int FUNC_1 (struct snd_soc_component*,struct twl4030_priv*) ;
 int FUNC_2 () ;
 int FUNC_3 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_component *VAR_2)
{
 struct twl4030_priv *VAR_3;

 VAR_3 = FUNC_0(VAR_2->dev, sizeof(struct twl4030_priv),
          VAR_1);
 if (!VAR_3)
  return -VAR_0;
 FUNC_1(VAR_2, VAR_3);

 VAR_3->sysclk = FUNC_2() / 1000;

 FUNC_3(VAR_2);

 return 0;
}
