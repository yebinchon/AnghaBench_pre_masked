
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8737_priv {int supplies; } ;
struct snd_soc_component {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct snd_soc_component*,int ) ;
 struct wm8737_priv* FUNC_5 (struct snd_soc_component*) ;
 int FUNC_6 (struct snd_soc_component*,int ,int ,int ) ;
 int FUNC_7 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_8(struct snd_soc_component *VAR_5)
{
 struct wm8737_priv *VAR_6 = FUNC_5(VAR_5);
 int VAR_7;

 VAR_7 = FUNC_3(FUNC_0(VAR_6->supplies),
        VAR_6->supplies);
 if (VAR_7 != 0) {
  FUNC_1(VAR_5->dev, "Failed to enable supplies: %d\n", VAR_7);
  goto err_get;
 }

 VAR_7 = FUNC_7(VAR_5);
 if (VAR_7 < 0) {
  FUNC_1(VAR_5->dev, "Failed to issue reset\n");
  goto err_enable;
 }

 FUNC_6(VAR_5, VAR_1, VAR_2,
       VAR_2);
 FUNC_6(VAR_5, VAR_3, VAR_4,
       VAR_4);

 FUNC_4(VAR_5, VAR_0);


 FUNC_2(FUNC_0(VAR_6->supplies), VAR_6->supplies);

 return 0;

err_enable:
 FUNC_2(FUNC_0(VAR_6->supplies), VAR_6->supplies);
err_get:
 return VAR_7;
}
