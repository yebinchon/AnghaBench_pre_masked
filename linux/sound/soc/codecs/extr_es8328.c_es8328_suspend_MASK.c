
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dev; } ;
struct es8328_priv {int supplies; int clk; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int ) ;
 struct es8328_priv* FUNC_4 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_component *VAR_0)
{
 struct es8328_priv *VAR_1;
 int VAR_2;

 VAR_1 = FUNC_4(VAR_0);

 FUNC_1(VAR_1->clk);

 VAR_2 = FUNC_3(FUNC_0(VAR_1->supplies),
   VAR_1->supplies);
 if (VAR_2) {
  FUNC_2(VAR_0->dev, "unable to disable regulators\n");
  return VAR_2;
 }
 return 0;
}
