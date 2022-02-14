
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dev; } ;
struct es8328_priv {int supplies; int clk; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 struct es8328_priv* FUNC_8 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_9(struct snd_soc_component *VAR_0)
{
 struct es8328_priv *VAR_1;
 int VAR_2;

 VAR_1 = FUNC_8(VAR_0);

 VAR_2 = FUNC_7(FUNC_0(VAR_1->supplies),
     VAR_1->supplies);
 if (VAR_2) {
  FUNC_4(VAR_0->dev, "unable to enable regulators\n");
  return VAR_2;
 }


 VAR_1->clk = FUNC_5(VAR_0->dev, ((void*)0));
 if (FUNC_1(VAR_1->clk)) {
  FUNC_4(VAR_0->dev, "codec clock missing or invalid\n");
  VAR_2 = FUNC_2(VAR_1->clk);
  goto clk_fail;
 }

 VAR_2 = FUNC_3(VAR_1->clk);
 if (VAR_2) {
  FUNC_4(VAR_0->dev, "unable to prepare codec clk\n");
  goto clk_fail;
 }

 return 0;

clk_fail:
 FUNC_6(FUNC_0(VAR_1->supplies),
          VAR_1->supplies);
 return VAR_2;
}
