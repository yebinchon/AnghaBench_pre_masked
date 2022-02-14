
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8753_priv {scalar_t__ dai_func; int charge_work; } ;
struct snd_soc_component {int dev; } ;


 int FUNC_0 (int *,int ) ;
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
 int FUNC_1 (int ,char*,int) ;
 struct wm8753_priv* FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (struct snd_soc_component*,int ,int,int) ;
 int VAR_10 ;
 int FUNC_4 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_component *VAR_11)
{
 struct wm8753_priv *VAR_12 = FUNC_2(VAR_11);
 int VAR_13;

 FUNC_0(&VAR_12->charge_work, VAR_10);

 VAR_13 = FUNC_4(VAR_11);
 if (VAR_13 < 0) {
  FUNC_1(VAR_11->dev, "Failed to issue reset: %d\n", VAR_13);
  return VAR_13;
 }

 VAR_12->dai_func = 0;


 FUNC_3(VAR_11, VAR_1, 0x0100, 0x0100);
 FUNC_3(VAR_11, VAR_6, 0x0100, 0x0100);
 FUNC_3(VAR_11, VAR_0, 0x0100, 0x0100);
 FUNC_3(VAR_11, VAR_5, 0x0100, 0x0100);
 FUNC_3(VAR_11, VAR_3, 0x0100, 0x0100);
 FUNC_3(VAR_11, VAR_8, 0x0100, 0x0100);
 FUNC_3(VAR_11, VAR_4, 0x0100, 0x0100);
 FUNC_3(VAR_11, VAR_9, 0x0100, 0x0100);
 FUNC_3(VAR_11, VAR_2, 0x0100, 0x0100);
 FUNC_3(VAR_11, VAR_7, 0x0100, 0x0100);

 return 0;
}
