
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8741_priv {int supplies; } ;
struct snd_soc_component {int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 struct wm8741_priv* FUNC_5 (struct snd_soc_component*) ;
 int FUNC_6 (struct snd_soc_component*) ;
 int FUNC_7 (struct snd_soc_component*) ;
 int FUNC_8 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_9(struct snd_soc_component *VAR_0)
{
 struct wm8741_priv *VAR_1 = FUNC_5(VAR_0);
 int VAR_2 = 0;

 VAR_2 = FUNC_4(FUNC_0(VAR_1->supplies),
        VAR_1->supplies);
 if (VAR_2 != 0) {
  FUNC_2(VAR_0->dev, "Failed to enable supplies: %d\n", VAR_2);
  goto err_get;
 }

 VAR_2 = FUNC_8(VAR_0);
 if (VAR_2 < 0) {
  FUNC_2(VAR_0->dev, "Failed to issue reset\n");
  goto err_enable;
 }

 VAR_2 = FUNC_7(VAR_0);
 if (VAR_2 < 0) {
  FUNC_2(VAR_0->dev, "Failed to change default settings\n");
  goto err_enable;
 }

 VAR_2 = FUNC_6(VAR_0);
 if (VAR_2 < 0) {
  FUNC_2(VAR_0->dev, "Failed to add controls\n");
  goto err_enable;
 }

 FUNC_1(VAR_0->dev, "Successful registration\n");
 return VAR_2;

err_enable:
 FUNC_3(FUNC_0(VAR_1->supplies), VAR_1->supplies);
err_get:
 return VAR_2;
}
