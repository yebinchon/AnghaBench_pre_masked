
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8770_priv {int supplies; struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 struct wm8770_priv* FUNC_4 (struct snd_soc_component*) ;
 int FUNC_5 (struct snd_soc_component*,int ,int,int) ;
 int FUNC_6 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_7(struct snd_soc_component *VAR_11)
{
 struct wm8770_priv *VAR_12;
 int VAR_13;

 VAR_12 = FUNC_4(VAR_11);
 VAR_12->component = VAR_11;

 VAR_13 = FUNC_3(FUNC_0(VAR_12->supplies),
        VAR_12->supplies);
 if (VAR_13) {
  FUNC_1(VAR_11->dev, "Failed to enable supplies: %d\n", VAR_13);
  return VAR_13;
 }

 VAR_13 = FUNC_6(VAR_11);
 if (VAR_13 < 0) {
  FUNC_1(VAR_11->dev, "Failed to issue reset: %d\n", VAR_13);
  goto err_reg_enable;
 }


 FUNC_5(VAR_11, VAR_6, 0x100, 0x100);
 FUNC_5(VAR_11, VAR_5, 0x100, 0x100);
 FUNC_5(VAR_11, VAR_7, 0x100, 0x100);
 FUNC_5(VAR_11, VAR_8, 0x100, 0x100);
 FUNC_5(VAR_11, VAR_9, 0x100, 0x100);
 FUNC_5(VAR_11, VAR_10, 0x100, 0x100);
 FUNC_5(VAR_11, VAR_0, 0x100, 0x100);
 FUNC_5(VAR_11, VAR_1, 0x100, 0x100);
 FUNC_5(VAR_11, VAR_2, 0x100, 0x100);
 FUNC_5(VAR_11, VAR_3, 0x100, 0x100);


 FUNC_5(VAR_11, VAR_4, 0x10, 0x10);

err_reg_enable:
 FUNC_2(FUNC_0(VAR_12->supplies), VAR_12->supplies);
 return VAR_13;
}
