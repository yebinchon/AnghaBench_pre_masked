
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dev; } ;
struct pm860x_priv {int * irq; int * name; int regmap; struct snd_soc_component* component; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,struct pm860x_priv*) ;
 int VAR_1 ;
 int FUNC_2 (int ,int *,int ,int ,int ,struct pm860x_priv*) ;
 struct pm860x_priv* FUNC_3 (struct snd_soc_component*) ;
 int FUNC_4 (struct snd_soc_component*,int ) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_component *VAR_2)
{
 struct pm860x_priv *VAR_3 = FUNC_3(VAR_2);
 int VAR_4, VAR_5;

 VAR_3->component = VAR_2;
 FUNC_4(VAR_2, VAR_3->regmap);

 for (VAR_4 = 0; VAR_4 < 4; VAR_4++) {
  VAR_5 = FUNC_2(VAR_3->irq[VAR_4], ((void*)0),
        VAR_1, VAR_0,
        VAR_3->name[VAR_4], VAR_3);
  if (VAR_5 < 0) {
   FUNC_0(VAR_2->dev, "Failed to request IRQ!\n");
   goto out;
  }
 }

 return 0;

out:
 while (--VAR_4 >= 0)
  FUNC_1(VAR_3->irq[VAR_4], VAR_3);
 return VAR_5;
}
